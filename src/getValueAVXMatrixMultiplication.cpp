//
// Created by Nikolaj Christensen on 07/09/2025.
//

#include "getValueAVXMatrixMultiplication.h"
#include <immintrin.h>
#include <iostream>

int32_t getValueAVXMatrixMultiplication(std::array<int16_t, 33 * 33> &matrix, std::array<int16_t, 33> &state) {
    //First, load the state into two YMM registers

    __m256i state0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(&state[0]));
    __m256i state1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(&state[16]));

    //The first quarter matrix
    __m256i sum = _mm256_set1_epi16(0);
    for (int i = 0; i < 16; ++i) {
        __m256i row = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(&matrix[i*33]));

        //This both multiplies, converts to 32 bit, and adds adjacent element
        __m256i workspace= _mm256_madd_epi16(row,state0);
        //essentially we go from
        //[mi0, mi1, mi2, mi3, mi4, mi5, mi6, mi7, mi8, mi9, mi10, mi11, mi12, mi13, mi14, mi15] * [v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15]
        //To
        //[mi0*v0+mi1*v1, mi2*v2+mi3*v3, mi4*v4+mi5*v5, mi6*v6+mi7*v7, mi8*v8+mi9*v9, mi10*v10+mi11*v11, mi12*v12+mi13*v13, mi14*v14+mi15*v15]

        __m256i zero = _mm256_setzero_si256();



        std::array<int16_t, 32> out{};
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(&out[0]), workspace);

        std::cout<<"\nstate :"<<state[0]<<" "<<state[1]<<" "<<state[2]<<" "<<state[3]<<" "<<state[4]<<" "<<state[5]<<" "<<state[6]<<" "<<state[7]<<" "<<state[8]<<" "<<state[9]<<" "<<state[10]<<" "<<state[11]<<" "<<state[12]<<" "<<state[13]<<" "<<state[14]<<" "<<state[15]<<"|"<<state[16]<<" "<<state[17]<<" "<<state[18]<<" "<<state[19]<<" "<<state[20]<<" "<<state[21]<<" "<<state[22]<<" "<<state[23]<<" "<<state[24]<<" "<<state[25]<<" "<<state[26]<<" "<<state[27]<<" "<<state[28]<<" "<<state[29]<<" "<<state[30]<<" "<<state[31]<<std::endl;
        std::cout<<"matrix:"<<matrix[0+i*33]<<" "<<matrix[1+i*33]<<" "<<matrix[2+i*33]<<" "<<matrix[3+i*33]<<" "<<matrix[4+i*33]<<" "<<matrix[5+i*33]<<" "<<matrix[6+i*33]<<" "<<matrix[7+i*33]<<" "<<matrix[8+i*33]<<" "<<matrix[9+i*33]<<" "<<matrix[10+i*33]<<" "<<matrix[11+i*33]<<" "<<matrix[12+i*33]<<" "<<matrix[13+i*33]<<" "<<matrix[14+i*33]<<" "<<matrix[15+i*33]<<"|"<<matrix[16+i*33]<<" "<<matrix[17+i*33]<<" "<<matrix[18+i*33]<<" "<<matrix[19+i*33]<<" "<<matrix[20+i*33]<<" "<<matrix[21+i*33]<<" "<<matrix[22+i*33]<<" "<<matrix[23+i*33]<<" "<<matrix[24+i*33]<<" "<<matrix[25+i*33]<<" "<<matrix[26+i*33]<<" "<<matrix[27+i*33]<<" "<<matrix[28+i*33]<<" "<<matrix[29+i*33]<<" "<<matrix[30+i*33]<<" "<<matrix[31+i*33]<<std::endl;
        std::cout<<"result:"<<out[0]<<" "<<out[1]<<" "<<out[2]<<" "<<out[3]<<" "<<out[4]<<" "<<out[5]<<" "<<out[6]<<" "<<out[7]<<" "<<out[8]<<" "<<out[9]<<" "<<out[10]<<" "<<out[11]<<" "<<out[12]<<" "<<out[13]<<" "<<out[14]<<" "<<out[15]<<"|"<<out[16]<<" "<<out[17]<<" "<<out[18]<<" "<<out[19]<<" "<<out[20]<<" "<<out[21]<<" "<<out[22]<<" "<<out[23]<<" "<<out[24]<<" "<<out[25]<<" "<<out[26]<<" "<<out[27]<<" "<<out[28]<<" "<<out[29]<<" "<<out[30]<<" "<<out[31]<<std::endl;


        //Use a couple horizontal adds to add the 8 numbers together
        workspace= _mm256_hadd_epi32(workspace,zero);
        workspace= _mm256_hadd_epi32(workspace,zero);
        workspace= _mm256_hadd_epi32(workspace,zero);

        _mm256_storeu_si256(reinterpret_cast<__m256i*>(&out[0]), workspace);
    }



    //We only have 16 registers, that is not even remotely enough to fit the entire matrix

    return 0;
}
