﻿#include <iostream>
#include <cstdint>
#include <array>
#include <chrono>

#include "getValueAVXMatrixMultiplication.h"
#include "getValueBooleanMatrixMultiplication.h"
#include "getValueStandardMatrixMultiplication.h"
#include "getValueUnrolledMatrixMultiplication.h"

int main() {

    std::array<int16_t,33*33> testMatrix16bitFull= {
     1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     2, 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     3, 18, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     4, 19, 33, 46,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     5, 20, 34, 47, 59,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     6, 21, 35, 48, 60, 71,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     7, 22, 36, 49, 61, 72, 82,  0,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     8, 23, 37, 50, 62, 73, 83, 92,  0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
     9, 24, 38, 51, 63, 74, 84, 93,101,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    10, 25, 39, 52, 64, 75, 85, 94,102,109,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    11, 26, 40, 53, 65, 76, 86, 95,103,110,116,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    12, 27, 41, 54, 66, 77, 87, 96,104,111,117,122,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    13, 28, 42, 55, 67, 78, 88, 97,105,112,118,123,127,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    14, 29, 43, 56, 68, 79, 89, 98,106,113,119,124,  1,  4,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    15, 30, 44, 57, 69, 80, 90, 99,107,114,120,125,  2,  5,  7,  0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    16, 31, 45, 58, 70, 81, 91,100,108,115,121,126,  3,  6,  8,  9,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,

    10, 26, 42, 58, 74, 91,108,124, 13, 29, 45, 61, 77, 93,109,125,   14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    11, 27, 43, 59, 75, 92,109,125, 14, 30, 46, 62, 78, 94,110,126,   15, 30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    12, 28, 44, 60, 76, 93,110,126, 15, 31, 47, 63, 79, 95,111,127,   16, 31, 45,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    13, 29, 45, 61, 77, 94,111,127, 16, 32, 48, 64, 80, 96,112,  1,   17, 32, 46, 59,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    14, 30, 46, 62, 78, 95,112,  1, 17, 33, 49, 65, 81, 97,113,  2,   18, 33, 47, 60, 72,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    15, 31, 47, 63, 79, 96,113,  2, 18, 34, 50, 66, 82, 98,114,  3,   19, 34, 48, 61, 73, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    16, 32, 48, 64, 80, 97,114,  3, 19, 35, 51, 67, 83, 99,115,  4,   20, 35, 49, 62, 74, 85, 95,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    17, 33, 49, 65, 81, 98,115,  4, 20, 36, 52, 68, 84,100,116,  5,   21, 36, 50, 63, 75, 86, 96,105,  0,  0,  0,  0,  0,  0,  0,  0,   0,
    18, 34, 50, 66, 82, 99,116,  5, 21, 37, 53, 69, 85,101,117,  6,   22, 37, 51, 64, 76, 87, 97,106,114,  0,  0,  0,  0,  0,  0,  0,   0,
    19, 35, 51, 67, 83,  1,117,  6, 22, 38, 54, 70, 86,102,118,  7,   23, 38, 52, 65, 77, 88, 98,107,115,122,  0,  0,  0,  0,  0,  0,   0,
    20, 36, 52, 68, 84,  2,118,  7, 23, 39, 55, 71, 87,103,119,  8,   24, 39, 53, 66, 78, 89, 99,108,116,123,  2,  0,  0,  0,  0,  0,   0,
    21, 37, 53, 69, 85,  3,119,  8, 24, 40, 56, 72, 88,104,120,  9,   25, 40, 54, 67, 79, 90,100,109,117,124,  3,  8,  0,  0,  0,  0,   0,
    22, 38, 54, 70, 86,  4,120,  9, 25, 41, 57, 73, 89,105,121, 10,   26, 41, 55, 68, 80, 91,101,110,118,125,  4,  9, 13,  0,  0,  0,   0,
    23, 39, 55, 71, 87,  5,121, 10, 26, 42, 58, 74, 90,106,122, 11,   27, 42, 56, 69, 81, 92,102,111,119,126,  5, 10, 14, 17,  0,  0,   0,
    24, 40, 56, 72, 88,  6,122, 11, 27, 43, 59, 75, 91,107,123, 12,   28, 43, 57, 70, 82, 93,103,112,120,127,  6, 11, 15, 18, 20,  0,   0,
    25, 41, 57, 73, 89,  7,123, 12, 28, 44, 60, 76, 92,108,124, 13,   29, 44, 58, 71, 83, 94,104,113,121,  1,  7, 12, 16, 19, 21, 22,   0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, -10,
    };


    std::array<int16_t,33> testState = {2,0,1,0,0,1,1,0,1,0,0,0,0,0,0,2,3,0,0,1,1,0,0,0,0,0,0,0,0,0,0,2,1};


    const int standardResult = getValueStandardMatrixMultiplication(testMatrix16bitFull,testState);



    std::cout << "Correct result using standard matrix multiplication is "<<standardResult << std::endl;

    constexpr int repeats = 1000000;

    //Standard matrix multiplication
    {
        std::cout<<"Regular matrix multiplication"<<std::endl;
        const auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < repeats; i++) {
            volatile int32_t result = getValueStandardMatrixMultiplication(testMatrix16bitFull,testState);
        }
        const auto stop= std::chrono::high_resolution_clock::now();
        const auto duration = stop-start;
        std::cout<<"Took on average "<<(duration_cast<std::chrono::nanoseconds>(duration)).count()/(repeats)<<" ns"<<std::endl;
    }

    //Boolean matrix multiplication
    {
        std::cout<<"Boolean matrix multiplication"<<std::endl;
        if (getValueBooleanMatrixMultiplication(testMatrix16bitFull,testState)!=standardResult)
            std::cout<<"Test failed"<<std::endl;
        else
            std::cout<<"TEST SUCCEEDED"<<std::endl;
        const auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < repeats; i++) {
            volatile int32_t result = getValueBooleanMatrixMultiplication(testMatrix16bitFull,testState);
        }
        const auto stop= std::chrono::high_resolution_clock::now();
        const auto duration = stop-start;
        std::cout<<"Took on average "<<(duration_cast<std::chrono::nanoseconds>(duration)).count()/(repeats)<<" ns"<<std::endl;
    }


    //Manually unrolled matrix multiplication
    {
        std::cout<<"Manually unrolled matrix multiplication"<<std::endl;
        if (getValueUnrolledMatrixMultiplication(testMatrix16bitFull,testState)!=standardResult)
            std::cout<<"Test failed"<<std::endl;
        else
            std::cout<<"TEST SUCCEEDED"<<std::endl;
        const auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < repeats; i++) {
            volatile int32_t result = getValueUnrolledMatrixMultiplication(testMatrix16bitFull,testState);
        }
        const auto stop= std::chrono::high_resolution_clock::now();
        const auto duration = stop-start;
        std::cout<<"Took on average "<<(duration_cast<std::chrono::nanoseconds>(duration)).count()/(repeats)<<" ns"<<std::endl;
    }

    //AVX2 matrix multiplication
    {
        std::cout<<"AVX matrix multiplication"<<std::endl;
        if (getValueAVXMatrixMultiplication(testMatrix16bitFull,testState)!=standardResult)
            std::cout<<"Test failed"<<std::endl;
        else
            std::cout<<"TEST SUCCEEDED"<<std::endl;

        const auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < repeats; i++) {
            volatile int32_t result = getValueAVXMatrixMultiplication(testMatrix16bitFull,testState);
        }
        const auto stop= std::chrono::high_resolution_clock::now();
        const auto duration = stop-start;
        std::cout<<"Took on average "<<(duration_cast<std::chrono::nanoseconds>(duration)).count()/(repeats)<<" ns"<<std::endl;
    }

    return 0;
}
