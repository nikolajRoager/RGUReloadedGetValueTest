//
// Created by Nikolaj Christensen on 05/09/2025.
//

#ifndef RGURELOADEDGETVALUE_GETVALUESTANDARD_H
#define RGURELOADEDGETVALUE_GETVALUESTANDARD_H

#include <cstdint>
#include <array>

///Matrix multiplication using for-loops, a horrendously inefficient method will be used as baseline
int32_t getValueStandardMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state);

#endif //RGURELOADEDGETVALUE_GETVALUESTANDARD_H