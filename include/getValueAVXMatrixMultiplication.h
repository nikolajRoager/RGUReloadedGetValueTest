//
// Created by Nikolaj Christensen on 07/09/2025.
//

#ifndef RGURELOADEDGETVALUE_GETVALUEAVXMATRIXMULTIPLICATION_H
#define RGURELOADEDGETVALUE_GETVALUEAVXMATRIXMULTIPLICATION_H

#include <cstdint>
#include <array>

///Matrix multiplication using AVX
int32_t getValueAVXMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state);

#endif //RGURELOADEDGETVALUE_GETVALUEAVXMATRIXMULTIPLICATION_H