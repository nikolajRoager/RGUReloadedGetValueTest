//
// Created by Nikolaj Christensen on 07/09/2025.
//

#include "getValueAVXMatrixMultiplication.h"
#include <immintrin.h>
#include <iostream>

int32_t getValueAVXMatrixMultiplication(std::array<int16_t, 33 * 33> &matrix, std::array<int16_t, 33> &state) {

    //We will add parts of the sum as 32 bit snippets to this register, then sum it up when they are all there
    __m256i sum = _mm256_setzero_si256();//Start empty


    //For the first 16 rows, we only look at the first 16 columns
    for (int i = 0; i < 16; ++i) {
        if (!state[i])
            continue;
        __m256i vec = _mm256_setzero_si256();

        //Compute the dot-product in steps of 16 indices, as that is all we can fit in 256 bytes
        {
            //Pick out a section of the vector and this row
            __m256i v_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&state[0]));
            __m256i m_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&matrix[i * 33]));

            //Multiply them together
            __m256i prod = _mm256_madd_epi16(v_vec, m_vec);

            //Add it together,
            vec = _mm256_add_epi32(vec, prod);
        }

        //Multiply with the corresponding element in V (from the row-vector on the left)
        __m256i v_elem = _mm256_set1_epi32(state[i]);
        //The numbers are small enough that only the low bits are needed
        vec = _mm256_mullo_epi32(vec, v_elem);

        //Add to the sum
        sum = _mm256_add_epi32(sum, vec);
    }

    //For the final 17 rows, we look at 32 columns in batches of 16
    for (int i = 16; i < 33; ++i) {
        if (!state[i])
            continue;
        __m256i vec = _mm256_setzero_si256();

        //Compute the dot-product in steps of 16 indices, as that is all we can fit in 256 bytes
        {
            //Pick out a section of the vector and this row
            __m256i v_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&state[0]));
            __m256i m_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&matrix[i * 33 + 0]));

            //Multiply them together
            __m256i prod = _mm256_madd_epi16(v_vec, m_vec);

            //Add it together,
            vec = _mm256_add_epi32(vec, prod);
        }
        {
            //Pick out a section of the vector and this row
            __m256i v_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&state[16]));
            __m256i m_vec = _mm256_loadu_si256(reinterpret_cast<__m256i *>(&matrix[i * 33 + 16]));

            //Multiply them together
            __m256i prod = _mm256_madd_epi16(v_vec, m_vec);

            //Add it together,
            vec = _mm256_add_epi32(vec, prod);
        }

        //Multiply with the corresponding element in V (from the row-vector on the left)
        __m256i v_elem = _mm256_set1_epi32(state[i]);
        //The numbers are small enough that only the low bits are needed
        vec = _mm256_mullo_epi32(vec, v_elem);

        //Add to the sum
        sum = _mm256_add_epi32(sum, vec);
    }





    //Extract and sum up the result, I tried using a few hadds, but it proved slower
    int32_t res[8];
    _mm256_storeu_si256((__m256i*)res, sum);
    return res[0] + res[1] + res[2] + res[3] + res[4] + res[5] + res[6] + res[7] + (state[32]?matrix[33*33-1]:0)/*Handle the final element as its own thing, it didn't fit in the registers*/;

    return 0;
}
