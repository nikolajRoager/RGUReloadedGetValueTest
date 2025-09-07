//
// Created by Nikolaj Christensen on 05/09/2025.
//
#include "getValueStandardMatrixMultiplication.h"

///Matrix multiplication using for-loops, a horrendously inefficient method will be used as baseline
int32_t getValueStandardMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state) {
    int32_t sum=0;

    for (int i = 0; i < 33; ++i)
        for (int j = i; j < 33; ++j) {
            sum += matrix[i+j*33]*state[j]*state[i];
        }
    return sum;
}
