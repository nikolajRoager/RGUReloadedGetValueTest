//
// Created by Nikolaj Christensen on 05/09/2025.
//
#include "getValueBooleanMatrixMultiplication.h"

int32_t getValueBooleanMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state) {
    int32_t sum=0;

    for (int i = 0; i < 33; ++i)
        if (state[i])
            for (int j = i; j < 33; ++j) {
                if (state[j]) {
                    if (j==0 || j ==15 || j==16 || j==31) {
                        if (i==0 || i ==15 || i==16 || i==31){
                            //Both state[i] and state[j] may be more than 1
                            sum += matrix[i+j*33]*state[j]*state[i];
                        }
                        else//Only state[j] may be more than 1
                            sum += matrix[i+j*33]*state[j];
                    }
                    else if (i==0 || i ==15 || i==16 || i==31){//Only state[i] may be more than 1
                        sum += matrix[i+j*33]*state[i];
                    }
                    else//Both are only 1 or 0
                        sum += matrix[i+j*33];
                }
            }
    return sum;
}
