//
// Created by Nikolaj Christensen on 05/09/2025.
//

#ifndef RGURELOADEDGETVALUE_GETVALUEUNROLLEDMATRIXMULTIPLICATION_H
#define RGURELOADEDGETVALUE_GETVALUEUNROLLEDMATRIXMULTIPLICATION_H

#include <cstdint>
#include <array>

int32_t getValueUnrolledMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state);

#endif //RGURELOADEDGETVALUE_GETVALUEUNROLLEDMATRIXMULTIPLICATION_H