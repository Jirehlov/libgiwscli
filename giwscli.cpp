/*Version 2.8.2*/

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
size_t giwscli::size_nup_four_c = 1;
size_t giwscli::countx = 0;
size_t giwscli::five_count = 0;
size_t giwscli::five_count_c = 0;
size_t giwscli::five_count_w = 0;
size_t giwscli::four_count = 0;
size_t giwscli::four_count_c = 0;
size_t giwscli::four_count_w = 0;
size_t giwscli::max_fivesth = 1;
size_t giwscli::min_fivesth = 1;
size_t giwscli::max_fivecount = 1;
size_t giwscli::min_fivecount = 1;
size_t giwscli::size_nup_four_w = 18;
size_t giwscli::up_five_g[2] = {0};
size_t giwscli::up_four_g[5] = {0};
size_t giwscli::nup_four_c[32] = {0};
size_t giwscli::five_check[2] = {MAX_ITEMS, MAX_ITEMS};
size_t giwscli::four_check[5] = {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS,
                                 MAX_ITEMS};
size_t giwscli::pcount[256] = {0};
size_t giwscli::four_pity[11] = {0};
size_t giwscli::five_pity[90] = {0};
size_t giwscli::five_pity_w[80] = {0};
const size_t giwscli::nup_five_c[5] = {0, 1, 2, 3, 4};
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
const size_t giwscli::four_stars_c[25] = {15,  16,  17,  18, 19, 20, 21,
                                          22,  23,  24,  25, 26, 27, 28,
                                          29,  30,  31,  71, 91, 95, 100,
                                          106, 108, 115, 116},
             giwscli::four_stars_w[27] = {32, 33, 34, 35,  36,  37, 38,
                                          39, 40, 41, 42,  43,  44, 45,
                                          46, 47, 48, 49,  79,  80, 82,
                                          83, 84, 88, 102, 103, 104},
             giwscli::five_stars_c[24] = {0,  1,  2,  3,  4,   63,  64,  65,
                                          66, 67, 68, 69, 70,  72,  86,  89,
                                          90, 94, 96, 99, 105, 109, 111, 114},
             giwscli::five_stars_w[29] = {5,   6,   7,   8,   9,  10, 11, 12,
                                          13,  14,  73,  74,  75, 76, 77, 78,
                                          81,  85,  87,  92,  93, 97, 98, 101,
                                          107, 110, 112, 113, 117};
const size_t giwscli::tempga1[34][3] = {
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
    {16, 21, 108}                       // 33
};                                      // MID_MOD

const size_t giwscli::tempga2[34][3] = {
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
    {16, 21, 108}                       // 33
};

const size_t giwscli::tempga3[34] = {
    MAX_ITEMS, 63, 64, 65, 66,  67, 68,  69,  0,  70, 63, 65,
    66,        72, 64, 86, 89,  90, 96,  94,  65, 70, 67, 105,
    109,       66, 99, 96, 111, 89, 114, 105, 86, 90};

const size_t giwscli::tempgb1[8][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {15, 20, 21},                       // 1
    {19, 23, 108},                      // 2
    {24, 25, 71},                       // 3
    {16, 21, 95},                       // 4
    {17, 26, 108},                      // 5
    {20, 30, 71},                       // 6
    {23, 100, 116},                     // 7
};

const size_t giwscli::tempgb2[8][3] = {
    {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS},  // 0
    {15, 20, 21},                       // 1
    {19, 23, MAX_ITEMS},                // 2
    {24, 25, 71},                       // 3
    {16, 21, 95},                       // 4
    {17, 26, 108},                      // 5
    {20, 30, 71},                       // 6
    {23, 100, MAX_ITEMS},               // 7
};

const size_t giwscli::tempgb3[8] = {MAX_ITEMS, 72, 69, 68, 94, 63, 69, 64};

const size_t giwscli::tempgc1[33][2] = {
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
    {76, 93}                 // 32
};

const size_t giwscli::tempgc2[33][5] = {
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
    {41, 43, 48, 83, 84}                                      // 32
};

const size_t giwscli::tempgc3[33][5] = {
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
    {41, 43, 48, MAX_ITEMS, MAX_ITEMS}                        // 32
};

const size_t giwscli::tempgc4[33][2] = {
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
    {MAX_ITEMS, MAX_ITEMS}   // 32
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
const ptrdiff_t giwscli::tempga4[12] = {0, 1, 0, 2, 3, 0, 4, 5, 0, 6, 0, 7};
const ptrdiff_t giwscli::tempgb4[8] = {0, 22, 24, 25, 27, 28, 30, 32};
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
ptrdiff_t giwscli::max_fives = 1;
ptrdiff_t giwscli::min_fives = PTRDIFF_MAX;
ptrdiff_t giwscli::five_weight = 0;
ptrdiff_t giwscli::four_weight = 0;
ptrdiff_t giwscli::three_weight = 0;
ptrdiff_t giwscli::fate_weapon = 0;
ptrdiff_t giwscli::ave_fives = 0;
ptrdiff_t giwscli::hash_out[9] = {0};
signed int giwscli::error_code = 0;
#if CN_ITEM_H
const char *giwscli::s_pname_cn[256] = {
    CN_C_0,   CN_C_1,   CN_C_2,   CN_C_3,   CN_C_4,   CN_C_5,   CN_C_6,
    CN_C_7,   CN_C_8,   CN_C_9,   CN_C_10,  CN_C_11,  CN_C_12,  CN_C_13,
    CN_C_14,  CN_C_15,  CN_C_16,  CN_C_17,  CN_C_18,  CN_C_19,  CN_C_20,
    CN_C_21,  CN_C_22,  CN_C_23,  CN_C_24,  CN_C_25,  CN_C_26,  CN_C_27,
    CN_C_28,  CN_C_29,  CN_C_30,  CN_C_31,  CN_C_32,  CN_C_33,  CN_C_34,
    CN_C_35,  CN_C_36,  CN_C_37,  CN_C_38,  CN_C_39,  CN_C_40,  CN_C_41,
    CN_C_42,  CN_C_43,  CN_C_44,  CN_C_45,  CN_C_46,  CN_C_47,  CN_C_48,
    CN_C_49,  CN_C_50,  CN_C_51,  CN_C_52,  CN_C_53,  CN_C_54,  CN_C_55,
    CN_C_56,  CN_C_57,  CN_C_58,  CN_C_59,  CN_C_60,  CN_C_61,  CN_C_62,
    CN_C_63,  CN_C_64,  CN_C_65,  CN_C_66,  CN_C_67,  CN_C_68,  CN_C_69,
    CN_C_70,  CN_C_71,  CN_C_72,  CN_C_73,  CN_C_74,  CN_C_75,  CN_C_76,
    CN_C_77,  CN_C_78,  CN_C_79,  CN_C_80,  CN_C_81,  CN_C_82,  CN_C_83,
    CN_C_84,  CN_C_85,  CN_C_86,  CN_C_87,  CN_C_88,  CN_C_89,  CN_C_90,
    CN_C_91,  CN_C_92,  CN_C_93,  CN_C_94,  CN_C_95,  CN_C_96,  CN_C_97,
    CN_C_98,  CN_C_99,  CN_C_100, CN_C_101, CN_C_102, CN_C_103, CN_C_104,
    CN_C_105, CN_C_106, CN_C_107, CN_C_108, CN_C_109, CN_C_110, CN_C_111,
    CN_C_112, CN_C_113, CN_C_114, CN_C_115, CN_C_116, CN_C_117, CN_C_118,
    CN_C_119, CN_C_120, CN_C_121, CN_C_122, CN_C_123, CN_C_124, CN_C_125,
    CN_C_126, CN_C_127, CN_C_128, CN_C_129, CN_C_130, CN_C_131, CN_C_132,
    CN_C_133, CN_C_134, CN_C_135, CN_C_136, CN_C_137, CN_C_138, CN_C_139,
    CN_C_140, CN_C_141, CN_C_142, CN_C_143, CN_C_144, CN_C_145, CN_C_146,
    CN_C_147, CN_C_148, CN_C_149, CN_C_150, CN_C_151, CN_C_152, CN_C_153,
    CN_C_154, CN_C_155, CN_C_156, CN_C_157, CN_C_158, CN_C_159, CN_C_160,
    CN_C_161, CN_C_162, CN_C_163, CN_C_164, CN_C_165, CN_C_166, CN_C_167,
    CN_C_168, CN_C_169, CN_C_170, CN_C_171, CN_C_172, CN_C_173, CN_C_174,
    CN_C_175, CN_C_176, CN_C_177, CN_C_178, CN_C_179, CN_C_180, CN_C_181,
    CN_C_182, CN_C_183, CN_C_184, CN_C_185, CN_C_186, CN_C_187, CN_C_188,
    CN_C_189, CN_C_190, CN_C_191, CN_C_192, CN_C_193, CN_C_194, CN_C_195,
    CN_C_196, CN_C_197, CN_C_198, CN_C_199, CN_C_200, CN_C_201, CN_C_202,
    CN_C_203, CN_C_204, CN_C_205, CN_C_206, CN_C_207, CN_C_208, CN_C_209,
    CN_C_210, CN_C_211, CN_C_212, CN_C_213, CN_C_214, CN_C_215, CN_C_216,
    CN_C_217, CN_C_218, CN_C_219, CN_C_220, CN_C_221, CN_C_222, CN_C_223,
    CN_C_224, CN_C_225, CN_C_226, CN_C_227, CN_C_228, CN_C_229, CN_C_230,
    CN_C_231, CN_C_232, CN_C_233, CN_C_234, CN_C_235, CN_C_236, CN_C_237,
    CN_C_238, CN_C_239, CN_C_240, CN_C_241, CN_C_242, CN_C_243, CN_C_244,
    CN_C_245, CN_C_246, CN_C_247, CN_C_248, CN_C_249, CN_C_250, CN_C_251,
    CN_C_252, CN_C_253, CN_C_254, CN_C_255};

const char *giwscli::s_pnameshort_cn[256] = {
    CN_X_0,   CN_X_1,   CN_X_2,   CN_X_3,   CN_X_4,   CN_X_5,   CN_X_6,
    CN_X_7,   CN_X_8,   CN_X_9,   CN_X_10,  CN_X_11,  CN_X_12,  CN_X_13,
    CN_X_14,  CN_X_15,  CN_X_16,  CN_X_17,  CN_X_18,  CN_X_19,  CN_X_20,
    CN_X_21,  CN_X_22,  CN_X_23,  CN_X_24,  CN_X_25,  CN_X_26,  CN_X_27,
    CN_X_28,  CN_X_29,  CN_X_30,  CN_X_31,  CN_X_32,  CN_X_33,  CN_X_34,
    CN_X_35,  CN_X_36,  CN_X_37,  CN_X_38,  CN_X_39,  CN_X_40,  CN_X_41,
    CN_X_42,  CN_X_43,  CN_X_44,  CN_X_45,  CN_X_46,  CN_X_47,  CN_X_48,
    CN_X_49,  CN_X_50,  CN_X_51,  CN_X_52,  CN_X_53,  CN_X_54,  CN_X_55,
    CN_X_56,  CN_X_57,  CN_X_58,  CN_X_59,  CN_X_60,  CN_X_61,  CN_X_62,
    CN_X_63,  CN_X_64,  CN_X_65,  CN_X_66,  CN_X_67,  CN_X_68,  CN_X_69,
    CN_X_70,  CN_X_71,  CN_X_72,  CN_X_73,  CN_X_74,  CN_X_75,  CN_X_76,
    CN_X_77,  CN_X_78,  CN_X_79,  CN_X_80,  CN_X_81,  CN_X_82,  CN_X_83,
    CN_X_84,  CN_X_85,  CN_X_86,  CN_X_87,  CN_X_88,  CN_X_89,  CN_X_90,
    CN_X_91,  CN_X_92,  CN_X_93,  CN_X_94,  CN_X_95,  CN_X_96,  CN_X_97,
    CN_X_98,  CN_X_99,  CN_X_100, CN_X_101, CN_X_102, CN_X_103, CN_X_104,
    CN_X_105, CN_X_106, CN_X_107, CN_X_108, CN_X_109, CN_X_110, CN_X_111,
    CN_X_112, CN_X_113, CN_X_114, CN_X_115, CN_X_116, CN_X_117, CN_X_118,
    CN_X_119, CN_X_120, CN_X_121, CN_X_122, CN_X_123, CN_X_124, CN_X_125,
    CN_X_126, CN_X_127, CN_X_128, CN_X_129, CN_X_130, CN_X_131, CN_X_132,
    CN_X_133, CN_X_134, CN_X_135, CN_X_136, CN_X_137, CN_X_138, CN_X_139,
    CN_X_140, CN_X_141, CN_X_142, CN_X_143, CN_X_144, CN_X_145, CN_X_146,
    CN_X_147, CN_X_148, CN_X_149, CN_X_150, CN_X_151, CN_X_152, CN_X_153,
    CN_X_154, CN_X_155, CN_X_156, CN_X_157, CN_X_158, CN_X_159, CN_X_160,
    CN_X_161, CN_X_162, CN_X_163, CN_X_164, CN_X_165, CN_X_166, CN_X_167,
    CN_X_168, CN_X_169, CN_X_170, CN_X_171, CN_X_172, CN_X_173, CN_X_174,
    CN_X_175, CN_X_176, CN_X_177, CN_X_178, CN_X_179, CN_X_180, CN_X_181,
    CN_X_182, CN_X_183, CN_X_184, CN_X_185, CN_X_186, CN_X_187, CN_X_188,
    CN_X_189, CN_X_190, CN_X_191, CN_X_192, CN_X_193, CN_X_194, CN_X_195,
    CN_X_196, CN_X_197, CN_X_198, CN_X_199, CN_X_200, CN_X_201, CN_X_202,
    CN_X_203, CN_X_204, CN_X_205, CN_X_206, CN_X_207, CN_X_208, CN_X_209,
    CN_X_210, CN_X_211, CN_X_212, CN_X_213, CN_X_214, CN_X_215, CN_X_216,
    CN_X_217, CN_X_218, CN_X_219, CN_X_220, CN_X_221, CN_X_222, CN_X_223,
    CN_X_224, CN_X_225, CN_X_226, CN_X_227, CN_X_228, CN_X_229, CN_X_230,
    CN_X_231, CN_X_232, CN_X_233, CN_X_234, CN_X_235, CN_X_236, CN_X_237,
    CN_X_238, CN_X_239, CN_X_240, CN_X_241, CN_X_242, CN_X_243, CN_X_244,
    CN_X_245, CN_X_246, CN_X_247, CN_X_248, CN_X_249, CN_X_250, CN_X_251,
    CN_X_252, CN_X_253, CN_X_254, CN_X_255};

const char *giwscli::s_pdetails_cn[256] = {
    CN_D_0,   CN_D_1,   CN_D_2,   CN_D_3,   CN_D_4,   CN_D_5,   CN_D_6,
    CN_D_7,   CN_D_8,   CN_D_9,   CN_D_10,  CN_D_11,  CN_D_12,  CN_D_13,
    CN_D_14,  CN_D_15,  CN_D_16,  CN_D_17,  CN_D_18,  CN_D_19,  CN_D_20,
    CN_D_21,  CN_D_22,  CN_D_23,  CN_D_24,  CN_D_25,  CN_D_26,  CN_D_27,
    CN_D_28,  CN_D_29,  CN_D_30,  CN_D_31,  CN_D_32,  CN_D_33,  CN_D_34,
    CN_D_35,  CN_D_36,  CN_D_37,  CN_D_38,  CN_D_39,  CN_D_40,  CN_D_41,
    CN_D_42,  CN_D_43,  CN_D_44,  CN_D_45,  CN_D_46,  CN_D_47,  CN_D_48,
    CN_D_49,  CN_D_50,  CN_D_51,  CN_D_52,  CN_D_53,  CN_D_54,  CN_D_55,
    CN_D_56,  CN_D_57,  CN_D_58,  CN_D_59,  CN_D_60,  CN_D_61,  CN_D_62,
    CN_D_63,  CN_D_64,  CN_D_65,  CN_D_66,  CN_D_67,  CN_D_68,  CN_D_69,
    CN_D_70,  CN_D_71,  CN_D_72,  CN_D_73,  CN_D_74,  CN_D_75,  CN_D_76,
    CN_D_77,  CN_D_78,  CN_D_79,  CN_D_80,  CN_D_81,  CN_D_82,  CN_D_83,
    CN_D_84,  CN_D_85,  CN_D_86,  CN_D_87,  CN_D_88,  CN_D_89,  CN_D_90,
    CN_D_91,  CN_D_92,  CN_D_93,  CN_D_94,  CN_D_95,  CN_D_96,  CN_D_97,
    CN_D_98,  CN_D_99,  CN_D_100, CN_D_101, CN_D_102, CN_D_103, CN_D_104,
    CN_D_105, CN_D_106, CN_D_107, CN_D_108, CN_D_109, CN_D_110, CN_D_111,
    CN_D_112, CN_D_113, CN_D_114, CN_D_115, CN_D_116, CN_D_117, CN_D_118,
    CN_D_119, CN_D_120, CN_D_121, CN_D_122, CN_D_123, CN_D_124, CN_D_125,
    CN_D_126, CN_D_127, CN_D_128, CN_D_129, CN_D_130, CN_D_131, CN_D_132,
    CN_D_133, CN_D_134, CN_D_135, CN_D_136, CN_D_137, CN_D_138, CN_D_139,
    CN_D_140, CN_D_141, CN_D_142, CN_D_143, CN_D_144, CN_D_145, CN_D_146,
    CN_D_147, CN_D_148, CN_D_149, CN_D_150, CN_D_151, CN_D_152, CN_D_153,
    CN_D_154, CN_D_155, CN_D_156, CN_D_157, CN_D_158, CN_D_159, CN_D_160,
    CN_D_161, CN_D_162, CN_D_163, CN_D_164, CN_D_165, CN_D_166, CN_D_167,
    CN_D_168, CN_D_169, CN_D_170, CN_D_171, CN_D_172, CN_D_173, CN_D_174,
    CN_D_175, CN_D_176, CN_D_177, CN_D_178, CN_D_179, CN_D_180, CN_D_181,
    CN_D_182, CN_D_183, CN_D_184, CN_D_185, CN_D_186, CN_D_187, CN_D_188,
    CN_D_189, CN_D_190, CN_D_191, CN_D_192, CN_D_193, CN_D_194, CN_D_195,
    CN_D_196, CN_D_197, CN_D_198, CN_D_199, CN_D_200, CN_D_201, CN_D_202,
    CN_D_203, CN_D_204, CN_D_205, CN_D_206, CN_D_207, CN_D_208, CN_D_209,
    CN_D_210, CN_D_211, CN_D_212, CN_D_213, CN_D_214, CN_D_215, CN_D_216,
    CN_D_217, CN_D_218, CN_D_219, CN_D_220, CN_D_221, CN_D_222, CN_D_223,
    CN_D_224, CN_D_225, CN_D_226, CN_D_227, CN_D_228, CN_D_229, CN_D_230,
    CN_D_231, CN_D_232, CN_D_233, CN_D_234, CN_D_235, CN_D_236, CN_D_237,
    CN_D_238, CN_D_239, CN_D_240, CN_D_241, CN_D_242, CN_D_243, CN_D_244,
    CN_D_245, CN_D_246, CN_D_247, CN_D_248, CN_D_249, CN_D_250, CN_D_251,
    CN_D_252, CN_D_253, CN_D_254, CN_D_255};

const char *giwscli::s_charbanner1_cn[64] = {
    CN_CBI_0,  CN_CBI_1,  CN_CBI_2,  CN_CBI_3,  CN_CBI_4,  CN_CBI_5,  CN_CBI_6,
    CN_CBI_7,  CN_CBI_8,  CN_CBI_9,  CN_CBI_10, CN_CBI_11, CN_CBI_12, CN_CBI_13,
    CN_CBI_14, CN_CBI_15, CN_CBI_16, CN_CBI_17, CN_CBI_18, CN_CBI_19, CN_CBI_20,
    CN_CBI_21, CN_CBI_22, CN_CBI_23, CN_CBI_24, CN_CBI_25, CN_CBI_26, CN_CBI_27,
    CN_CBI_28, CN_CBI_29, CN_CBI_30, CN_CBI_31, CN_CBI_32, CN_CBI_33, CN_CBI_34,
    CN_CBI_35, CN_CBI_36, CN_CBI_37, CN_CBI_38, CN_CBI_39, CN_CBI_40, CN_CBI_41,
    CN_CBI_42, CN_CBI_43, CN_CBI_44, CN_CBI_45, CN_CBI_46, CN_CBI_47, CN_CBI_48,
    CN_CBI_49, CN_CBI_50, CN_CBI_51, CN_CBI_52, CN_CBI_53, CN_CBI_54, CN_CBI_55,
    CN_CBI_56, CN_CBI_57, CN_CBI_58, CN_CBI_59, CN_CBI_60, CN_CBI_61, CN_CBI_62,
    CN_CBI_63};

const char *giwscli::s_charbanner2_cn[32] = {
    CN_CBII_0,  CN_CBII_1,  CN_CBII_2,  CN_CBII_3,  CN_CBII_4,  CN_CBII_5,
    CN_CBII_6,  CN_CBII_7,  CN_CBII_8,  CN_CBII_9,  CN_CBII_10, CN_CBII_11,
    CN_CBII_12, CN_CBII_13, CN_CBII_14, CN_CBII_15, CN_CBII_16, CN_CBII_17,
    CN_CBII_18, CN_CBII_19, CN_CBII_20, CN_CBII_21, CN_CBII_22, CN_CBII_23,
    CN_CBII_24, CN_CBII_25, CN_CBII_26, CN_CBII_27, CN_CBII_28, CN_CBII_29,
    CN_CBII_30, CN_CBII_31};

const char *giwscli::s_weaponbanner_cn[64] = {
    CN_WB_0,  CN_WB_1,  CN_WB_2,  CN_WB_3,  CN_WB_4,  CN_WB_5,  CN_WB_6,
    CN_WB_7,  CN_WB_8,  CN_WB_9,  CN_WB_10, CN_WB_11, CN_WB_12, CN_WB_13,
    CN_WB_14, CN_WB_15, CN_WB_16, CN_WB_17, CN_WB_18, CN_WB_19, CN_WB_20,
    CN_WB_21, CN_WB_22, CN_WB_23, CN_WB_24, CN_WB_25, CN_WB_26, CN_WB_27,
    CN_WB_28, CN_WB_29, CN_WB_30, CN_WB_31, CN_WB_32, CN_WB_33, CN_WB_34,
    CN_WB_35, CN_WB_36, CN_WB_37, CN_WB_38, CN_WB_39, CN_WB_40, CN_WB_41,
    CN_WB_42, CN_WB_43, CN_WB_44, CN_WB_45, CN_WB_46, CN_WB_47, CN_WB_48,
    CN_WB_49, CN_WB_50, CN_WB_51, CN_WB_52, CN_WB_53, CN_WB_54, CN_WB_55,
    CN_WB_56, CN_WB_57, CN_WB_58, CN_WB_59, CN_WB_60, CN_WB_61, CN_WB_62,
    CN_WB_63};

const char *giwscli::s_permbanner_cn[32] = {
    CN_PB_0,  CN_PB_1,  CN_PB_2,  CN_PB_3,  CN_PB_4,  CN_PB_5,  CN_PB_6,
    CN_PB_7,  CN_PB_8,  CN_PB_9,  CN_PB_10, CN_PB_11, CN_PB_12, CN_PB_13,
    CN_PB_14, CN_PB_15, CN_PB_16, CN_PB_17, CN_PB_18, CN_PB_19, CN_PB_20,
    CN_PB_21, CN_PB_22, CN_PB_23, CN_PB_24, CN_PB_25, CN_PB_26, CN_PB_27,
    CN_PB_28, CN_PB_29, CN_PB_30, CN_PB_31};

const char *giwscli::s_beginbanner_cn[8] = {CN_BW_0, CN_BW_1, CN_BW_2, CN_BW_3,
                                            CN_BW_4, CN_BW_5, CN_BW_6, CN_BW_7};

const char *giwscli::s_version_cn[32] = {
    CN_V_0,  CN_V_1,  CN_V_2,  CN_V_3,  CN_V_4,  CN_V_5,  CN_V_6,  CN_V_7,
    CN_V_8,  CN_V_9,  CN_V_10, CN_V_11, CN_V_12, CN_V_13, CN_V_14, CN_V_15,
    CN_V_16, CN_V_17, CN_V_18, CN_V_19, CN_V_20, CN_V_21, CN_V_22, CN_V_23,
    CN_V_24, CN_V_25, CN_V_26, CN_V_27, CN_V_28, CN_V_29, CN_V_30, CN_V_31};
#endif
#if EN_ITEM_H
const char *giwscli::s_pname_en[256] = {
    EN_C_0,   EN_C_1,   EN_C_2,   EN_C_3,   EN_C_4,   EN_C_5,   EN_C_6,
    EN_C_7,   EN_C_8,   EN_C_9,   EN_C_10,  EN_C_11,  EN_C_12,  EN_C_13,
    EN_C_14,  EN_C_15,  EN_C_16,  EN_C_17,  EN_C_18,  EN_C_19,  EN_C_20,
    EN_C_21,  EN_C_22,  EN_C_23,  EN_C_24,  EN_C_25,  EN_C_26,  EN_C_27,
    EN_C_28,  EN_C_29,  EN_C_30,  EN_C_31,  EN_C_32,  EN_C_33,  EN_C_34,
    EN_C_35,  EN_C_36,  EN_C_37,  EN_C_38,  EN_C_39,  EN_C_40,  EN_C_41,
    EN_C_42,  EN_C_43,  EN_C_44,  EN_C_45,  EN_C_46,  EN_C_47,  EN_C_48,
    EN_C_49,  EN_C_50,  EN_C_51,  EN_C_52,  EN_C_53,  EN_C_54,  EN_C_55,
    EN_C_56,  EN_C_57,  EN_C_58,  EN_C_59,  EN_C_60,  EN_C_61,  EN_C_62,
    EN_C_63,  EN_C_64,  EN_C_65,  EN_C_66,  EN_C_67,  EN_C_68,  EN_C_69,
    EN_C_70,  EN_C_71,  EN_C_72,  EN_C_73,  EN_C_74,  EN_C_75,  EN_C_76,
    EN_C_77,  EN_C_78,  EN_C_79,  EN_C_80,  EN_C_81,  EN_C_82,  EN_C_83,
    EN_C_84,  EN_C_85,  EN_C_86,  EN_C_87,  EN_C_88,  EN_C_89,  EN_C_90,
    EN_C_91,  EN_C_92,  EN_C_93,  EN_C_94,  EN_C_95,  EN_C_96,  EN_C_97,
    EN_C_98,  EN_C_99,  EN_C_100, EN_C_101, EN_C_102, EN_C_103, EN_C_104,
    EN_C_105, EN_C_106, EN_C_107, EN_C_108, EN_C_109, EN_C_110, EN_C_111,
    EN_C_112, EN_C_113, EN_C_114, EN_C_115, EN_C_116, EN_C_117, EN_C_118,
    EN_C_119, EN_C_120, EN_C_121, EN_C_122, EN_C_123, EN_C_124, EN_C_125,
    EN_C_126, EN_C_127, EN_C_128, EN_C_129, EN_C_130, EN_C_131, EN_C_132,
    EN_C_133, EN_C_134, EN_C_135, EN_C_136, EN_C_137, EN_C_138, EN_C_139,
    EN_C_140, EN_C_141, EN_C_142, EN_C_143, EN_C_144, EN_C_145, EN_C_146,
    EN_C_147, EN_C_148, EN_C_149, EN_C_150, EN_C_151, EN_C_152, EN_C_153,
    EN_C_154, EN_C_155, EN_C_156, EN_C_157, EN_C_158, EN_C_159, EN_C_160,
    EN_C_161, EN_C_162, EN_C_163, EN_C_164, EN_C_165, EN_C_166, EN_C_167,
    EN_C_168, EN_C_169, EN_C_170, EN_C_171, EN_C_172, EN_C_173, EN_C_174,
    EN_C_175, EN_C_176, EN_C_177, EN_C_178, EN_C_179, EN_C_180, EN_C_181,
    EN_C_182, EN_C_183, EN_C_184, EN_C_185, EN_C_186, EN_C_187, EN_C_188,
    EN_C_189, EN_C_190, EN_C_191, EN_C_192, EN_C_193, EN_C_194, EN_C_195,
    EN_C_196, EN_C_197, EN_C_198, EN_C_199, EN_C_200, EN_C_201, EN_C_202,
    EN_C_203, EN_C_204, EN_C_205, EN_C_206, EN_C_207, EN_C_208, EN_C_209,
    EN_C_210, EN_C_211, EN_C_212, EN_C_213, EN_C_214, EN_C_215, EN_C_216,
    EN_C_217, EN_C_218, EN_C_219, EN_C_220, EN_C_221, EN_C_222, EN_C_223,
    EN_C_224, EN_C_225, EN_C_226, EN_C_227, EN_C_228, EN_C_229, EN_C_230,
    EN_C_231, EN_C_232, EN_C_233, EN_C_234, EN_C_235, EN_C_236, EN_C_237,
    EN_C_238, EN_C_239, EN_C_240, EN_C_241, EN_C_242, EN_C_243, EN_C_244,
    EN_C_245, EN_C_246, EN_C_247, EN_C_248, EN_C_249, EN_C_250, EN_C_251,
    EN_C_252, EN_C_253, EN_C_254, EN_C_255};

const char *giwscli::s_pnameshort_en[256] = {
    EN_X_0,   EN_X_1,   EN_X_2,   EN_X_3,   EN_X_4,   EN_X_5,   EN_X_6,
    EN_X_7,   EN_X_8,   EN_X_9,   EN_X_10,  EN_X_11,  EN_X_12,  EN_X_13,
    EN_X_14,  EN_X_15,  EN_X_16,  EN_X_17,  EN_X_18,  EN_X_19,  EN_X_20,
    EN_X_21,  EN_X_22,  EN_X_23,  EN_X_24,  EN_X_25,  EN_X_26,  EN_X_27,
    EN_X_28,  EN_X_29,  EN_X_30,  EN_X_31,  EN_X_32,  EN_X_33,  EN_X_34,
    EN_X_35,  EN_X_36,  EN_X_37,  EN_X_38,  EN_X_39,  EN_X_40,  EN_X_41,
    EN_X_42,  EN_X_43,  EN_X_44,  EN_X_45,  EN_X_46,  EN_X_47,  EN_X_48,
    EN_X_49,  EN_X_50,  EN_X_51,  EN_X_52,  EN_X_53,  EN_X_54,  EN_X_55,
    EN_X_56,  EN_X_57,  EN_X_58,  EN_X_59,  EN_X_60,  EN_X_61,  EN_X_62,
    EN_X_63,  EN_X_64,  EN_X_65,  EN_X_66,  EN_X_67,  EN_X_68,  EN_X_69,
    EN_X_70,  EN_X_71,  EN_X_72,  EN_X_73,  EN_X_74,  EN_X_75,  EN_X_76,
    EN_X_77,  EN_X_78,  EN_X_79,  EN_X_80,  EN_X_81,  EN_X_82,  EN_X_83,
    EN_X_84,  EN_X_85,  EN_X_86,  EN_X_87,  EN_X_88,  EN_X_89,  EN_X_90,
    EN_X_91,  EN_X_92,  EN_X_93,  EN_X_94,  EN_X_95,  EN_X_96,  EN_X_97,
    EN_X_98,  EN_X_99,  EN_X_100, EN_X_101, EN_X_102, EN_X_103, EN_X_104,
    EN_X_105, EN_X_106, EN_X_107, EN_X_108, EN_X_109, EN_X_110, EN_X_111,
    EN_X_112, EN_X_113, EN_X_114, EN_X_115, EN_X_116, EN_X_117, EN_X_118,
    EN_X_119, EN_X_120, EN_X_121, EN_X_122, EN_X_123, EN_X_124, EN_X_125,
    EN_X_126, EN_X_127, EN_X_128, EN_X_129, EN_X_130, EN_X_131, EN_X_132,
    EN_X_133, EN_X_134, EN_X_135, EN_X_136, EN_X_137, EN_X_138, EN_X_139,
    EN_X_140, EN_X_141, EN_X_142, EN_X_143, EN_X_144, EN_X_145, EN_X_146,
    EN_X_147, EN_X_148, EN_X_149, EN_X_150, EN_X_151, EN_X_152, EN_X_153,
    EN_X_154, EN_X_155, EN_X_156, EN_X_157, EN_X_158, EN_X_159, EN_X_160,
    EN_X_161, EN_X_162, EN_X_163, EN_X_164, EN_X_165, EN_X_166, EN_X_167,
    EN_X_168, EN_X_169, EN_X_170, EN_X_171, EN_X_172, EN_X_173, EN_X_174,
    EN_X_175, EN_X_176, EN_X_177, EN_X_178, EN_X_179, EN_X_180, EN_X_181,
    EN_X_182, EN_X_183, EN_X_184, EN_X_185, EN_X_186, EN_X_187, EN_X_188,
    EN_X_189, EN_X_190, EN_X_191, EN_X_192, EN_X_193, EN_X_194, EN_X_195,
    EN_X_196, EN_X_197, EN_X_198, EN_X_199, EN_X_200, EN_X_201, EN_X_202,
    EN_X_203, EN_X_204, EN_X_205, EN_X_206, EN_X_207, EN_X_208, EN_X_209,
    EN_X_210, EN_X_211, EN_X_212, EN_X_213, EN_X_214, EN_X_215, EN_X_216,
    EN_X_217, EN_X_218, EN_X_219, EN_X_220, EN_X_221, EN_X_222, EN_X_223,
    EN_X_224, EN_X_225, EN_X_226, EN_X_227, EN_X_228, EN_X_229, EN_X_230,
    EN_X_231, EN_X_232, EN_X_233, EN_X_234, EN_X_235, EN_X_236, EN_X_237,
    EN_X_238, EN_X_239, EN_X_240, EN_X_241, EN_X_242, EN_X_243, EN_X_244,
    EN_X_245, EN_X_246, EN_X_247, EN_X_248, EN_X_249, EN_X_250, EN_X_251,
    EN_X_252, EN_X_253, EN_X_254, EN_X_255};

const char *giwscli::s_pdetails_en[256] = {
    EN_D_0,   EN_D_1,   EN_D_2,   EN_D_3,   EN_D_4,   EN_D_5,   EN_D_6,
    EN_D_7,   EN_D_8,   EN_D_9,   EN_D_10,  EN_D_11,  EN_D_12,  EN_D_13,
    EN_D_14,  EN_D_15,  EN_D_16,  EN_D_17,  EN_D_18,  EN_D_19,  EN_D_20,
    EN_D_21,  EN_D_22,  EN_D_23,  EN_D_24,  EN_D_25,  EN_D_26,  EN_D_27,
    EN_D_28,  EN_D_29,  EN_D_30,  EN_D_31,  EN_D_32,  EN_D_33,  EN_D_34,
    EN_D_35,  EN_D_36,  EN_D_37,  EN_D_38,  EN_D_39,  EN_D_40,  EN_D_41,
    EN_D_42,  EN_D_43,  EN_D_44,  EN_D_45,  EN_D_46,  EN_D_47,  EN_D_48,
    EN_D_49,  EN_D_50,  EN_D_51,  EN_D_52,  EN_D_53,  EN_D_54,  EN_D_55,
    EN_D_56,  EN_D_57,  EN_D_58,  EN_D_59,  EN_D_60,  EN_D_61,  EN_D_62,
    EN_D_63,  EN_D_64,  EN_D_65,  EN_D_66,  EN_D_67,  EN_D_68,  EN_D_69,
    EN_D_70,  EN_D_71,  EN_D_72,  EN_D_73,  EN_D_74,  EN_D_75,  EN_D_76,
    EN_D_77,  EN_D_78,  EN_D_79,  EN_D_80,  EN_D_81,  EN_D_82,  EN_D_83,
    EN_D_84,  EN_D_85,  EN_D_86,  EN_D_87,  EN_D_88,  EN_D_89,  EN_D_90,
    EN_D_91,  EN_D_92,  EN_D_93,  EN_D_94,  EN_D_95,  EN_D_96,  EN_D_97,
    EN_D_98,  EN_D_99,  EN_D_100, EN_D_101, EN_D_102, EN_D_103, EN_D_104,
    EN_D_105, EN_D_106, EN_D_107, EN_D_108, EN_D_109, EN_D_110, EN_D_111,
    EN_D_112, EN_D_113, EN_D_114, EN_D_115, EN_D_116, EN_D_117, EN_D_118,
    EN_D_119, EN_D_120, EN_D_121, EN_D_122, EN_D_123, EN_D_124, EN_D_125,
    EN_D_126, EN_D_127, EN_D_128, EN_D_129, EN_D_130, EN_D_131, EN_D_132,
    EN_D_133, EN_D_134, EN_D_135, EN_D_136, EN_D_137, EN_D_138, EN_D_139,
    EN_D_140, EN_D_141, EN_D_142, EN_D_143, EN_D_144, EN_D_145, EN_D_146,
    EN_D_147, EN_D_148, EN_D_149, EN_D_150, EN_D_151, EN_D_152, EN_D_153,
    EN_D_154, EN_D_155, EN_D_156, EN_D_157, EN_D_158, EN_D_159, EN_D_160,
    EN_D_161, EN_D_162, EN_D_163, EN_D_164, EN_D_165, EN_D_166, EN_D_167,
    EN_D_168, EN_D_169, EN_D_170, EN_D_171, EN_D_172, EN_D_173, EN_D_174,
    EN_D_175, EN_D_176, EN_D_177, EN_D_178, EN_D_179, EN_D_180, EN_D_181,
    EN_D_182, EN_D_183, EN_D_184, EN_D_185, EN_D_186, EN_D_187, EN_D_188,
    EN_D_189, EN_D_190, EN_D_191, EN_D_192, EN_D_193, EN_D_194, EN_D_195,
    EN_D_196, EN_D_197, EN_D_198, EN_D_199, EN_D_200, EN_D_201, EN_D_202,
    EN_D_203, EN_D_204, EN_D_205, EN_D_206, EN_D_207, EN_D_208, EN_D_209,
    EN_D_210, EN_D_211, EN_D_212, EN_D_213, EN_D_214, EN_D_215, EN_D_216,
    EN_D_217, EN_D_218, EN_D_219, EN_D_220, EN_D_221, EN_D_222, EN_D_223,
    EN_D_224, EN_D_225, EN_D_226, EN_D_227, EN_D_228, EN_D_229, EN_D_230,
    EN_D_231, EN_D_232, EN_D_233, EN_D_234, EN_D_235, EN_D_236, EN_D_237,
    EN_D_238, EN_D_239, EN_D_240, EN_D_241, EN_D_242, EN_D_243, EN_D_244,
    EN_D_245, EN_D_246, EN_D_247, EN_D_248, EN_D_249, EN_D_250, EN_D_251,
    EN_D_252, EN_D_253, EN_D_254, EN_D_255};

const char *giwscli::s_charbanner1_en[64] = {
    EN_CBI_0,  EN_CBI_1,  EN_CBI_2,  EN_CBI_3,  EN_CBI_4,  EN_CBI_5,  EN_CBI_6,
    EN_CBI_7,  EN_CBI_8,  EN_CBI_9,  EN_CBI_10, EN_CBI_11, EN_CBI_12, EN_CBI_13,
    EN_CBI_14, EN_CBI_15, EN_CBI_16, EN_CBI_17, EN_CBI_18, EN_CBI_19, EN_CBI_20,
    EN_CBI_21, EN_CBI_22, EN_CBI_23, EN_CBI_24, EN_CBI_25, EN_CBI_26, EN_CBI_27,
    EN_CBI_28, EN_CBI_29, EN_CBI_30, EN_CBI_31, EN_CBI_32, EN_CBI_33, EN_CBI_34,
    EN_CBI_35, EN_CBI_36, EN_CBI_37, EN_CBI_38, EN_CBI_39, EN_CBI_40, EN_CBI_41,
    EN_CBI_42, EN_CBI_43, EN_CBI_44, EN_CBI_45, EN_CBI_46, EN_CBI_47, EN_CBI_48,
    EN_CBI_49, EN_CBI_50, EN_CBI_51, EN_CBI_52, EN_CBI_53, EN_CBI_54, EN_CBI_55,
    EN_CBI_56, EN_CBI_57, EN_CBI_58, EN_CBI_59, EN_CBI_60, EN_CBI_61, EN_CBI_62,
    EN_CBI_63};

const char *giwscli::s_charbanner2_en[32] = {
    EN_CBII_0,  EN_CBII_1,  EN_CBII_2,  EN_CBII_3,  EN_CBII_4,  EN_CBII_5,
    EN_CBII_6,  EN_CBII_7,  EN_CBII_8,  EN_CBII_9,  EN_CBII_10, EN_CBII_11,
    EN_CBII_12, EN_CBII_13, EN_CBII_14, EN_CBII_15, EN_CBII_16, EN_CBII_17,
    EN_CBII_18, EN_CBII_19, EN_CBII_20, EN_CBII_21, EN_CBII_22, EN_CBII_23,
    EN_CBII_24, EN_CBII_25, EN_CBII_26, EN_CBII_27, EN_CBII_28, EN_CBII_29,
    EN_CBII_30, EN_CBII_31};

const char *giwscli::s_weaponbanner_en[64] = {
    EN_WB_0,  EN_WB_1,  EN_WB_2,  EN_WB_3,  EN_WB_4,  EN_WB_5,  EN_WB_6,
    EN_WB_7,  EN_WB_8,  EN_WB_9,  EN_WB_10, EN_WB_11, EN_WB_12, EN_WB_13,
    EN_WB_14, EN_WB_15, EN_WB_16, EN_WB_17, EN_WB_18, EN_WB_19, EN_WB_20,
    EN_WB_21, EN_WB_22, EN_WB_23, EN_WB_24, EN_WB_25, EN_WB_26, EN_WB_27,
    EN_WB_28, EN_WB_29, EN_WB_30, EN_WB_31, EN_WB_32, EN_WB_33, EN_WB_34,
    EN_WB_35, EN_WB_36, EN_WB_37, EN_WB_38, EN_WB_39, EN_WB_40, EN_WB_41,
    EN_WB_42, EN_WB_43, EN_WB_44, EN_WB_45, EN_WB_46, EN_WB_47, EN_WB_48,
    EN_WB_49, EN_WB_50, EN_WB_51, EN_WB_52, EN_WB_53, EN_WB_54, EN_WB_55,
    EN_WB_56, EN_WB_57, EN_WB_58, EN_WB_59, EN_WB_60, EN_WB_61, EN_WB_62,
    EN_WB_63};

const char *giwscli::s_permbanner_en[32] = {
    EN_PB_0,  EN_PB_1,  EN_PB_2,  EN_PB_3,  EN_PB_4,  EN_PB_5,  EN_PB_6,
    EN_PB_7,  EN_PB_8,  EN_PB_9,  EN_PB_10, EN_PB_11, EN_PB_12, EN_PB_13,
    EN_PB_14, EN_PB_15, EN_PB_16, EN_PB_17, EN_PB_18, EN_PB_19, EN_PB_20,
    EN_PB_21, EN_PB_22, EN_PB_23, EN_PB_24, EN_PB_25, EN_PB_26, EN_PB_27,
    EN_PB_28, EN_PB_29, EN_PB_30, EN_PB_31};

const char *giwscli::s_beginbanner_en[8] = {EN_BW_0, EN_BW_1, EN_BW_2, EN_BW_3,
                                            EN_BW_4, EN_BW_5, EN_BW_6, EN_BW_7};

const char *giwscli::s_version_en[32] = {
    EN_V_0,  EN_V_1,  EN_V_2,  EN_V_3,  EN_V_4,  EN_V_5,  EN_V_6,  EN_V_7,
    EN_V_8,  EN_V_9,  EN_V_10, EN_V_11, EN_V_12, EN_V_13, EN_V_14, EN_V_15,
    EN_V_16, EN_V_17, EN_V_18, EN_V_19, EN_V_20, EN_V_21, EN_V_22, EN_V_23,
    EN_V_24, EN_V_25, EN_V_26, EN_V_27, EN_V_28, EN_V_29, EN_V_30, EN_V_31};
#endif
void giwscli::ini_ams(size_t *in, size_t ins, const size_t *out) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = out[i];
  }
}  // for of the same size

void giwscli::set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                         const size_t *nup_four_cgm) {
  up_five = tempga3[sw];
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempga1[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 3, tempga2[sw]);
}

void giwscli::set_pool_2(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                         const size_t *nup_four_cgm) {
  up_five = tempgb3[sw];
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempgb1[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 3, tempgb2[sw]);
}

void giwscli::set_pool_3(const ptrdiff_t sw, size_t size_nup_four_c_p,
                         const size_t *nup_four_cgm) {
  ini_ams(up_five_g, 2, tempgc1[sw]);
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 5, tempgc2[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 5, tempgc3[sw]);
  ini_ams(five_check, 2, tempgc4[sw]);
}

void giwscli::pool_stair_1(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_1(chosen_event_p, 11, nup_four_cg1);
  } else if (chosen_event_p < 12) {
    set_pool_1(chosen_event_p, 13, nup_four_cg2);
  } else if (chosen_event_p < 14) {
    set_pool_1(chosen_event_p, 14, nup_four_cg3);
  } else if (chosen_event_p < 18) {
    set_pool_1(chosen_event_p, 15, nup_four_cg4);
  } else if (chosen_event_p < 20) {
    set_pool_1(chosen_event_p, 16, nup_four_cg5);
  } else if (chosen_event_p < 22) {
    set_pool_1(chosen_event_p, 17, nup_four_cg6);
  } else if (chosen_event_p < 24) {
    set_pool_1(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 26) {
    set_pool_1(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 32) {
    set_pool_1(chosen_event_p, 20, nup_four_cg9);
  } else if (chosen_event_p < 34) {
    set_pool_1(chosen_event_p, 21, nup_four_cg10);
  } else {
    error_code = 5;
  }
}

void giwscli::pool_stair_2(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 2) {
    set_pool_2(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 4) {
    set_pool_2(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 7) {
    set_pool_2(chosen_event_p, 20, nup_four_cg9);
  } else if (chosen_event_p < 8) {
    set_pool_2(chosen_event_p, 21, nup_four_cg10);
  } else {
    error_code = 5;
  }
}

void giwscli::pool_stair_3(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 5) {
    set_pool_3(chosen_event_p, 11, nup_four_cg1);
  } else if (chosen_event_p < 11) {
    set_pool_3(chosen_event_p, 13, nup_four_cg2);
  } else if (chosen_event_p < 13) {
    set_pool_3(chosen_event_p, 14, nup_four_cg3);
  } else if (chosen_event_p < 17) {
    set_pool_3(chosen_event_p, 15, nup_four_cg4);
  } else if (chosen_event_p < 19) {
    set_pool_3(chosen_event_p, 16, nup_four_cg5);
  } else if (chosen_event_p < 21) {
    set_pool_3(chosen_event_p, 17, nup_four_cg6);
  } else if (chosen_event_p < 23) {
    set_pool_3(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 25) {
    set_pool_3(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 31) {
    set_pool_3(chosen_event_p, 20, nup_four_cg9);
  } else if (chosen_event_p < 33) {
    set_pool_3(chosen_event_p, 21, nup_four_cg10);
  } else {
    error_code = 5;
  }
}

void giwscli::pool_stair_4(ptrdiff_t chosen_event_p) {
  switch (chosen_event_p) {
    case 1: {
      size_nup_four_c = 14;
      ini_ams(nup_four_c, 14, nup_four_cg31);
    } break;
    case 2: {
      size_nup_four_c = 16;
      ini_ams(nup_four_c, 16, nup_four_cg32);
    } break;
    case 3: {
      size_nup_four_c = 17;
      ini_ams(nup_four_c, 17, nup_four_cg33);
    } break;
    case 4: {
      size_nup_four_c = 18;
      ini_ams(nup_four_c, 18, nup_four_cg34);
    } break;
    case 5: {
      size_nup_four_c = 19;
      ini_ams(nup_four_c, 19, nup_four_cg35);
    } break;
    case 6: {
      size_nup_four_c = 20;
      ini_ams(nup_four_c, 20, nup_four_cg36);
    } break;
    case 7: {
      size_nup_four_c = 21;
      ini_ams(nup_four_c, 21, nup_four_cg37);
    } break;
    case 8: {
      size_nup_four_c = 22;
      ini_ams(nup_four_c, 22, nup_four_cg38);
    } break;
    case 9: {
      size_nup_four_c = 22;
      ini_ams(nup_four_c, 22, nup_four_cg39);
    } break;
    case 10: {
      size_nup_four_c = 23;
      ini_ams(nup_four_c, 23, nup_four_cg310);
    } break;
    case 11: {
      size_nup_four_c = 24;
      ini_ams(nup_four_c, 24, nup_four_cg311);
    } break;
    default: {
      error_code = 102;
    }
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

void giwscli::tri() {
  star = 3;
  kind = rspick(three_g, 13);
}  // 3-star kind settler for all banners

void giwscli::core_f_1() {
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
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
        kind = rspick(nup_five_c, 5);
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
        if (unmet4_c < 17 && unmet4_w < 17) {
          const ptrdiff_t weight1[2] = {255, 255};
          resultu = WRSpick(weight1, 2);
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
        } else if (unmet4_c > 16) {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_c - 16), 255};
          resultu = WRSpick(weight1, 2);
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
        } else {
          const ptrdiff_t weight1[2] = {255 + 2550 * (unmet4_w - 16), 255};
          resultu = WRSpick(weight1, 2);
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
}

void giwscli::core_f_3() {
  if (five_star_assurance_number < 63) {
    five_weight = 70;
  } else if (five_star_assurance_number < 74) {
    five_weight = 70 + 700 * (five_star_assurance_number - 62);
  } else {
    five_weight = 7770 + 350 * (five_star_assurance_number - 73);
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_pity_w[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (fate_weapon == 1 || fate_weapon == 2) {
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
        } else if (unmet4_c > 14) {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_c - 14), 300};
          resultu = WRSpick(weight2, 2);
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
        } else {
          const ptrdiff_t weight2[2] = {300 + 3000 * (unmet4_w - 14), 300};
          resultu = WRSpick(weight2, 2);
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
}

void giwscli::core_f_4() {
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_pity[five_star_assurance_number - 1]++;
      five_star_assurance_number = 0;
      if (unmet5_c < 147 && unmet5_w < 147) {
        const ptrdiff_t weight4[2] = {30, 30};
        resultu = WRSpick(weight4, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            five_count_c++;
            unmet5_c = 0;
            kind = rspick(nup_five_c, 5);
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
      } else if (unmet5_c > 146) {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_c - 146), 30};
        resultu = WRSpick(weight4, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            five_count_c++;
            unmet5_c = 0;
            kind = rspick(nup_five_c, 5);
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
      } else {
        const ptrdiff_t weight4[2] = {30 + 300 * (unmet5_w - 146), 30};
        resultu = WRSpick(weight4, 2);
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
            kind = rspick(nup_five_c, 5);
          } break;
          default: {
            error_code = 4;
          }
        }
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
      if (unmet4_c < 17 && unmet4_w < 17) {
        const ptrdiff_t weight3[2] = {255, 255};
        resultu = WRSpick(weight3, 2);
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
      } else if (unmet4_c > 16) {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_c - 16), 255};
        resultu = WRSpick(weight3, 2);
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
      } else {
        const ptrdiff_t weight3[2] = {255 + 2550 * (unmet4_w - 16), 255};
        resultu = WRSpick(weight3, 2);
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
      }
    } break;
    case 2:
      tri();
      break;
    default: {
      error_code = 3;
    }
  }
}

void giwscli::core_f_5() {
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
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
      ave_fives += five_star_assurance_number;
      if (five_star_assurance_number > max_fives) {
        max_fives = five_star_assurance_number;
        max_fivesth = five_count;
        max_fivecount = countx;
      }
      if (five_star_assurance_number < min_fives) {
        min_fives = five_star_assurance_number;
        min_fivesth = five_count;
        min_fivecount = countx;
      }
      five_star_assurance_number = 0;
      five_count_c++;
      kind = rspick(nup_five_c, 5);
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
}

void giwscli::post_add() {
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
  }
}

void giwscli::set_banner_f(ptrdiff_t chosen_banner_p,
                           ptrdiff_t chosen_event_p) {
  switch (chosen_banner_p) {
    case 1: {
      pool_stair_1(chosen_event_p);
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
      pool_stair_2(chosen_event_p);
      switch_e_sav = switch_e_should_be;
      switch_e_should_be = tempgb4[chosen_event_p];
    } break;
    case 3: {
      pool_stair_3(chosen_event_p);
    } break;
    case 4: {
      pool_stair_4(chosen_event_p);
    } break;
    case 5: {
      ini_ams(nup_four_c, 11, nup_four_cg1);
    } break;
    default: {
      error_code = 7;
    }
  }
}

void giwscli::gipull(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p) {
  const size_t tempt = static_cast<size_t>(generatorz());
  star = 0;  // 4-star or 5-star
  type = 0;  // Up or non-up, character or weapon
  kind = 0;  // which exactly
  giwscli::set_banner_f(chosen_banner_p, chosen_event_p);
  switch (chosen_banner_p) {
    case 1: {
      temp1 = tempt % 2;
      core_f_1();
    } break;
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
  post_add();
}

void giwscli::clear_all() {
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
  ave_fives = 0;
  max_fives = 1;
  if (chosen_banner == 3) {
    min_fives = 80;
  } else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
    min_fives = 90;
  } else if (chosen_banner == 5) {
    min_fives = PTRDIFF_MAX;
  } else {
    error_code = 7;
  }
  max_fivesth = 1;
  min_fivesth = 1;
  max_fivecount = 1;
  min_fivecount = 1;
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
}

void giwscli::hash_gen() {
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
}

int giwscli::hash_apply(const ptrdiff_t *sav_p) {
  if (((four_count > 0 || five_count > 0) && sav_p[1] == sav_p[3]) ||
      (chosen_banner == 4 && sav_p[4] != sav_p[1] && sav_p[5] != sav_p[1]) ||
      (sav_p[6] != sav_p[3] && sav_p[7] != sav_p[3]) ||
      (chosen_banner != 3 && sav_p[4] > 89 && sav_p[5] > 89) ||
      (chosen_banner == 3 && sav_p[4] > 79 && sav_p[5] > 79) ||
      (sav_p[8] > 2)) {
    return 2;
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

void giwscli::case_2c() {
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
}

void giwscli::case_2c_alt() {
  type = 2;
  four_count_c++;
  unmet4_c = 0;
  kind = rspick(nup_four_c, size_nup_four_c);
  four_star_guarantee_number = true;
}

void giwscli::case_3w() {
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
}

void giwscli::case_3w_alt() {
  type = 3;
  four_count_w++;
  unmet4_w = 0;
  kind = rspick(nup_four_w, size_nup_four_w);
  four_star_guarantee_number = true;
}

void giwscli::case_2w() {
  type = 2;
  four_count_w++;
  unmet4_w = 0;
  kind = rspick(nup_four_w, size_nup_four_w);
}

void giwscli::case_1c() {
  type = 1;
  four_count_c++;
  unmet4_c = 0;
  kind = rspick(nup_four_c, size_nup_four_c);
}
