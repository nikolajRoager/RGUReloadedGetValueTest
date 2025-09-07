//
// Created by Nikolaj Christensen on 05/09/2025.
//

#include "getValueUnrolledMatrixMultiplication.h"

#include <iostream>

int32_t getValueUnrolledMatrixMultiplication(std::array<int16_t,33*33>& matrix, std::array<int16_t,33>& state) {

    int32_t sum=0;

if (state[0]) {
if (state[0])
    sum += matrix[0]*state[0]*state[0];
if (state[1])
    sum += matrix[33]*state[1]*state[0];
if (state[2])
    sum += matrix[66]*state[2]*state[0];
if (state[3])
    sum += matrix[99]*state[3]*state[0];
if (state[4])
    sum += matrix[132]*state[4]*state[0];
if (state[5])
    sum += matrix[165]*state[5]*state[0];
if (state[6])
    sum += matrix[198]*state[6]*state[0];
if (state[7])
    sum += matrix[231]*state[7]*state[0];
if (state[8])
    sum += matrix[264]*state[8]*state[0];
if (state[9])
    sum += matrix[297]*state[9]*state[0];
if (state[10])
    sum += matrix[330]*state[10]*state[0];
if (state[11])
    sum += matrix[363]*state[11]*state[0];
if (state[12])
    sum += matrix[396]*state[12]*state[0];
if (state[13])
    sum += matrix[429]*state[13]*state[0];
if (state[14])
    sum += matrix[462]*state[14]*state[0];
if (state[15])
    sum += matrix[495]*state[15]*state[0];
if (state[16])
    sum += matrix[528]*state[16]*state[0];
if (state[17])
    sum += matrix[561]*state[17]*state[0];
if (state[18])
    sum += matrix[594]*state[18]*state[0];
if (state[19])
    sum += matrix[627]*state[19]*state[0];
if (state[20])
    sum += matrix[660]*state[20]*state[0];
if (state[21])
    sum += matrix[693]*state[21]*state[0];
if (state[22])
    sum += matrix[726]*state[22]*state[0];
if (state[23])
    sum += matrix[759]*state[23]*state[0];
if (state[24])
    sum += matrix[792]*state[24]*state[0];
if (state[25])
    sum += matrix[825]*state[25]*state[0];
if (state[26])
    sum += matrix[858]*state[26]*state[0];
if (state[27])
    sum += matrix[891]*state[27]*state[0];
if (state[28])
    sum += matrix[924]*state[28]*state[0];
if (state[29])
    sum += matrix[957]*state[29]*state[0];
if (state[30])
    sum += matrix[990]*state[30]*state[0];
if (state[31])
    sum += matrix[1023]*state[31]*state[0];
if (state[32])
    sum += matrix[1056]*state[32]*state[0];
}
if (state[1]) {
if (state[1])
    sum += matrix[34]*state[1]*state[1];
if (state[2])
    sum += matrix[67]*state[2]*state[1];
if (state[3])
    sum += matrix[100]*state[3]*state[1];
if (state[4])
    sum += matrix[133]*state[4]*state[1];
if (state[5])
    sum += matrix[166]*state[5]*state[1];
if (state[6])
    sum += matrix[199]*state[6]*state[1];
if (state[7])
    sum += matrix[232]*state[7]*state[1];
if (state[8])
    sum += matrix[265]*state[8]*state[1];
if (state[9])
    sum += matrix[298]*state[9]*state[1];
if (state[10])
    sum += matrix[331]*state[10]*state[1];
if (state[11])
    sum += matrix[364]*state[11]*state[1];
if (state[12])
    sum += matrix[397]*state[12]*state[1];
if (state[13])
    sum += matrix[430]*state[13]*state[1];
if (state[14])
    sum += matrix[463]*state[14]*state[1];
if (state[15])
    sum += matrix[496]*state[15]*state[1];
if (state[16])
    sum += matrix[529]*state[16]*state[1];
if (state[17])
    sum += matrix[562]*state[17]*state[1];
if (state[18])
    sum += matrix[595]*state[18]*state[1];
if (state[19])
    sum += matrix[628]*state[19]*state[1];
if (state[20])
    sum += matrix[661]*state[20]*state[1];
if (state[21])
    sum += matrix[694]*state[21]*state[1];
if (state[22])
    sum += matrix[727]*state[22]*state[1];
if (state[23])
    sum += matrix[760]*state[23]*state[1];
if (state[24])
    sum += matrix[793]*state[24]*state[1];
if (state[25])
    sum += matrix[826]*state[25]*state[1];
if (state[26])
    sum += matrix[859]*state[26]*state[1];
if (state[27])
    sum += matrix[892]*state[27]*state[1];
if (state[28])
    sum += matrix[925]*state[28]*state[1];
if (state[29])
    sum += matrix[958]*state[29]*state[1];
if (state[30])
    sum += matrix[991]*state[30]*state[1];
if (state[31])
    sum += matrix[1024]*state[31]*state[1];
if (state[32])
    sum += matrix[1057]*state[32]*state[1];
}
if (state[2]) {
if (state[2])
    sum += matrix[68]*state[2]*state[2];
if (state[3])
    sum += matrix[101]*state[3]*state[2];
if (state[4])
    sum += matrix[134]*state[4]*state[2];
if (state[5])
    sum += matrix[167]*state[5]*state[2];
if (state[6])
    sum += matrix[200]*state[6]*state[2];
if (state[7])
    sum += matrix[233]*state[7]*state[2];
if (state[8])
    sum += matrix[266]*state[8]*state[2];
if (state[9])
    sum += matrix[299]*state[9]*state[2];
if (state[10])
    sum += matrix[332]*state[10]*state[2];
if (state[11])
    sum += matrix[365]*state[11]*state[2];
if (state[12])
    sum += matrix[398]*state[12]*state[2];
if (state[13])
    sum += matrix[431]*state[13]*state[2];
if (state[14])
    sum += matrix[464]*state[14]*state[2];
if (state[15])
    sum += matrix[497]*state[15]*state[2];
if (state[16])
    sum += matrix[530]*state[16]*state[2];
if (state[17])
    sum += matrix[563]*state[17]*state[2];
if (state[18])
    sum += matrix[596]*state[18]*state[2];
if (state[19])
    sum += matrix[629]*state[19]*state[2];
if (state[20])
    sum += matrix[662]*state[20]*state[2];
if (state[21])
    sum += matrix[695]*state[21]*state[2];
if (state[22])
    sum += matrix[728]*state[22]*state[2];
if (state[23])
    sum += matrix[761]*state[23]*state[2];
if (state[24])
    sum += matrix[794]*state[24]*state[2];
if (state[25])
    sum += matrix[827]*state[25]*state[2];
if (state[26])
    sum += matrix[860]*state[26]*state[2];
if (state[27])
    sum += matrix[893]*state[27]*state[2];
if (state[28])
    sum += matrix[926]*state[28]*state[2];
if (state[29])
    sum += matrix[959]*state[29]*state[2];
if (state[30])
    sum += matrix[992]*state[30]*state[2];
if (state[31])
    sum += matrix[1025]*state[31]*state[2];
if (state[32])
    sum += matrix[1058]*state[32]*state[2];
}
if (state[3]) {
if (state[3])
    sum += matrix[102]*state[3]*state[3];
if (state[4])
    sum += matrix[135]*state[4]*state[3];
if (state[5])
    sum += matrix[168]*state[5]*state[3];
if (state[6])
    sum += matrix[201]*state[6]*state[3];
if (state[7])
    sum += matrix[234]*state[7]*state[3];
if (state[8])
    sum += matrix[267]*state[8]*state[3];
if (state[9])
    sum += matrix[300]*state[9]*state[3];
if (state[10])
    sum += matrix[333]*state[10]*state[3];
if (state[11])
    sum += matrix[366]*state[11]*state[3];
if (state[12])
    sum += matrix[399]*state[12]*state[3];
if (state[13])
    sum += matrix[432]*state[13]*state[3];
if (state[14])
    sum += matrix[465]*state[14]*state[3];
if (state[15])
    sum += matrix[498]*state[15]*state[3];
if (state[16])
    sum += matrix[531]*state[16]*state[3];
if (state[17])
    sum += matrix[564]*state[17]*state[3];
if (state[18])
    sum += matrix[597]*state[18]*state[3];
if (state[19])
    sum += matrix[630]*state[19]*state[3];
if (state[20])
    sum += matrix[663]*state[20]*state[3];
if (state[21])
    sum += matrix[696]*state[21]*state[3];
if (state[22])
    sum += matrix[729]*state[22]*state[3];
if (state[23])
    sum += matrix[762]*state[23]*state[3];
if (state[24])
    sum += matrix[795]*state[24]*state[3];
if (state[25])
    sum += matrix[828]*state[25]*state[3];
if (state[26])
    sum += matrix[861]*state[26]*state[3];
if (state[27])
    sum += matrix[894]*state[27]*state[3];
if (state[28])
    sum += matrix[927]*state[28]*state[3];
if (state[29])
    sum += matrix[960]*state[29]*state[3];
if (state[30])
    sum += matrix[993]*state[30]*state[3];
if (state[31])
    sum += matrix[1026]*state[31]*state[3];
if (state[32])
    sum += matrix[1059]*state[32]*state[3];
}
if (state[4]) {
if (state[4])
    sum += matrix[136]*state[4]*state[4];
if (state[5])
    sum += matrix[169]*state[5]*state[4];
if (state[6])
    sum += matrix[202]*state[6]*state[4];
if (state[7])
    sum += matrix[235]*state[7]*state[4];
if (state[8])
    sum += matrix[268]*state[8]*state[4];
if (state[9])
    sum += matrix[301]*state[9]*state[4];
if (state[10])
    sum += matrix[334]*state[10]*state[4];
if (state[11])
    sum += matrix[367]*state[11]*state[4];
if (state[12])
    sum += matrix[400]*state[12]*state[4];
if (state[13])
    sum += matrix[433]*state[13]*state[4];
if (state[14])
    sum += matrix[466]*state[14]*state[4];
if (state[15])
    sum += matrix[499]*state[15]*state[4];
if (state[16])
    sum += matrix[532]*state[16]*state[4];
if (state[17])
    sum += matrix[565]*state[17]*state[4];
if (state[18])
    sum += matrix[598]*state[18]*state[4];
if (state[19])
    sum += matrix[631]*state[19]*state[4];
if (state[20])
    sum += matrix[664]*state[20]*state[4];
if (state[21])
    sum += matrix[697]*state[21]*state[4];
if (state[22])
    sum += matrix[730]*state[22]*state[4];
if (state[23])
    sum += matrix[763]*state[23]*state[4];
if (state[24])
    sum += matrix[796]*state[24]*state[4];
if (state[25])
    sum += matrix[829]*state[25]*state[4];
if (state[26])
    sum += matrix[862]*state[26]*state[4];
if (state[27])
    sum += matrix[895]*state[27]*state[4];
if (state[28])
    sum += matrix[928]*state[28]*state[4];
if (state[29])
    sum += matrix[961]*state[29]*state[4];
if (state[30])
    sum += matrix[994]*state[30]*state[4];
if (state[31])
    sum += matrix[1027]*state[31]*state[4];
if (state[32])
    sum += matrix[1060]*state[32]*state[4];
}
if (state[5]) {
if (state[5])
    sum += matrix[170]*state[5]*state[5];
if (state[6])
    sum += matrix[203]*state[6]*state[5];
if (state[7])
    sum += matrix[236]*state[7]*state[5];
if (state[8])
    sum += matrix[269]*state[8]*state[5];
if (state[9])
    sum += matrix[302]*state[9]*state[5];
if (state[10])
    sum += matrix[335]*state[10]*state[5];
if (state[11])
    sum += matrix[368]*state[11]*state[5];
if (state[12])
    sum += matrix[401]*state[12]*state[5];
if (state[13])
    sum += matrix[434]*state[13]*state[5];
if (state[14])
    sum += matrix[467]*state[14]*state[5];
if (state[15])
    sum += matrix[500]*state[15]*state[5];
if (state[16])
    sum += matrix[533]*state[16]*state[5];
if (state[17])
    sum += matrix[566]*state[17]*state[5];
if (state[18])
    sum += matrix[599]*state[18]*state[5];
if (state[19])
    sum += matrix[632]*state[19]*state[5];
if (state[20])
    sum += matrix[665]*state[20]*state[5];
if (state[21])
    sum += matrix[698]*state[21]*state[5];
if (state[22])
    sum += matrix[731]*state[22]*state[5];
if (state[23])
    sum += matrix[764]*state[23]*state[5];
if (state[24])
    sum += matrix[797]*state[24]*state[5];
if (state[25])
    sum += matrix[830]*state[25]*state[5];
if (state[26])
    sum += matrix[863]*state[26]*state[5];
if (state[27])
    sum += matrix[896]*state[27]*state[5];
if (state[28])
    sum += matrix[929]*state[28]*state[5];
if (state[29])
    sum += matrix[962]*state[29]*state[5];
if (state[30])
    sum += matrix[995]*state[30]*state[5];
if (state[31])
    sum += matrix[1028]*state[31]*state[5];
if (state[32])
    sum += matrix[1061]*state[32]*state[5];
}
if (state[6]) {
if (state[6])
    sum += matrix[204]*state[6]*state[6];
if (state[7])
    sum += matrix[237]*state[7]*state[6];
if (state[8])
    sum += matrix[270]*state[8]*state[6];
if (state[9])
    sum += matrix[303]*state[9]*state[6];
if (state[10])
    sum += matrix[336]*state[10]*state[6];
if (state[11])
    sum += matrix[369]*state[11]*state[6];
if (state[12])
    sum += matrix[402]*state[12]*state[6];
if (state[13])
    sum += matrix[435]*state[13]*state[6];
if (state[14])
    sum += matrix[468]*state[14]*state[6];
if (state[15])
    sum += matrix[501]*state[15]*state[6];
if (state[16])
    sum += matrix[534]*state[16]*state[6];
if (state[17])
    sum += matrix[567]*state[17]*state[6];
if (state[18])
    sum += matrix[600]*state[18]*state[6];
if (state[19])
    sum += matrix[633]*state[19]*state[6];
if (state[20])
    sum += matrix[666]*state[20]*state[6];
if (state[21])
    sum += matrix[699]*state[21]*state[6];
if (state[22])
    sum += matrix[732]*state[22]*state[6];
if (state[23])
    sum += matrix[765]*state[23]*state[6];
if (state[24])
    sum += matrix[798]*state[24]*state[6];
if (state[25])
    sum += matrix[831]*state[25]*state[6];
if (state[26])
    sum += matrix[864]*state[26]*state[6];
if (state[27])
    sum += matrix[897]*state[27]*state[6];
if (state[28])
    sum += matrix[930]*state[28]*state[6];
if (state[29])
    sum += matrix[963]*state[29]*state[6];
if (state[30])
    sum += matrix[996]*state[30]*state[6];
if (state[31])
    sum += matrix[1029]*state[31]*state[6];
if (state[32])
    sum += matrix[1062]*state[32]*state[6];
}
if (state[7]) {
if (state[7])
    sum += matrix[238]*state[7]*state[7];
if (state[8])
    sum += matrix[271]*state[8]*state[7];
if (state[9])
    sum += matrix[304]*state[9]*state[7];
if (state[10])
    sum += matrix[337]*state[10]*state[7];
if (state[11])
    sum += matrix[370]*state[11]*state[7];
if (state[12])
    sum += matrix[403]*state[12]*state[7];
if (state[13])
    sum += matrix[436]*state[13]*state[7];
if (state[14])
    sum += matrix[469]*state[14]*state[7];
if (state[15])
    sum += matrix[502]*state[15]*state[7];
if (state[16])
    sum += matrix[535]*state[16]*state[7];
if (state[17])
    sum += matrix[568]*state[17]*state[7];
if (state[18])
    sum += matrix[601]*state[18]*state[7];
if (state[19])
    sum += matrix[634]*state[19]*state[7];
if (state[20])
    sum += matrix[667]*state[20]*state[7];
if (state[21])
    sum += matrix[700]*state[21]*state[7];
if (state[22])
    sum += matrix[733]*state[22]*state[7];
if (state[23])
    sum += matrix[766]*state[23]*state[7];
if (state[24])
    sum += matrix[799]*state[24]*state[7];
if (state[25])
    sum += matrix[832]*state[25]*state[7];
if (state[26])
    sum += matrix[865]*state[26]*state[7];
if (state[27])
    sum += matrix[898]*state[27]*state[7];
if (state[28])
    sum += matrix[931]*state[28]*state[7];
if (state[29])
    sum += matrix[964]*state[29]*state[7];
if (state[30])
    sum += matrix[997]*state[30]*state[7];
if (state[31])
    sum += matrix[1030]*state[31]*state[7];
if (state[32])
    sum += matrix[1063]*state[32]*state[7];
}
if (state[8]) {
if (state[8])
    sum += matrix[272]*state[8]*state[8];
if (state[9])
    sum += matrix[305]*state[9]*state[8];
if (state[10])
    sum += matrix[338]*state[10]*state[8];
if (state[11])
    sum += matrix[371]*state[11]*state[8];
if (state[12])
    sum += matrix[404]*state[12]*state[8];
if (state[13])
    sum += matrix[437]*state[13]*state[8];
if (state[14])
    sum += matrix[470]*state[14]*state[8];
if (state[15])
    sum += matrix[503]*state[15]*state[8];
if (state[16])
    sum += matrix[536]*state[16]*state[8];
if (state[17])
    sum += matrix[569]*state[17]*state[8];
if (state[18])
    sum += matrix[602]*state[18]*state[8];
if (state[19])
    sum += matrix[635]*state[19]*state[8];
if (state[20])
    sum += matrix[668]*state[20]*state[8];
if (state[21])
    sum += matrix[701]*state[21]*state[8];
if (state[22])
    sum += matrix[734]*state[22]*state[8];
if (state[23])
    sum += matrix[767]*state[23]*state[8];
if (state[24])
    sum += matrix[800]*state[24]*state[8];
if (state[25])
    sum += matrix[833]*state[25]*state[8];
if (state[26])
    sum += matrix[866]*state[26]*state[8];
if (state[27])
    sum += matrix[899]*state[27]*state[8];
if (state[28])
    sum += matrix[932]*state[28]*state[8];
if (state[29])
    sum += matrix[965]*state[29]*state[8];
if (state[30])
    sum += matrix[998]*state[30]*state[8];
if (state[31])
    sum += matrix[1031]*state[31]*state[8];
if (state[32])
    sum += matrix[1064]*state[32]*state[8];
}
if (state[9]) {
if (state[9])
    sum += matrix[306]*state[9]*state[9];
if (state[10])
    sum += matrix[339]*state[10]*state[9];
if (state[11])
    sum += matrix[372]*state[11]*state[9];
if (state[12])
    sum += matrix[405]*state[12]*state[9];
if (state[13])
    sum += matrix[438]*state[13]*state[9];
if (state[14])
    sum += matrix[471]*state[14]*state[9];
if (state[15])
    sum += matrix[504]*state[15]*state[9];
if (state[16])
    sum += matrix[537]*state[16]*state[9];
if (state[17])
    sum += matrix[570]*state[17]*state[9];
if (state[18])
    sum += matrix[603]*state[18]*state[9];
if (state[19])
    sum += matrix[636]*state[19]*state[9];
if (state[20])
    sum += matrix[669]*state[20]*state[9];
if (state[21])
    sum += matrix[702]*state[21]*state[9];
if (state[22])
    sum += matrix[735]*state[22]*state[9];
if (state[23])
    sum += matrix[768]*state[23]*state[9];
if (state[24])
    sum += matrix[801]*state[24]*state[9];
if (state[25])
    sum += matrix[834]*state[25]*state[9];
if (state[26])
    sum += matrix[867]*state[26]*state[9];
if (state[27])
    sum += matrix[900]*state[27]*state[9];
if (state[28])
    sum += matrix[933]*state[28]*state[9];
if (state[29])
    sum += matrix[966]*state[29]*state[9];
if (state[30])
    sum += matrix[999]*state[30]*state[9];
if (state[31])
    sum += matrix[1032]*state[31]*state[9];
if (state[32])
    sum += matrix[1065]*state[32]*state[9];
}
if (state[10]) {
if (state[10])
    sum += matrix[340]*state[10]*state[10];
if (state[11])
    sum += matrix[373]*state[11]*state[10];
if (state[12])
    sum += matrix[406]*state[12]*state[10];
if (state[13])
    sum += matrix[439]*state[13]*state[10];
if (state[14])
    sum += matrix[472]*state[14]*state[10];
if (state[15])
    sum += matrix[505]*state[15]*state[10];
if (state[16])
    sum += matrix[538]*state[16]*state[10];
if (state[17])
    sum += matrix[571]*state[17]*state[10];
if (state[18])
    sum += matrix[604]*state[18]*state[10];
if (state[19])
    sum += matrix[637]*state[19]*state[10];
if (state[20])
    sum += matrix[670]*state[20]*state[10];
if (state[21])
    sum += matrix[703]*state[21]*state[10];
if (state[22])
    sum += matrix[736]*state[22]*state[10];
if (state[23])
    sum += matrix[769]*state[23]*state[10];
if (state[24])
    sum += matrix[802]*state[24]*state[10];
if (state[25])
    sum += matrix[835]*state[25]*state[10];
if (state[26])
    sum += matrix[868]*state[26]*state[10];
if (state[27])
    sum += matrix[901]*state[27]*state[10];
if (state[28])
    sum += matrix[934]*state[28]*state[10];
if (state[29])
    sum += matrix[967]*state[29]*state[10];
if (state[30])
    sum += matrix[1000]*state[30]*state[10];
if (state[31])
    sum += matrix[1033]*state[31]*state[10];
if (state[32])
    sum += matrix[1066]*state[32]*state[10];
}
if (state[11]) {
if (state[11])
    sum += matrix[374]*state[11]*state[11];
if (state[12])
    sum += matrix[407]*state[12]*state[11];
if (state[13])
    sum += matrix[440]*state[13]*state[11];
if (state[14])
    sum += matrix[473]*state[14]*state[11];
if (state[15])
    sum += matrix[506]*state[15]*state[11];
if (state[16])
    sum += matrix[539]*state[16]*state[11];
if (state[17])
    sum += matrix[572]*state[17]*state[11];
if (state[18])
    sum += matrix[605]*state[18]*state[11];
if (state[19])
    sum += matrix[638]*state[19]*state[11];
if (state[20])
    sum += matrix[671]*state[20]*state[11];
if (state[21])
    sum += matrix[704]*state[21]*state[11];
if (state[22])
    sum += matrix[737]*state[22]*state[11];
if (state[23])
    sum += matrix[770]*state[23]*state[11];
if (state[24])
    sum += matrix[803]*state[24]*state[11];
if (state[25])
    sum += matrix[836]*state[25]*state[11];
if (state[26])
    sum += matrix[869]*state[26]*state[11];
if (state[27])
    sum += matrix[902]*state[27]*state[11];
if (state[28])
    sum += matrix[935]*state[28]*state[11];
if (state[29])
    sum += matrix[968]*state[29]*state[11];
if (state[30])
    sum += matrix[1001]*state[30]*state[11];
if (state[31])
    sum += matrix[1034]*state[31]*state[11];
if (state[32])
    sum += matrix[1067]*state[32]*state[11];
}
if (state[12]) {
if (state[12])
    sum += matrix[408]*state[12]*state[12];
if (state[13])
    sum += matrix[441]*state[13]*state[12];
if (state[14])
    sum += matrix[474]*state[14]*state[12];
if (state[15])
    sum += matrix[507]*state[15]*state[12];
if (state[16])
    sum += matrix[540]*state[16]*state[12];
if (state[17])
    sum += matrix[573]*state[17]*state[12];
if (state[18])
    sum += matrix[606]*state[18]*state[12];
if (state[19])
    sum += matrix[639]*state[19]*state[12];
if (state[20])
    sum += matrix[672]*state[20]*state[12];
if (state[21])
    sum += matrix[705]*state[21]*state[12];
if (state[22])
    sum += matrix[738]*state[22]*state[12];
if (state[23])
    sum += matrix[771]*state[23]*state[12];
if (state[24])
    sum += matrix[804]*state[24]*state[12];
if (state[25])
    sum += matrix[837]*state[25]*state[12];
if (state[26])
    sum += matrix[870]*state[26]*state[12];
if (state[27])
    sum += matrix[903]*state[27]*state[12];
if (state[28])
    sum += matrix[936]*state[28]*state[12];
if (state[29])
    sum += matrix[969]*state[29]*state[12];
if (state[30])
    sum += matrix[1002]*state[30]*state[12];
if (state[31])
    sum += matrix[1035]*state[31]*state[12];
if (state[32])
    sum += matrix[1068]*state[32]*state[12];
}
if (state[13]) {
if (state[13])
    sum += matrix[442]*state[13]*state[13];
if (state[14])
    sum += matrix[475]*state[14]*state[13];
if (state[15])
    sum += matrix[508]*state[15]*state[13];
if (state[16])
    sum += matrix[541]*state[16]*state[13];
if (state[17])
    sum += matrix[574]*state[17]*state[13];
if (state[18])
    sum += matrix[607]*state[18]*state[13];
if (state[19])
    sum += matrix[640]*state[19]*state[13];
if (state[20])
    sum += matrix[673]*state[20]*state[13];
if (state[21])
    sum += matrix[706]*state[21]*state[13];
if (state[22])
    sum += matrix[739]*state[22]*state[13];
if (state[23])
    sum += matrix[772]*state[23]*state[13];
if (state[24])
    sum += matrix[805]*state[24]*state[13];
if (state[25])
    sum += matrix[838]*state[25]*state[13];
if (state[26])
    sum += matrix[871]*state[26]*state[13];
if (state[27])
    sum += matrix[904]*state[27]*state[13];
if (state[28])
    sum += matrix[937]*state[28]*state[13];
if (state[29])
    sum += matrix[970]*state[29]*state[13];
if (state[30])
    sum += matrix[1003]*state[30]*state[13];
if (state[31])
    sum += matrix[1036]*state[31]*state[13];
if (state[32])
    sum += matrix[1069]*state[32]*state[13];
}
if (state[14]) {
if (state[14])
    sum += matrix[476]*state[14]*state[14];
if (state[15])
    sum += matrix[509]*state[15]*state[14];
if (state[16])
    sum += matrix[542]*state[16]*state[14];
if (state[17])
    sum += matrix[575]*state[17]*state[14];
if (state[18])
    sum += matrix[608]*state[18]*state[14];
if (state[19])
    sum += matrix[641]*state[19]*state[14];
if (state[20])
    sum += matrix[674]*state[20]*state[14];
if (state[21])
    sum += matrix[707]*state[21]*state[14];
if (state[22])
    sum += matrix[740]*state[22]*state[14];
if (state[23])
    sum += matrix[773]*state[23]*state[14];
if (state[24])
    sum += matrix[806]*state[24]*state[14];
if (state[25])
    sum += matrix[839]*state[25]*state[14];
if (state[26])
    sum += matrix[872]*state[26]*state[14];
if (state[27])
    sum += matrix[905]*state[27]*state[14];
if (state[28])
    sum += matrix[938]*state[28]*state[14];
if (state[29])
    sum += matrix[971]*state[29]*state[14];
if (state[30])
    sum += matrix[1004]*state[30]*state[14];
if (state[31])
    sum += matrix[1037]*state[31]*state[14];
if (state[32])
    sum += matrix[1070]*state[32]*state[14];
}
if (state[15]) {
if (state[15])
    sum += matrix[510]*state[15]*state[15];
if (state[16])
    sum += matrix[543]*state[16]*state[15];
if (state[17])
    sum += matrix[576]*state[17]*state[15];
if (state[18])
    sum += matrix[609]*state[18]*state[15];
if (state[19])
    sum += matrix[642]*state[19]*state[15];
if (state[20])
    sum += matrix[675]*state[20]*state[15];
if (state[21])
    sum += matrix[708]*state[21]*state[15];
if (state[22])
    sum += matrix[741]*state[22]*state[15];
if (state[23])
    sum += matrix[774]*state[23]*state[15];
if (state[24])
    sum += matrix[807]*state[24]*state[15];
if (state[25])
    sum += matrix[840]*state[25]*state[15];
if (state[26])
    sum += matrix[873]*state[26]*state[15];
if (state[27])
    sum += matrix[906]*state[27]*state[15];
if (state[28])
    sum += matrix[939]*state[28]*state[15];
if (state[29])
    sum += matrix[972]*state[29]*state[15];
if (state[30])
    sum += matrix[1005]*state[30]*state[15];
if (state[31])
    sum += matrix[1038]*state[31]*state[15];
if (state[32])
    sum += matrix[1071]*state[32]*state[15];
}
if (state[16]) {
if (state[16])
    sum += matrix[544]*state[16]*state[16];
if (state[17])
    sum += matrix[577]*state[17]*state[16];
if (state[18])
    sum += matrix[610]*state[18]*state[16];
if (state[19])
    sum += matrix[643]*state[19]*state[16];
if (state[20])
    sum += matrix[676]*state[20]*state[16];
if (state[21])
    sum += matrix[709]*state[21]*state[16];
if (state[22])
    sum += matrix[742]*state[22]*state[16];
if (state[23])
    sum += matrix[775]*state[23]*state[16];
if (state[24])
    sum += matrix[808]*state[24]*state[16];
if (state[25])
    sum += matrix[841]*state[25]*state[16];
if (state[26])
    sum += matrix[874]*state[26]*state[16];
if (state[27])
    sum += matrix[907]*state[27]*state[16];
if (state[28])
    sum += matrix[940]*state[28]*state[16];
if (state[29])
    sum += matrix[973]*state[29]*state[16];
if (state[30])
    sum += matrix[1006]*state[30]*state[16];
if (state[31])
    sum += matrix[1039]*state[31]*state[16];
if (state[32])
    sum += matrix[1072]*state[32]*state[16];
}
if (state[17]) {
if (state[17])
    sum += matrix[578]*state[17]*state[17];
if (state[18])
    sum += matrix[611]*state[18]*state[17];
if (state[19])
    sum += matrix[644]*state[19]*state[17];
if (state[20])
    sum += matrix[677]*state[20]*state[17];
if (state[21])
    sum += matrix[710]*state[21]*state[17];
if (state[22])
    sum += matrix[743]*state[22]*state[17];
if (state[23])
    sum += matrix[776]*state[23]*state[17];
if (state[24])
    sum += matrix[809]*state[24]*state[17];
if (state[25])
    sum += matrix[842]*state[25]*state[17];
if (state[26])
    sum += matrix[875]*state[26]*state[17];
if (state[27])
    sum += matrix[908]*state[27]*state[17];
if (state[28])
    sum += matrix[941]*state[28]*state[17];
if (state[29])
    sum += matrix[974]*state[29]*state[17];
if (state[30])
    sum += matrix[1007]*state[30]*state[17];
if (state[31])
    sum += matrix[1040]*state[31]*state[17];
if (state[32])
    sum += matrix[1073]*state[32]*state[17];
}
if (state[18]) {
if (state[18])
    sum += matrix[612]*state[18]*state[18];
if (state[19])
    sum += matrix[645]*state[19]*state[18];
if (state[20])
    sum += matrix[678]*state[20]*state[18];
if (state[21])
    sum += matrix[711]*state[21]*state[18];
if (state[22])
    sum += matrix[744]*state[22]*state[18];
if (state[23])
    sum += matrix[777]*state[23]*state[18];
if (state[24])
    sum += matrix[810]*state[24]*state[18];
if (state[25])
    sum += matrix[843]*state[25]*state[18];
if (state[26])
    sum += matrix[876]*state[26]*state[18];
if (state[27])
    sum += matrix[909]*state[27]*state[18];
if (state[28])
    sum += matrix[942]*state[28]*state[18];
if (state[29])
    sum += matrix[975]*state[29]*state[18];
if (state[30])
    sum += matrix[1008]*state[30]*state[18];
if (state[31])
    sum += matrix[1041]*state[31]*state[18];
if (state[32])
    sum += matrix[1074]*state[32]*state[18];
}
if (state[19]) {
if (state[19])
    sum += matrix[646]*state[19]*state[19];
if (state[20])
    sum += matrix[679]*state[20]*state[19];
if (state[21])
    sum += matrix[712]*state[21]*state[19];
if (state[22])
    sum += matrix[745]*state[22]*state[19];
if (state[23])
    sum += matrix[778]*state[23]*state[19];
if (state[24])
    sum += matrix[811]*state[24]*state[19];
if (state[25])
    sum += matrix[844]*state[25]*state[19];
if (state[26])
    sum += matrix[877]*state[26]*state[19];
if (state[27])
    sum += matrix[910]*state[27]*state[19];
if (state[28])
    sum += matrix[943]*state[28]*state[19];
if (state[29])
    sum += matrix[976]*state[29]*state[19];
if (state[30])
    sum += matrix[1009]*state[30]*state[19];
if (state[31])
    sum += matrix[1042]*state[31]*state[19];
if (state[32])
    sum += matrix[1075]*state[32]*state[19];
}
if (state[20]) {
if (state[20])
    sum += matrix[680]*state[20]*state[20];
if (state[21])
    sum += matrix[713]*state[21]*state[20];
if (state[22])
    sum += matrix[746]*state[22]*state[20];
if (state[23])
    sum += matrix[779]*state[23]*state[20];
if (state[24])
    sum += matrix[812]*state[24]*state[20];
if (state[25])
    sum += matrix[845]*state[25]*state[20];
if (state[26])
    sum += matrix[878]*state[26]*state[20];
if (state[27])
    sum += matrix[911]*state[27]*state[20];
if (state[28])
    sum += matrix[944]*state[28]*state[20];
if (state[29])
    sum += matrix[977]*state[29]*state[20];
if (state[30])
    sum += matrix[1010]*state[30]*state[20];
if (state[31])
    sum += matrix[1043]*state[31]*state[20];
if (state[32])
    sum += matrix[1076]*state[32]*state[20];
}
if (state[21]) {
if (state[21])
    sum += matrix[714]*state[21]*state[21];
if (state[22])
    sum += matrix[747]*state[22]*state[21];
if (state[23])
    sum += matrix[780]*state[23]*state[21];
if (state[24])
    sum += matrix[813]*state[24]*state[21];
if (state[25])
    sum += matrix[846]*state[25]*state[21];
if (state[26])
    sum += matrix[879]*state[26]*state[21];
if (state[27])
    sum += matrix[912]*state[27]*state[21];
if (state[28])
    sum += matrix[945]*state[28]*state[21];
if (state[29])
    sum += matrix[978]*state[29]*state[21];
if (state[30])
    sum += matrix[1011]*state[30]*state[21];
if (state[31])
    sum += matrix[1044]*state[31]*state[21];
if (state[32])
    sum += matrix[1077]*state[32]*state[21];
}
if (state[22]) {
if (state[22])
    sum += matrix[748]*state[22]*state[22];
if (state[23])
    sum += matrix[781]*state[23]*state[22];
if (state[24])
    sum += matrix[814]*state[24]*state[22];
if (state[25])
    sum += matrix[847]*state[25]*state[22];
if (state[26])
    sum += matrix[880]*state[26]*state[22];
if (state[27])
    sum += matrix[913]*state[27]*state[22];
if (state[28])
    sum += matrix[946]*state[28]*state[22];
if (state[29])
    sum += matrix[979]*state[29]*state[22];
if (state[30])
    sum += matrix[1012]*state[30]*state[22];
if (state[31])
    sum += matrix[1045]*state[31]*state[22];
if (state[32])
    sum += matrix[1078]*state[32]*state[22];
}
if (state[23]) {
if (state[23])
    sum += matrix[782]*state[23]*state[23];
if (state[24])
    sum += matrix[815]*state[24]*state[23];
if (state[25])
    sum += matrix[848]*state[25]*state[23];
if (state[26])
    sum += matrix[881]*state[26]*state[23];
if (state[27])
    sum += matrix[914]*state[27]*state[23];
if (state[28])
    sum += matrix[947]*state[28]*state[23];
if (state[29])
    sum += matrix[980]*state[29]*state[23];
if (state[30])
    sum += matrix[1013]*state[30]*state[23];
if (state[31])
    sum += matrix[1046]*state[31]*state[23];
if (state[32])
    sum += matrix[1079]*state[32]*state[23];
}
if (state[24]) {
if (state[24])
    sum += matrix[816]*state[24]*state[24];
if (state[25])
    sum += matrix[849]*state[25]*state[24];
if (state[26])
    sum += matrix[882]*state[26]*state[24];
if (state[27])
    sum += matrix[915]*state[27]*state[24];
if (state[28])
    sum += matrix[948]*state[28]*state[24];
if (state[29])
    sum += matrix[981]*state[29]*state[24];
if (state[30])
    sum += matrix[1014]*state[30]*state[24];
if (state[31])
    sum += matrix[1047]*state[31]*state[24];
if (state[32])
    sum += matrix[1080]*state[32]*state[24];
}
if (state[25]) {
if (state[25])
    sum += matrix[850]*state[25]*state[25];
if (state[26])
    sum += matrix[883]*state[26]*state[25];
if (state[27])
    sum += matrix[916]*state[27]*state[25];
if (state[28])
    sum += matrix[949]*state[28]*state[25];
if (state[29])
    sum += matrix[982]*state[29]*state[25];
if (state[30])
    sum += matrix[1015]*state[30]*state[25];
if (state[31])
    sum += matrix[1048]*state[31]*state[25];
if (state[32])
    sum += matrix[1081]*state[32]*state[25];
}
if (state[26]) {
if (state[26])
    sum += matrix[884]*state[26]*state[26];
if (state[27])
    sum += matrix[917]*state[27]*state[26];
if (state[28])
    sum += matrix[950]*state[28]*state[26];
if (state[29])
    sum += matrix[983]*state[29]*state[26];
if (state[30])
    sum += matrix[1016]*state[30]*state[26];
if (state[31])
    sum += matrix[1049]*state[31]*state[26];
if (state[32])
    sum += matrix[1082]*state[32]*state[26];
}
if (state[27]) {
if (state[27])
    sum += matrix[918]*state[27]*state[27];
if (state[28])
    sum += matrix[951]*state[28]*state[27];
if (state[29])
    sum += matrix[984]*state[29]*state[27];
if (state[30])
    sum += matrix[1017]*state[30]*state[27];
if (state[31])
    sum += matrix[1050]*state[31]*state[27];
if (state[32])
    sum += matrix[1083]*state[32]*state[27];
}
if (state[28]) {
if (state[28])
    sum += matrix[952]*state[28]*state[28];
if (state[29])
    sum += matrix[985]*state[29]*state[28];
if (state[30])
    sum += matrix[1018]*state[30]*state[28];
if (state[31])
    sum += matrix[1051]*state[31]*state[28];
if (state[32])
    sum += matrix[1084]*state[32]*state[28];
}
if (state[29]) {
if (state[29])
    sum += matrix[986]*state[29]*state[29];
if (state[30])
    sum += matrix[1019]*state[30]*state[29];
if (state[31])
    sum += matrix[1052]*state[31]*state[29];
if (state[32])
    sum += matrix[1085]*state[32]*state[29];
}
if (state[30]) {
if (state[30])
    sum += matrix[1020]*state[30]*state[30];
if (state[31])
    sum += matrix[1053]*state[31]*state[30];
if (state[32])
    sum += matrix[1086]*state[32]*state[30];
}
if (state[31]) {
if (state[31])
    sum += matrix[1054]*state[31]*state[31];
if (state[32])
    sum += matrix[1087]*state[32]*state[31];
}
if (state[32]) {
if (state[32])
    sum += matrix[1088]*state[32]*state[32];
}

    return sum;
}