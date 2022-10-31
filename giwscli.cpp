/*Version 3.2*/

#include "giwscli.h"

std::random_device giwscli::seed_gen;
unsigned int giwscli::seed_r = giwscli::seed_gen() % 10000000;
unsigned long long int giwscli::seed_t =
    static_cast<unsigned long long int>(
        std::chrono::high_resolution_clock::now().time_since_epoch().count()) *
    static_cast<unsigned long long int>(100000);
size_t giwscli::seed =
    static_cast<size_t>(giwscli::seed_t) + static_cast<size_t>(giwscli::seed_r);
std::mt19937_64 giwscli::generatorz(giwscli::seed);
// random engine

bool giwscli::quit = true;
bool giwscli::is_noelle = true;
bool giwscli::five_star_guarantee_number = false;
bool giwscli::four_star_guarantee_number = false;
size_t giwscli::kind = 0;
size_t giwscli::temp1 = 0;
size_t giwscli::fate_points = 0;
size_t giwscli::up_five = 0;
size_t giwscli::size_nup_five_c = 1;
size_t giwscli::size_nup_four_c = 1;
size_t giwscli::countx = 0;
size_t giwscli::five_count = 0;
size_t giwscli::five_count_c = 0;
size_t giwscli::five_count_w = 0;
size_t giwscli::four_count = 0;
size_t giwscli::four_count_c = 0;
size_t giwscli::four_count_w = 0;
size_t giwscli::size_nup_four_w = 18;
size_t giwscli::up_five_g[2] = {0};
size_t giwscli::up_four_g[5] = {0};
size_t giwscli::nup_five_c[8] = {0};
size_t giwscli::nup_four_c[32] = {0};
size_t giwscli::five_check[2] = {MAX_ITEMS, MAX_ITEMS};
size_t giwscli::four_check[5] = {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS,
                                 MAX_ITEMS};
size_t giwscli::pcount[256] = {0};
size_t giwscli::four_pity[11] = {0};
size_t giwscli::five_pity[90] = {0};
size_t giwscli::five_pity_w[80] = {0};
const size_t giwscli::nup_five_c1[5] = {0, 1, 2, 3, 4};
const size_t giwscli::nup_five_c2[6] = {0, 1, 2, 3, 4, 119};
const size_t giwscli::nup_five_w[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
const size_t giwscli::nup_four_w[32] = {32, 33, 34, 35, 36, 37, 38, 39, 40,
                                        41, 42, 43, 44, 45, 46, 47, 48, 49};
const size_t giwscli::three_g[13] = {50, 51, 52, 53, 54, 55, 56,
                                     57, 58, 59, 60, 61, 62};
const size_t giwscli::nup_four_cg1[11] = {17, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg2[13] = {16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg3[14] = {15, 16, 17, 18, 19, 20, 21,
                                          22, 23, 24, 25, 26, 28, 30};
const size_t giwscli::nup_four_cg4[15] = {15, 16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30, 71};
const size_t giwscli::nup_four_cg5[16] = {15, 16, 17, 18, 19, 20, 21, 22,
                                          23, 24, 25, 26, 28, 30, 71, 91};
const size_t giwscli::nup_four_cg6[17] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30, 71, 91, 95};
const size_t giwscli::nup_four_cg7[18] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                          24, 25, 26, 28, 30, 71, 91, 95, 100};
const size_t giwscli::nup_four_cg8[19] = {15, 16, 17, 18,  19, 20, 21,
                                          22, 23, 24, 25,  26, 28, 30,
                                          71, 91, 95, 100, 106};
const size_t giwscli::nup_four_cg9[20] = {15, 16, 17, 18,  19,  20, 21,
                                          22, 23, 24, 25,  26,  28, 30,
                                          71, 91, 95, 100, 106, 108};
const size_t giwscli::nup_four_cg10[21] = {15, 16, 17, 18,  19,  20,  21,
                                           22, 23, 24, 25,  26,  28,  30,
                                           71, 91, 95, 100, 106, 108, 115};
const size_t giwscli::nup_four_cg11[22] = {15, 16,  17,  18,  19,  20, 21, 22,
                                           23, 24,  25,  26,  28,  30, 71, 91,
                                           95, 100, 106, 108, 115, 116};
const size_t giwscli::nup_four_cg12[24] = {
    15, 16, 17, 18, 19, 20,  21,  22,  23,  24,  25,  26,
    28, 30, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120};
const size_t giwscli::nup_four_cg13[25] = {
    15, 16, 17, 18, 19,  20,  21,  22,  23,  24,  25,  26, 28,
    30, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120, 126};
const size_t giwscli::nup_four_cg14[26] = {
    15, 16, 17, 18, 19,  20,  21,  22,  23,  24,  25,  26,  28,
    30, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120, 126, 128};
const size_t giwscli::four_stars_c[31] = {15,  16,  17,  18,  19,  20,  21,
                                          22,  23,  24,  25,  26,  27,  28,
                                          29,  30,  31,  71,  91,  95,  100,
                                          106, 108, 115, 116, 118, 120, 126,
                                          128, 129, 130},
             giwscli::four_stars_w[30] = {32,  33,  34,  35,  36,  37, 38, 39,
                                          40,  41,  42,  43,  44,  45, 46, 47,
                                          48,  49,  79,  80,  82,  83, 84, 88,
                                          102, 103, 104, 133, 134, 135},
             giwscli::five_stars_c[31] = {0,   1,   2,   3,   4,   63,  64,
                                          65,  66,  67,  68,  69,  70,  72,
                                          86,  89,  90,  94,  96,  99,  105,
                                          109, 111, 114, 119, 121, 122, 123,
                                          124, 125, 137},
             giwscli::five_stars_w[33] = {
                 5,  6,   7,   8,   9,   10,  11,  12,  13,  14,  73,
                 74, 75,  76,  77,  78,  81,  85,  87,  92,  93,  97,
                 98, 101, 107, 110, 112, 113, 117, 127, 131, 132, 136};
const size_t giwscli::tempga1[39][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {22, 26, 30},                       // 1
    {17, 20, 24},                       // 2
    {18, 23, 25},                       // 3
    {16, 19, 28},                       // 4
    {17, 21, 22},                       // 5
    {22, 24, 26},                       // 6
    {16, 18, 25},                       // 7
    {21, 23, 30},                       // 8
    {19, 24, 26},                       // 9
    {17, 20, 28},                       // 10
    {15, 22, 30},                       // 11
    {71, 20, 18},                       // 12
    {16, 24, 25},                       // 13
    {17, 22, 30},                       // 14
    {15, 21, 28},                       // 15
    {71, 23, 19},                       // 16
    {91, 16, 18},                       // 17
    {95, 17, 26},                       // 18
    {15, 24, 25},                       // 19
    {23, 19, 71},                       // 20
    {100, 18, 91},                      // 21
    {15, 20, 21},                       // 22
    {26, 30, 106},                      // 23
    {19, 23, 108},                      // 24
    {24, 25, 71},                       // 25
    {18, 22, 100},                      // 26
    {16, 21, 95},                       // 27
    {17, 26, 108},                      // 28
    {15, 28, 91},                       // 29
    {20, 30, 71},                       // 30
    {19, 106, 115},                     // 31
    {23, 100, 116},                     // 32
    {16, 21, 108},                      // 33
    {18, 22, 118},                      // 34
    {17, 24, 120},                      // 35
    {91, 115, 126},                     // 36
    {25, 26, 30},                       // 37
    {20, 21, 28}                        // 38
};                                      // MID_MOD

const size_t giwscli::tempga2[39][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {22, 26, 30},                       // 1
    {17, 20, 24},                       // 2
    {MAX_ITEMS, 23, 25},                // 3
    {MAX_ITEMS, 19, 28},                // 4
    {17, 21, 22},                       // 5
    {22, 24, 26},                       // 6
    {16, 18, 25},                       // 7
    {21, 23, 30},                       // 8
    {19, 24, 26},                       // 9
    {17, 20, 28},                       // 10
    {MAX_ITEMS, 22, 30},                // 11
    {71, 20, 18},                       // 12
    {16, 24, 25},                       // 13
    {17, 22, 30},                       // 14
    {15, 21, 28},                       // 15
    {71, 23, 19},                       // 16
    {MAX_ITEMS, 16, 18},                // 17
    {MAX_ITEMS, 17, 26},                // 18
    {15, 24, 25},                       // 19
    {23, 19, 71},                       // 20
    {MAX_ITEMS, 18, 91},                // 21
    {15, 20, 21},                       // 22
    {26, 30, MAX_ITEMS},                // 23
    {19, 23, MAX_ITEMS},                // 24
    {24, 25, 71},                       // 25
    {18, 22, 100},                      // 26
    {16, 21, 95},                       // 27
    {17, 26, 108},                      // 28
    {15, 28, 91},                       // 29
    {20, 30, 71},                       // 30
    {19, 106, MAX_ITEMS},               // 31
    {23, 100, MAX_ITEMS},               // 32
    {16, 21, 108},                      // 33
    {18, 22, MAX_ITEMS},                // 34
    {17, 24, MAX_ITEMS},                // 35
    {91, 115, MAX_ITEMS},               // 36
    {25, 26, 30},                       // 37
    {20, 21, 28}                        // 38
};

const size_t giwscli::tempga3[39] = {
    MAX_ITEMS, 63, 64,  65, 66,  67,  68, 69, 0,   70, 63,  65,  66,
    72,        64, 86,  89, 90,  96,  94, 65, 70,  67, 105, 109, 66,
    99,        96, 111, 89, 114, 105, 86, 90, 119, 68, 125, 123, 124};

const size_t giwscli::tempgb1[13][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {15, 20, 21},                       // 1
    {19, 23, 108},                      // 2
    {24, 25, 71},                       // 3
    {16, 21, 95},                       // 4
    {17, 26, 108},                      // 5
    {20, 30, 71},                       // 6
    {23, 100, 116},                     // 7
    {18, 22, 118},                      // 8
    {17, 24, 120},                      // 9
    {91, 115, 126},                     // 10
    {25, 26, 30},                       // 11
    {20, 21, 28}                        // 12
};

const size_t giwscli::tempgb2[13][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {15, 20, 21},                       // 1
    {19, 23, MAX_ITEMS},                // 2
    {24, 25, 71},                       // 3
    {16, 21, 95},                       // 4
    {17, 26, 108},                      // 5
    {20, 30, 71},                       // 6
    {23, 100, MAX_ITEMS},               // 7
    {18, 22, MAX_ITEMS},                // 8
    {17, 24, MAX_ITEMS},                // 9
    {91, 115, MAX_ITEMS},               // 10
    {25, 26, 30},                       // 11
    {20, 21, 28}                        // 12
};

const size_t giwscli::tempgb3[13] = {MAX_ITEMS, 72, 69, 68, 94, 63, 69,
                                     64,        66, 94, 63, 67, 90};

const size_t giwscli::tempgc1[38][2] = {
    {MAX_ITEMS, MAX_ITEMS},  // 0
    {5, 14},                 // 1
    {7, 11},                 // 2
    {6, 73},                 // 3
    {74, 75},                // 4
    {8, 76},                 // 5
    {5, 12},                 // 6
    {9, 77},                 // 7
    {11, 78},                // 8
    {13, 81},                // 9
    {6, 7},                  // 10
    {73, 76},                // 11
    {14, 85},                // 12
    {7, 12},                 // 13
    {87, 8},                 // 14
    {92, 10},                // 15
    {93, 13},                // 16
    {97, 75},                // 17
    {98, 77},                // 18
    {101, 73},               // 19
    {78, 81},                // 20
    {85, 87},                // 21
    {107, 6},                // 22
    {110, 9},                // 23
    {74, 5},                 // 24
    {112, 77},               // 25
    {97, 98},                // 26
    {113, 81},               // 27
    {92, 75},                // 28
    {117, 9},                // 29
    {107, 73},               // 30
    {87, 7},                 // 31
    {76, 93},                // 32
    {74, 127},               // 33
    {98, 5},                 // 34
    {132, 81},               // 35
    {131, 77},               // 36
    {136, 93}                // 37
};

const size_t giwscli::tempgc2[38][5] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {34, 38, 40, 44, 48},                                     // 1
    {33, 37, 41, 43, 49},                                     // 2
    {32, 36, 40, 42, 48},                                     // 3
    {35, 39, 41, 44, 46},                                     // 4
    {34, 37, 40, 45, 49},                                     // 5
    {35, 36, 41, 44, 47},                                     // 6
    {32, 36, 40, 43, 48},                                     // 7
    {33, 38, 46, 79, 80},                                     // 8
    {35, 41, 45, 82, 83},                                     // 9
    {39, 40, 43, 49, 84},                                     // 10
    {33, 36, 48, 79, 80},                                     // 11
    {32, 37, 41, 42, 47},                                     // 12
    {88, 46, 44, 40, 38},                                     // 13
    {82, 83, 84, 45, 41},                                     // 14
    {34, 39, 40, 43, 49},                                     // 15
    {35, 37, 41, 42, 47},                                     // 16
    {33, 38, 40, 44, 46},                                     // 17
    {34, 39, 41, 45, 48},                                     // 18
    {32, 36, 40, 49, 104},                                    // 19
    {38, 42, 47, 102, 103},                                   // 20
    {41, 43, 46, 83, 84},                                     // 21
    {37, 40, 44, 82, 88},                                     // 22
    {35, 38, 45, 48, 80},                                     // 23
    {33, 39, 41, 49, 79},                                     // 24
    {34, 36, 42, 47, 103},                                    // 25
    {37, 40, 46, 102, 104},                                   // 26
    {32, 38, 41, 43, 48},                                     // 27
    {35, 39, 40, 44, 49},                                     // 28
    {33, 36, 45, 47, 80},                                     // 29
    {34, 37, 41, 46, 79},                                     // 30
    {38, 40, 42, 82, 88},                                     // 31
    {41, 43, 48, 83, 84},                                     // 32
    {34, 39, 40, 44, 49},                                     // 33
    {32, 36, 41, 45, 47},                                     // 34
    {134, 35, 37, 40, 46},                                    // 35
    {133, 135, 33, 41, 42},                                   // 36
    {32, 38, 40, 43, 48}                                      // 37
};

const size_t giwscli::tempgc3[38][5] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {34, 38, 40, 44, 48},                                     // 1
    {33, 37, 41, 43, 49},                                     // 2
    {32, 36, 40, 42, 48},                                     // 3
    {35, 39, 41, 44, 46},                                     // 4
    {34, 37, 40, 45, 49},                                     // 5
    {35, 36, 41, 44, 47},                                     // 6
    {32, 36, 40, 43, 48},                                     // 7
    {33, 38, 46, MAX_ITEMS, MAX_ITEMS},                       // 8
    {35, 41, 45, MAX_ITEMS, MAX_ITEMS},                       // 9
    {39, 40, 43, 49, MAX_ITEMS},                              // 10
    {33, 36, 48, MAX_ITEMS, MAX_ITEMS},                       // 11
    {32, 37, 41, 42, 47},                                     // 12
    {MAX_ITEMS, 46, 44, 40, 38},                              // 13
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, 45, 41},                // 14
    {34, 39, 40, 43, 49},                                     // 15
    {35, 37, 41, 42, 47},                                     // 16
    {33, 38, 40, 44, 46},                                     // 17
    {34, 39, 41, 45, 48},                                     // 18
    {32, 36, 40, 49, 0},                                      // 19
    {38, 42, 47, MAX_ITEMS, MAX_ITEMS},                       // 20
    {41, 43, 46, MAX_ITEMS, MAX_ITEMS},                       // 21
    {37, 40, 44, MAX_ITEMS, MAX_ITEMS},                       // 22
    {35, 38, 45, 48, MAX_ITEMS},                              // 23
    {33, 39, 41, 49, MAX_ITEMS},                              // 24
    {34, 36, 42, 47, MAX_ITEMS},                              // 25
    {37, 40, 46, MAX_ITEMS, MAX_ITEMS},                       // 26
    {32, 38, 41, 43, 48},                                     // 27
    {35, 39, 40, 44, 49},                                     // 28
    {33, 36, 45, 47, MAX_ITEMS},                              // 29
    {34, 37, 41, 46, MAX_ITEMS},                              // 30
    {38, 40, 42, MAX_ITEMS, MAX_ITEMS},                       // 31
    {41, 43, 48, MAX_ITEMS, MAX_ITEMS},                       // 32
    {34, 39, 40, 44, 49},                                     // 33
    {32, 36, 41, 45, 47},                                     // 34
    {MAX_ITEMS, 35, 37, 40, 46},                              // 35
    {MAX_ITEMS, MAX_ITEMS, 33, 41, 42},                       // 36
    {32, 38, 40, 43, 48}                                      // 37
};

const size_t giwscli::tempgc4[38][2] = {
    {MAX_ITEMS, MAX_ITEMS},  // 0
    {5, 14},                 // 1
    {7, 11},                 // 2
    {6, MAX_ITEMS},          // 3
    {MAX_ITEMS, MAX_ITEMS},  // 4
    {8, MAX_ITEMS},          // 5
    {5, 12},                 // 6
    {9, MAX_ITEMS},          // 7
    {11, MAX_ITEMS},         // 8
    {13, MAX_ITEMS},         // 9
    {6, 7},                  // 10
    {MAX_ITEMS, MAX_ITEMS},  // 11
    {14, MAX_ITEMS},         // 12
    {7, 12},                 // 13
    {MAX_ITEMS, 8},          // 14
    {MAX_ITEMS, 10},         // 15
    {MAX_ITEMS, 13},         // 16
    {MAX_ITEMS, MAX_ITEMS},  // 17
    {MAX_ITEMS, MAX_ITEMS},  // 18
    {MAX_ITEMS, MAX_ITEMS},  // 19
    {MAX_ITEMS, MAX_ITEMS},  // 20
    {MAX_ITEMS, MAX_ITEMS},  // 21
    {MAX_ITEMS, 6},          // 22
    {MAX_ITEMS, 9},          // 23
    {MAX_ITEMS, 5},          // 24
    {MAX_ITEMS, MAX_ITEMS},  // 25
    {MAX_ITEMS, MAX_ITEMS},  // 26
    {MAX_ITEMS, MAX_ITEMS},  // 27
    {MAX_ITEMS, MAX_ITEMS},  // 28
    {MAX_ITEMS, 9},          // 29
    {MAX_ITEMS, MAX_ITEMS},  // 30
    {MAX_ITEMS, 7},          // 31
    {MAX_ITEMS, MAX_ITEMS},  // 32
    {MAX_ITEMS, MAX_ITEMS},  // 33
    {MAX_ITEMS, 5},          // 34
    {MAX_ITEMS, MAX_ITEMS},  // 35
    {MAX_ITEMS, MAX_ITEMS},  // 36
    {MAX_ITEMS, MAX_ITEMS}   // 37
};

const size_t giwscli::nup_four_cg31[14] = {17, 19, 20, 21, 22, 23, 24,
                                           25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg32[16] = {16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg33[17] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31};
const size_t giwscli::nup_four_cg34[18] = {15, 16, 17, 18, 19, 20, 21, 22, 23,
                                           24, 25, 26, 27, 28, 29, 30, 31, 71};
const size_t giwscli::nup_four_cg35[19] = {
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91};
const size_t giwscli::nup_four_cg36[20] = {15, 16, 17, 18, 19, 20, 21,
                                           22, 23, 24, 25, 26, 27, 28,
                                           29, 30, 31, 71, 91, 95};
const size_t giwscli::nup_four_cg37[21] = {15, 16, 17, 18, 19, 20, 21,
                                           22, 23, 24, 25, 26, 27, 28,
                                           29, 30, 31, 71, 91, 95, 100};
const size_t giwscli::nup_four_cg38[22] = {15, 16, 17, 18, 19,  20, 21, 22,
                                           23, 24, 25, 26, 27,  28, 29, 30,
                                           31, 71, 91, 95, 100, 106};
const size_t giwscli::nup_four_cg39[23] = {15, 16, 17, 18, 19,  20,  21, 22,
                                           23, 24, 25, 26, 27,  28,  29, 30,
                                           31, 71, 91, 95, 100, 106, 108};
const size_t giwscli::nup_four_cg310[24] = {15, 16, 17, 18, 19,  20,  21,  22,
                                            23, 24, 25, 26, 27,  28,  29,  30,
                                            31, 71, 91, 95, 100, 106, 108, 115};
const size_t giwscli::nup_four_cg311[25] = {
    15, 16, 17, 18, 19, 20, 21, 22,  23,  24,  25,  26, 27,
    28, 29, 30, 31, 71, 91, 95, 100, 106, 108, 115, 116};
const size_t giwscli::nup_four_cg312[27] = {
    15, 16, 17, 18, 19, 20, 21,  22,  23,  24,  25,  26,  27, 28,
    29, 30, 31, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120};
const size_t giwscli::nup_four_cg313[28] = {
    15, 16, 17, 18, 19, 20, 21,  22,  23,  24,  25,  26,  27,  28,
    29, 30, 31, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120, 126};
const size_t giwscli::nup_four_cg314[29] = {
    15, 16, 17, 18, 19, 20,  21,  22,  23,  24,  25,  26,  27,  28, 29,
    30, 31, 71, 91, 95, 100, 106, 108, 115, 116, 118, 120, 126, 128};
const ptrdiff_t giwscli::tempga4[18] = {0, 1, 0, 2, 3, 0, 4,  5,  0,
                                        6, 0, 7, 0, 8, 9, 10, 11, 12};
const ptrdiff_t giwscli::tempgb4[13] = {0,  22, 24, 25, 27, 28, 30,
                                        32, 34, 35, 36, 37, 38};
unsigned int giwscli::resultt = 0;
unsigned int giwscli::resultu = 0;
unsigned int giwscli::star = 0;
unsigned int giwscli::type = 0;
ptrdiff_t giwscli::chosen_event = 0;
ptrdiff_t giwscli::chosen_banner = 0;
ptrdiff_t giwscli::unmet4_c = 0;
ptrdiff_t giwscli::unmet4_w = 0;
ptrdiff_t giwscli::unmet5_c = 0;
ptrdiff_t giwscli::unmet5_w = 0;
ptrdiff_t giwscli::switch_e_should_be = 0;
ptrdiff_t giwscli::switch_e_sav = 0;
ptrdiff_t giwscli::four_star_assurance_number = 1;
ptrdiff_t giwscli::five_star_assurance_number = 1;
ptrdiff_t giwscli::five_weight = 0;
ptrdiff_t giwscli::four_weight = 0;
ptrdiff_t giwscli::three_weight = 0;
ptrdiff_t giwscli::fate_weapon = 0;
ptrdiff_t giwscli::hash_out[9] = {0};
signed int giwscli::error_code = 0;

int giwscli::ini_ams(size_t *in, size_t ins, const size_t *out) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = out[i];
  }
  for (size_t i = 0; i < ins; i++) {
    if (in[i] != out[i]) {
      return 1;
    } else {
      continue;
    }
  }
  return 0;
}  // for of the same size

int giwscli::set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                        const size_t size_nup_five_c_p,
                        const size_t *nup_four_cgm,
                        const size_t *nup_five_cgm) {
  up_five = tempga3[sw];
  size_nup_four_c = size_nup_four_c_p;
  size_nup_five_c = size_nup_five_c_p;
  int ini_ams_check = 0;
  ini_ams_check += ini_ams(up_four_g, 3, tempga1[sw]);
  ini_ams_check += ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams_check += ini_ams(nup_five_c, size_nup_five_c, nup_five_cgm);
  ini_ams_check += ini_ams(four_check, 3, tempga2[sw]);
  if (ini_ams_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::set_pool_2(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                        const size_t size_nup_five_c_p,
                        const size_t *nup_four_cgm,
                        const size_t *nup_five_cgm) {
  up_five = tempgb3[sw];
  size_nup_four_c = size_nup_four_c_p;
  size_nup_five_c = size_nup_five_c_p;
  int ini_ams_check = 0;
  ini_ams_check += ini_ams(up_four_g, 3, tempgb1[sw]);
  ini_ams_check += ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams_check += ini_ams(nup_five_c, size_nup_five_c, nup_five_cgm);
  ini_ams_check += ini_ams(four_check, 3, tempgb2[sw]);
  if (ini_ams_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::set_pool_3(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                        const size_t size_nup_five_c_p,
                        const size_t *nup_four_cgm,
                        const size_t *nup_five_cgm) {
  int ini_ams_check = 0;
  ini_ams_check += ini_ams(up_five_g, 2, tempgc1[sw]);
  size_nup_four_c = size_nup_four_c_p;
  size_nup_five_c = size_nup_five_c_p;
  ini_ams_check += ini_ams(up_four_g, 5, tempgc2[sw]);
  ini_ams_check += ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams_check += ini_ams(nup_five_c, size_nup_five_c, nup_five_cgm);
  ini_ams_check += ini_ams(four_check, 5, tempgc3[sw]);
  ini_ams_check += ini_ams(five_check, 2, tempgc4[sw]);
  if (ini_ams_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::pool_stair_1(ptrdiff_t chosen_event_p) {
  int set_pool_check = 0;
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 11, 5, nup_four_cg1, nup_five_c1);
  } else if (chosen_event_p < 12) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 13, 5, nup_four_cg2, nup_five_c1);
  } else if (chosen_event_p < 14) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 14, 5, nup_four_cg3, nup_five_c1);
  } else if (chosen_event_p < 18) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 15, 5, nup_four_cg4, nup_five_c1);
  } else if (chosen_event_p < 20) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 16, 5, nup_four_cg5, nup_five_c1);
  } else if (chosen_event_p < 22) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 17, 5, nup_four_cg6, nup_five_c1);
  } else if (chosen_event_p < 24) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 18, 5, nup_four_cg7, nup_five_c1);
  } else if (chosen_event_p < 26) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 19, 5, nup_four_cg8, nup_five_c1);
  } else if (chosen_event_p < 32) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 20, 5, nup_four_cg9, nup_five_c1);
  } else if (chosen_event_p < 34) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 21, 5, nup_four_cg10, nup_five_c1);
  } else if (chosen_event_p < 36) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 22, 5, nup_four_cg11, nup_five_c1);
  } else if (chosen_event_p < 38) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 24, 6, nup_four_cg12, nup_five_c2);
  } else if (chosen_event_p < 39) {
    set_pool_check +=
        set_pool_1(chosen_event_p, 25, 6, nup_four_cg13, nup_five_c2);
  } else {
    error_code = 5;
  }
  if (set_pool_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::pool_stair_2(ptrdiff_t chosen_event_p) {
  int set_pool_check = 0;
  if (chosen_event_p > 0 && chosen_event_p < 2) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 18, 5, nup_four_cg7, nup_five_c1);
  } else if (chosen_event_p < 4) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 19, 5, nup_four_cg8, nup_five_c1);
  } else if (chosen_event_p < 7) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 20, 5, nup_four_cg9, nup_five_c1);
  } else if (chosen_event_p < 8) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 21, 5, nup_four_cg10, nup_five_c1);
  } else if (chosen_event_p < 10) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 22, 5, nup_four_cg11, nup_five_c1);
  } else if (chosen_event_p < 12) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 24, 6, nup_four_cg12, nup_five_c2);
  } else if (chosen_event_p < 13) {
    set_pool_check +=
        set_pool_2(chosen_event_p, 25, 6, nup_four_cg13, nup_five_c2);
  } else {
    error_code = 5;
  }
  if (set_pool_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::pool_stair_3(ptrdiff_t chosen_event_p) {
  int set_pool_check = 0;
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 11, 5, nup_four_cg1, nup_five_c1);
  } else if (chosen_event_p < 11) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 13, 5, nup_four_cg2, nup_five_c1);
  } else if (chosen_event_p < 13) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 14, 5, nup_four_cg3, nup_five_c1);
  } else if (chosen_event_p < 17) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 15, 5, nup_four_cg4, nup_five_c1);
  } else if (chosen_event_p < 19) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 16, 5, nup_four_cg5, nup_five_c1);
  } else if (chosen_event_p < 21) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 17, 5, nup_four_cg6, nup_five_c1);
  } else if (chosen_event_p < 23) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 18, 5, nup_four_cg7, nup_five_c1);
  } else if (chosen_event_p < 25) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 19, 5, nup_four_cg8, nup_five_c1);
  } else if (chosen_event_p < 31) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 20, 5, nup_four_cg9, nup_five_c1);
  } else if (chosen_event_p < 33) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 21, 5, nup_four_cg10, nup_five_c1);
  } else if (chosen_event_p < 35) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 22, 5, nup_four_cg11, nup_five_c1);
  } else if (chosen_event_p < 37) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 24, 6, nup_four_cg12, nup_five_c2);
  } else if (chosen_event_p < 38) {
    set_pool_check +=
        set_pool_3(chosen_event_p, 25, 6, nup_four_cg13, nup_five_c2);
  } else {
    error_code = 5;
  }
  if (set_pool_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::pool_stair_4(ptrdiff_t chosen_event_p) {
  int ini_ams_check = 0;
  switch (chosen_event_p) {
    case 1: {
      size_nup_five_c = 5;
      size_nup_four_c = 14;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 14, nup_four_cg31);
    } break;
    case 2: {
      size_nup_five_c = 5;
      size_nup_four_c = 16;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 16, nup_four_cg32);
    } break;
    case 3: {
      size_nup_five_c = 5;
      size_nup_four_c = 17;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 17, nup_four_cg33);
    } break;
    case 4: {
      size_nup_five_c = 5;
      size_nup_four_c = 18;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 18, nup_four_cg34);
    } break;
    case 5: {
      size_nup_five_c = 5;
      size_nup_four_c = 19;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 19, nup_four_cg35);
    } break;
    case 6: {
      size_nup_five_c = 5;
      size_nup_four_c = 20;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 20, nup_four_cg36);
    } break;
    case 7: {
      size_nup_five_c = 5;
      size_nup_four_c = 21;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 21, nup_four_cg37);
    } break;
    case 8: {
      size_nup_five_c = 5;
      size_nup_four_c = 22;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 22, nup_four_cg38);
    } break;
    case 9: {
      size_nup_five_c = 5;
      size_nup_four_c = 23;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 23, nup_four_cg39);
    } break;
    case 10: {
      size_nup_five_c = 5;
      size_nup_four_c = 24;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 24, nup_four_cg310);
    } break;
    case 11: {
      size_nup_five_c = 5;
      size_nup_four_c = 25;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 25, nup_four_cg311);
    } break;
    case 12: {
      size_nup_five_c = 6;
      size_nup_four_c = 27;
      ini_ams_check += ini_ams(nup_five_c, 6, nup_five_c2);
      ini_ams_check += ini_ams(nup_four_c, 27, nup_four_cg312);
    } break;
    case 13: {
      size_nup_five_c = 6;
      size_nup_four_c = 28;
      ini_ams_check += ini_ams(nup_five_c, 6, nup_five_c2);
      ini_ams_check += ini_ams(nup_four_c, 28, nup_four_cg313);
    } break;
    case 14: {
      size_nup_five_c = 6;
      size_nup_four_c = 29;
      ini_ams_check += ini_ams(nup_five_c, 6, nup_five_c2);
      ini_ams_check += ini_ams(nup_four_c, 29, nup_four_cg314);
    } break;
    default: {
      error_code = 102;
    }
  }
  if (ini_ams_check) {
    return 1;
  } else {
    return 0;
  }
}

size_t giwscli::rspick(const size_t *kindx, size_t sizekind) {
  size_t kindout = kindx[0];
  size_t index = 1;
  for (; index < sizekind; ++index) {
    const signed int temp121 = static_cast<signed int>(
        generatorz() % (static_cast<unsigned long long int>(index) + 1));
    if (temp121 == 0) {
      kindout = kindx[index];
    }
  }
  return kindout;
}
// randomly pick an element among kindx which size is sizekind

unsigned int giwscli::WRSpick(const ptrdiff_t *weightx, size_t nom) {
  ptrdiff_t ceilling = 1;
  for (size_t inin = 0; inin < nom; inin++) {
    ceilling += weightx[inin];
  }
  const unsigned int typess1[3] = {0, 1, 2};
  const unsigned int typess2[2] = {0, 1};
  if (nom == 3 && ceilling > 10000) {
    ceilling = 10000;
  }
  ptrdiff_t randomn =
      static_cast<ptrdiff_t>(generatorz() % static_cast<size_t>(ceilling));
  size_t tc = 0;
  unsigned int results = 0;
  for (size_t inin = 0; inin < nom; inin++) {
    if (randomn < weightx[inin]) {
      if (nom == 3) {
        results = typess1[tc];
      } else {
        results = typess2[tc];
      }
      inin = nom;
    } else {
      randomn -= weightx[inin];
      tc++;
    }
  }
  return results;
}
// weighted random sampling

int giwscli::tri() {
  star = 3;
  kind = rspick(three_g, 13);
  return 0;
}  // 3-star kind settler for all banners

int giwscli::core_f_1() {
  if (five_star_assurance_number < 74) {
    five_weight = 60;
  } else {
    five_weight = 60 + 600 * (five_star_assurance_number - 73);
  }
  if (four_star_assurance_number < 9) {
    four_weight = 510;
  } else {
    four_weight = 510 + 5100 * (four_star_assurance_number - 8);
  }
  three_weight = 9430;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      five_pity[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (five_star_guarantee_number || temp1 < 1) {
        type = 1;
        five_count_c++;
        kind = up_five;
        five_star_guarantee_number = false;
      } else {
        type = 2;
        five_count_c++;
        kind = rspick(nup_five_c, size_nup_five_c);
        if (kind == five_check[0]) {
          five_star_guarantee_number = false;
        } else {
          five_star_guarantee_number = true;
        }
      }  // 5-star kind settler for banner I
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
      }
      four_star_assurance_number = 0;
      if (four_star_guarantee_number || temp1 < 1) {
        type = 1;
        four_count_c++;
        unmet4_c = 0;
        kind = rspick(up_four_g, 3);
        four_star_guarantee_number = false;
      } else {
        if (unmet4_c < 18 && unmet4_w < 18) {
          const ptrdiff_t weight1[2] = {255, 255};
          resultu = WRSpick(weight1, 2);
          switch_0();
        } else if (unmet4_c > 17) {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_c - 16), 255};
          resultu = WRSpick(weight1, 2);
          switch_0();
        } else {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_w - 16), 255};
          resultu = WRSpick(weight1, 2);
          switch_1();
        }
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
    }
  }
  return 0;
}

int giwscli::core_f_3() {
  if (five_star_assurance_number < 63) {
    five_weight = 70;
  } else {
    five_weight = 70 + 700 * (five_star_assurance_number - 62);
  }
  if (four_star_assurance_number < 8) {
    four_weight = 600;
  } else if (four_star_assurance_number == 8) {
    four_weight = 6600;
  } else {
    four_weight = 6600 + 3000 * (four_star_assurance_number - 8);
  }
  three_weight = 9330;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      five_pity_w[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (fate_weapon == 1 || fate_weapon == 2) {
        fate_weapon_if();
      } else if (fate_weapon == 0) {
        if (five_star_guarantee_number || temp1 < 3) {
          type = 1;
          five_count_w++;
          kind = rspick(up_five_g, 2);
          five_star_guarantee_number = false;
        } else {
          type = 2;
          five_count_w++;
          kind = rspick(nup_five_w, 10);
          if ((kind == five_check[0] || kind == five_check[1])) {
            five_star_guarantee_number = false;
          } else {
            five_star_guarantee_number = true;
          }
        }
      } else {
        error_code = 2;
      }
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
      }
      four_star_assurance_number = 0;
      if (four_star_guarantee_number || temp1 < 3) {
        type = 1;
        four_count_w++;
        unmet4_w = 0;
        kind = rspick(up_four_g, 5);
        four_star_guarantee_number = false;
      } else {
        if (unmet4_c < 15 && unmet4_w < 15) {
          const ptrdiff_t weight2[2] = {300, 300};
          resultu = WRSpick(weight2, 2);
          switch_2();
        } else if (unmet4_c > 14) {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_c - 14), 300};
          resultu = WRSpick(weight2, 2);
          switch_2();
        } else {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_w - 14), 300};
          resultu = WRSpick(weight2, 2);
          switch_3();
        }
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
    }
  }
  return 0;
}

int giwscli::core_f_4() {
  if (five_star_assurance_number < 74) {
    five_weight = 60;
  } else {
    five_weight = 60 + 600 * (five_star_assurance_number - 73);
  }
  if (four_star_assurance_number < 9) {
    four_weight = 510;
  } else {
    four_weight = 510 + 5100 * (four_star_assurance_number - 8);
  }
  three_weight = 9430;
  const ptrdiff_t weight[3] = {five_weight, four_weight, three_weight};
  resultt = WRSpick(weight, 3);
  switch (resultt) {
    case 0: {
      star = 5;
      five_count++;
      five_pity[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (unmet5_c < 147 && unmet5_w < 147) {
        const ptrdiff_t weight4[2] = {30, 30};
        resultu = WRSpick(weight4, 2);
        switch_4();
      } else if (unmet5_c > 146) {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_c - 146), 30};
        resultu = WRSpick(weight4, 2);
        switch_4();
      } else {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_w - 146), 30};
        resultu = WRSpick(weight4, 2);
        switch_5();
      }
    } break;
    case 1: {
      star = 4;
      four_count++;
      if (four_star_assurance_number < 11) {
        four_pity[four_star_assurance_number - 1]++;
      } else {
        four_pity[10]++;
      }
      four_star_assurance_number = 0;
      if (unmet4_c < 18 && unmet4_w < 18) {
        const ptrdiff_t weight3[2] = {255, 255};
        resultu = WRSpick(weight3, 2);
        switch_6();
      } else if (unmet4_c > 17) {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_c - 16), 255};
        resultu = WRSpick(weight3, 2);
        switch_6();
      } else {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_w - 16), 255};
        resultu = WRSpick(weight3, 2);
        switch_7();
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
    }
  }
  return 0;
}

int giwscli::core_f_5() {
  if (is_noelle && countx == 9) {
    star = 4;
    four_count++;
    four_star_assurance_number = 0;
    kind = 20;
    four_count_c++;
    is_noelle = false;
  } else if (four_star_assurance_number < 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, size_nup_five_c);
    } else if (temp1 < 57) {
      star = 4;
      four_count++;
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
    } else
      tri();
  } else if (four_star_assurance_number == 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, size_nup_five_c);
    } else if (temp1 < 567) {
      star = 4;
      four_count++;
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
    } else
      tri();
  } else {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, size_nup_five_c);
    } else {
      star = 4;
      four_count++;
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
    }
  }
  return 0;
}

int giwscli::post_add() {
  countx++;
  five_star_assurance_number++;
  four_star_assurance_number++;
  if (chosen_event == 1 || chosen_event == 2 || chosen_event == 3) {
    if (star != 4 || type == 3) {
      unmet4_c++;
    }
    if (star != 4 || type != 3) {
      unmet4_w++;
    }
  } else if (chosen_event == 4) {
    if (!(star == 5 && type == 1)) {
      unmet5_c++;
    }
    if (!(star == 5 && type == 2)) {
      unmet5_w++;
    }
    if (!(star == 4 && type == 1)) {
      unmet4_c++;
    }
    if (!(star == 4 && type == 2)) {
      unmet4_w++;
    }
  } else {
    return 1;
  }
  return 0;
}

int giwscli::set_banner_f(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p) {
  int pool_stair_check = 0;
  switch (chosen_banner_p) {
    case 1: {
      pool_stair_check += pool_stair_1(chosen_event_p);
      if (chosen_event_p == 8) {
        five_check[0] = 0;
      }
      if (chosen_event_p < 22) {
        switch_e_should_be = 0;
      } else {
        switch_e_sav = switch_e_should_be;
        switch_e_should_be = tempga4[chosen_event_p - 22];
      }
    } break;
    case 2: {
      pool_stair_check += pool_stair_2(chosen_event_p);
      switch_e_sav = switch_e_should_be;
      switch_e_should_be = tempgb4[chosen_event_p];
    } break;
    case 3: {
      pool_stair_check += pool_stair_3(chosen_event_p);
    } break;
    case 4: {
      pool_stair_check += pool_stair_4(chosen_event_p);
    } break;
    case 5: {
      size_nup_five_c = 5;
      int ini_ams_check = 0;
      ini_ams_check += ini_ams(nup_five_c, 5, nup_five_c1);
      ini_ams_check += ini_ams(nup_four_c, 11, nup_four_cg1);
      if (ini_ams_check) {
        return 1;
      } else {
        return 0;
      }
    }
    default: {
      error_code = 7;
    }
  }
  if (pool_stair_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::gipull(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p) {
  int post_add_check = 0;
  const size_t tempt = static_cast<size_t>(generatorz());
  star = 0;  // 4-star or 5-star
  type = 0;  // Up or non-up, character or weapon
  kind = 0;  // which exactly
  giwscli::set_banner_f(chosen_banner_p, chosen_event_p);
  switch (chosen_banner_p) {
    case 1:
    case 2: {
      temp1 = tempt % 2;
      core_f_1();
    } break;
    case 3: {
      temp1 = tempt % 4;
      core_f_3();
    } break;
    case 4: {
      core_f_4();
    } break;
    case 5: {
      temp1 = tempt % 1000;
      core_f_5();
    } break;
    default: {
      error_code = 7;
    }
  }
  post_add_check += post_add();
  if (post_add_check) {
    return 1;
  } else {
    return 0;
  }
}

int giwscli::clear_all() {
  four_star_assurance_number = 1;
  five_star_assurance_number = 1;
  five_star_guarantee_number = false;
  four_star_guarantee_number = false;
  countx = 0;
  five_count = 0;
  five_count_c = 0;
  five_count_w = 0;
  four_count = 0;
  four_count_c = 0;
  four_count_w = 0;
  is_noelle = true;
  unmet4_c = 0;
  unmet4_w = 0;
  unmet5_c = 0;
  unmet5_w = 0;
  fate_points = 0;
  for (size_t &ini : pcount) {
    ini = 0;
  }
  for (size_t ini = 0; ini < 10; ini++) {
    four_pity[ini] = 0;
  }
  for (size_t &ini : five_pity) {
    ini = 0;
  }
  for (size_t &ini : five_pity_w) {
    ini = 0;
  }
  return 0;
}

int giwscli::hash_gen() {
  giwscli::hash_out[0] =
      static_cast<ptrdiff_t>(giwscli::five_star_guarantee_number);
  giwscli::hash_out[1] = giwscli::five_star_assurance_number;
  giwscli::hash_out[2] =
      static_cast<ptrdiff_t>(giwscli::four_star_guarantee_number);
  giwscli::hash_out[3] = giwscli::four_star_assurance_number;
  giwscli::hash_out[4] = giwscli::unmet5_c + 1;
  giwscli::hash_out[5] = giwscli::unmet5_w + 1;
  giwscli::hash_out[6] = giwscli::unmet4_c + 1;
  giwscli::hash_out[7] = giwscli::unmet4_w + 1;
  giwscli::hash_out[8] = giwscli::fate_weapon;
  return 0;
}

int giwscli::hash_apply(const ptrdiff_t *sav_p) {
  if (((four_count > 0 || five_count > 0) && sav_p[1] == sav_p[3]) ||
      (chosen_banner == 4 && sav_p[4] != sav_p[1] && sav_p[5] != sav_p[1]) ||
      (sav_p[6] != sav_p[3] && sav_p[7] != sav_p[3]) ||
      (chosen_banner != 3 && sav_p[4] > 89 && sav_p[5] > 89) ||
      (chosen_banner == 3 && sav_p[4] > 79 && sav_p[5] > 79) ||
      (sav_p[8] > 2)) {
    return 1;
  }
  five_star_guarantee_number = static_cast<bool>(sav_p[0]);
  five_star_assurance_number = sav_p[1];
  four_star_guarantee_number = static_cast<bool>(sav_p[2]);
  four_star_assurance_number = sav_p[3];
  if (sav_p[4] > 0) {
    unmet5_c = sav_p[4] - 1;
  } else {
    unmet5_c = 0;
  }
  if (sav_p[5] > 0) {
    unmet5_w = sav_p[5] - 1;
  } else {
    unmet5_w = 0;
  }
  if (sav_p[6] > 0) {
    unmet4_c = sav_p[6] - 1;
  } else {
    unmet4_c = 0;
  }
  if (sav_p[7] > 0) {
    unmet4_w = sav_p[7] - 1;
  } else {
    unmet4_w = 0;
  }
  fate_weapon = sav_p[8];
  return 0;
}

int giwscli::set_fw(const unsigned int fw) {
  if (fw != 0 && fw != 1 && fw != 2) {
    return 1;
  }
  fate_weapon = static_cast<ptrdiff_t>(fw);
  return 0;
}  // for function-based lib usages

int giwscli::case_2c() {
  type = 2;
  four_count_c++;
  unmet4_c = 0;
  kind = rspick(nup_four_c, size_nup_four_c);
  if ((kind == four_check[0] || kind == four_check[1] ||
       kind == four_check[2] || kind == four_check[3] ||
       kind == four_check[4])) {
    four_star_guarantee_number = false;
  } else {
    four_star_guarantee_number = true;
  }
  return 0;
}

int giwscli::case_2c_alt() {
  type = 2;
  four_count_c++;
  unmet4_c = 0;
  kind = rspick(nup_four_c, size_nup_four_c);
  four_star_guarantee_number = true;
  return 0;
}

int giwscli::case_3w() {
  type = 3;
  four_count_w++;
  unmet4_w = 0;
  kind = rspick(nup_four_w, size_nup_four_w);
  if ((kind == four_check[0] || kind == four_check[1] ||
       kind == four_check[2] || kind == four_check[3] ||
       kind == four_check[4])) {
    four_star_guarantee_number = false;
  } else {
    four_star_guarantee_number = true;
  }
  return 0;
}

int giwscli::case_3w_alt() {
  type = 3;
  four_count_w++;
  unmet4_w = 0;
  kind = rspick(nup_four_w, size_nup_four_w);
  four_star_guarantee_number = true;
  return 0;
}

int giwscli::case_2w() {
  type = 2;
  four_count_w++;
  unmet4_w = 0;
  kind = rspick(nup_four_w, size_nup_four_w);
  return 0;
}

int giwscli::case_1c() {
  type = 1;
  four_count_c++;
  unmet4_c = 0;
  kind = rspick(nup_four_c, size_nup_four_c);
  return 0;
}

int giwscli::switch_0() {
  switch (resultu) {
    case 0: {
      case_2c();
    } break;
    case 1: {
      case_3w_alt();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_1() {
  switch (resultu) {
    case 0: {
      case_3w_alt();
    } break;
    case 1: {
      case_2c();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_2() {
  switch (resultu) {
    case 0: {
      case_2c_alt();
    } break;
    case 1: {
      case_3w();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_3() {
  switch (resultu) {
    case 0: {
      case_3w();
    } break;
    case 1: {
      case_2c_alt();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_4() {
  switch (resultu) {
    case 0: {
      type = 1;
      five_count_c++;
      unmet5_c = 0;
      kind = rspick(nup_five_c, size_nup_five_c);
    } break;
    case 1: {
      type = 2;
      five_count_w++;
      unmet5_w = 0;
      kind = rspick(nup_five_w, 10);
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_5() {
  switch (resultu) {
    case 0: {
      type = 2;
      five_count_w++;
      unmet5_w = 0;
      kind = rspick(nup_five_w, 10);
    } break;
    case 1: {
      type = 1;
      five_count_c++;
      unmet5_c = 0;
      kind = rspick(nup_five_c, size_nup_five_c);
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_6() {
  switch (resultu) {
    case 0: {
      case_1c();
    } break;
    case 1: {
      case_2w();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::switch_7() {
  switch (resultu) {
    case 0: {
      case_2w();
    } break;
    case 1: {
      case_1c();
    } break;
    default: {
      error_code = 4;
    }
  }
  return 0;
}

int giwscli::fate_weapon_if() {
  if (fate_points == 2) {
    type = 1;
    five_count_w++;
    kind = up_five_g[fate_weapon - 1];
    fate_points = 0;
    five_star_guarantee_number = false;
  } else if (five_star_guarantee_number || temp1 < 3) {
    type = 1;
    five_count_w++;
    kind = rspick(up_five_g, 2);
    if (kind == up_five_g[fate_weapon - 1]) {
      fate_points = 0;
    } else {
      fate_points++;
    }
    five_star_guarantee_number = false;
  } else {
    type = 2;
    five_count_w++;
    kind = rspick(nup_five_w, 10);
    if (kind == up_five_g[fate_weapon - 1]) {
      fate_points = 0;
    } else {
      fate_points++;
    }
    if ((kind == five_check[0] || kind == five_check[1])) {
      five_star_guarantee_number = false;
    } else {
      five_star_guarantee_number = true;
    }
  }
  return 0;
}
