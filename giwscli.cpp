/*Version 2.6.0*/

#include "giwscli.h"

bool giwscli::quit = true;
bool giwscli::is_noelle = true;
bool giwscli::five_star_guarantee_number = false;
bool giwscli::four_star_guarantee_number = false;
bool giwscli::ach[12] = {false, false, false, false, false, false,
                         false, false, false, false, false, false};
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
size_t giwscli::kind_r_ach_11 = 0;
size_t giwscli::kind_r_ach_8 = 0;
size_t giwscli::up_five_g[2] = {0};
size_t giwscli::up_four_g[5] = {0};
size_t giwscli::nup_four_c[32] = {0};
size_t giwscli::five_check[2] = {MAX_ITEMS, MAX_ITEMS};
size_t giwscli::four_check[5] = {MAX_ITEMS, MAX_ITEMS, MAX_ITEMS, MAX_ITEMS,
                                 MAX_ITEMS};
size_t giwscli::pcount[128] = {0};
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
const size_t giwscli::tempga1[30][3] = {
    {0, 0, 0},      // 0
    {22, 26, 30},   // 1
    {17, 20, 24},   // 2
    {18, 23, 25},   // 3
    {16, 19, 28},   // 4
    {17, 21, 22},   // 5
    {22, 24, 26},   // 6
    {16, 18, 25},   // 7
    {21, 23, 30},   // 8
    {19, 24, 26},   // 9
    {17, 20, 28},   // 10
    {15, 22, 30},   // 11
    {71, 20, 18},   // 12
    {16, 24, 25},   // 13
    {17, 22, 30},   // 14
    {15, 21, 28},   // 15
    {71, 23, 19},   // 16
    {91, 16, 18},   // 17
    {95, 17, 26},   // 18
    {15, 24, 25},   // 19
    {23, 19, 71},   // 20
    {100, 18, 91},  // 21
    {15, 20, 21},   // 22
    {26, 30, 106},  // 23
    {19, 23, 108},  // 24
    {24, 25, 71},   // 25
    {18, 22, 100},  // 26
    {16, 21, 95},   // 27
    {16, 21, 95},   // 28
    {16, 21, 95}    // 29
};
const size_t giwscli::tempga2[30][3] = {
    {0, 0, 0},      // 0
    {22, 26, 30},   // 1
    {17, 20, 24},   // 2
    {0, 23, 25},    // 3
    {0, 19, 28},    // 4
    {17, 21, 22},   // 5
    {22, 24, 26},   // 6
    {16, 18, 25},   // 7
    {21, 23, 30},   // 8
    {19, 24, 26},   // 9
    {17, 20, 28},   // 10
    {0, 22, 30},    // 11
    {71, 20, 18},   // 12
    {16, 24, 25},   // 13
    {17, 22, 30},   // 14
    {15, 21, 28},   // 15
    {71, 23, 19},   // 16
    {0, 16, 18},    // 17
    {0, 17, 26},    // 18
    {15, 24, 25},   // 19
    {23, 19, 71},   // 20
    {0, 18, 91},    // 21
    {15, 20, 21},   // 22
    {26, 30, 0},    // 23
    {19, 23, 0},    // 24
    {24, 25, 71},   // 25
    {18, 22, 100},  // 26
    {16, 21, 95},   // 27
    {16, 21, 95},   // 28
    {16, 21, 95}    // 29
};
const size_t giwscli::tempga3[30] = {
    MAX_ITEMS, 63, 64, 65, 66, 67, 68, 69, 0,   70,  63, 65, 66, 72,  64,
    86,        89, 90, 96, 94, 65, 70, 67, 105, 109, 66, 99, 96, 111, 89};

const size_t giwscli::tempgb1[6][3] = {
    {0, 0, 0},      // 0
    {15, 20, 21},   // 1
    {19, 23, 108},  // 2
    {24, 25, 71},   // 3
    {16, 21, 95},   // 4
    {16, 21, 95},   // 5
};
const size_t giwscli::tempgb2[6][3] = {
    {0, 0, 0},     // 0
    {15, 20, 21},  // 1
    {19, 23, 0},   // 2
    {24, 25, 71},  // 3
    {16, 21, 95},  // 4
    {16, 21, 95},  // 5
};
const size_t giwscli::tempgb3[6] = {MAX_ITEMS, 72, 69, 68, 94, 63};

const size_t giwscli::tempgc1[28][2] = {
    {0, 0},     // 0
    {5, 14},    // 1
    {7, 11},    // 2
    {6, 73},    // 3
    {74, 75},   // 4
    {8, 76},    // 5
    {5, 12},    // 6
    {9, 77},    // 7
    {11, 78},   // 8
    {13, 81},   // 9
    {6, 7},     // 10
    {73, 76},   // 11
    {14, 85},   // 12
    {7, 12},    // 13
    {87, 8},    // 14
    {92, 10},   // 15
    {93, 13},   // 16
    {97, 75},   // 17
    {98, 77},   // 18
    {101, 73},  // 19
    {78, 81},   // 20
    {85, 87},   // 21
    {107, 6},   // 22
    {110, 9},   // 23
    {74, 5},    // 24
    {112, 77},  // 25
    {97, 98},   // 26
    {113, 81}   // 27
};
const size_t giwscli::tempgc2[28][5] = {
    {0, 0, 0, 0, 0},         // 0
    {34, 38, 40, 44, 48},    // 1
    {33, 37, 41, 43, 49},    // 2
    {32, 36, 40, 42, 48},    // 3
    {35, 39, 41, 44, 46},    // 4
    {34, 37, 40, 45, 49},    // 5
    {35, 36, 41, 44, 47},    // 6
    {32, 36, 40, 43, 48},    // 7
    {33, 38, 46, 79, 80},    // 8
    {35, 41, 45, 82, 83},    // 9
    {39, 40, 43, 49, 84},    // 10
    {33, 36, 48, 79, 80},    // 11
    {32, 37, 41, 42, 47},    // 12
    {88, 46, 44, 40, 38},    // 13
    {82, 83, 84, 45, 41},    // 14
    {34, 39, 40, 43, 49},    // 15
    {35, 37, 41, 42, 47},    // 16
    {33, 38, 40, 44, 46},    // 17
    {34, 39, 41, 45, 48},    // 18
    {32, 36, 40, 49, 104},   // 19
    {38, 42, 47, 102, 103},  // 20
    {41, 43, 46, 83, 84},    // 21
    {37, 40, 44, 82, 88},    // 22
    {35, 38, 45, 48, 80},    // 23
    {33, 39, 41, 49, 79},    // 24
    {34, 36, 42, 47, 103},   // 25
    {37, 40, 46, 102, 104},  // 26
    {37, 40, 46, 102, 104}   // 27
};
const size_t giwscli::tempgc3[28][5] = {
    {0, 0, 0, 0, 0},       // 0
    {34, 38, 40, 44, 48},  // 1
    {33, 37, 41, 43, 49},  // 2
    {32, 36, 40, 42, 48},  // 3
    {35, 39, 41, 44, 46},  // 4
    {34, 37, 40, 45, 49},  // 5
    {35, 36, 41, 44, 47},  // 6
    {32, 36, 40, 43, 48},  // 7
    {33, 38, 46, 0, 0},    // 8
    {35, 41, 45, 0, 0},    // 9
    {39, 40, 43, 49, 0},   // 10
    {33, 36, 48, 0, 0},    // 11
    {32, 37, 41, 42, 47},  // 12
    {0, 46, 44, 40, 38},   // 13
    {0, 0, 0, 45, 41},     // 14
    {34, 39, 40, 43, 49},  // 15
    {35, 37, 41, 42, 47},  // 16
    {33, 38, 40, 44, 46},  // 17
    {34, 39, 41, 45, 48},  // 18
    {32, 36, 40, 49, 0},   // 19
    {38, 42, 47, 0, 0},    // 20
    {41, 43, 46, 0, 0},    // 21
    {37, 40, 44, 0, 0},    // 22
    {35, 38, 45, 48, 0},   // 23
    {33, 39, 41, 49, 0},   // 24
    {34, 36, 42, 47, 0},   // 25
    {37, 40, 46, 0, 0},    // 26
    {37, 40, 46, 0, 0}     // 27
};
const size_t giwscli::tempgc4[28][2] = {
    {0, 0},   // 0
    {5, 14},  // 1
    {7, 11},  // 2
    {6, 0},   // 3
    {0, 0},   // 4
    {8, 0},   // 5
    {5, 12},  // 6
    {9, 0},   // 7
    {11, 0},  // 8
    {13, 0},  // 9
    {6, 7},   // 10
    {0, 0},   // 11
    {14, 0},  // 12
    {7, 12},  // 13
    {0, 8},   // 14
    {0, 10},  // 15
    {0, 13},  // 16
    {0, 0},   // 17
    {0, 0},   // 18
    {0, 0},   // 19
    {0, 0},   // 20
    {0, 0},   // 21
    {0, 6},   // 22
    {0, 9},   // 23
    {0, 5},   // 24
    {0, 0},   // 25
    {0, 0},   // 26
    {0, 0}    // 27
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
const ptrdiff_t giwscli::tempga4[9] = {0, 1, 0, 2, 3, 0, 4, 5, 0};
const ptrdiff_t giwscli::tempgb4[6] = {0, 22, 24, 25, 27, 28};
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
ptrdiff_t giwscli::ach_count[12] = {0};
signed int giwscli::error_code = 0;
#if CN_ITEM_H
const char* giwscli::s_pname_cn[128] = {
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
    CN_C_126, CN_C_127};

const char* giwscli::s_pnameshort_cn[128] = {
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
    CN_X_126, CN_X_127};

const char* giwscli::s_pdetails_cn[128] = {
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
    CN_D_126, CN_D_127};
#endif
#if EN_ITEM_H
const char* giwscli::s_pname_en[128] = {
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
    EN_C_126, EN_C_127};

const char* giwscli::s_pnameshort_en[128] = {
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
    EN_X_126, EN_X_127};

const char* giwscli::s_pdetails_en[128] = {
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
    EN_D_126, EN_D_127};
#endif
void giwscli::ini_ams(size_t* in, size_t ins, const size_t* out) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = out[i];
  }
}  // for of the same size

void giwscli::set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                         const size_t* nup_four_cgm) {
  up_five = tempga3[sw];
  size_nup_four_c = size_nup_four_c_p;
  ini_ams(up_four_g, 3, tempga1[sw]);
  ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
  ini_ams(four_check, 3, tempga2[sw]);
}

void giwscli::set_pool_3(const ptrdiff_t sw, size_t size_nup_four_c_p,
                         const size_t* nup_four_cgm) {
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
  } else if (chosen_event_p < 30) {
    set_pool_1(chosen_event_p, 20, nup_four_cg9);
  } else {
    error_code = 5;
  }
}

void giwscli::pool_stair_2(ptrdiff_t chosen_event_p) {
  if (chosen_event_p > 0 && chosen_event_p < 2) {
    set_pool_3(chosen_event_p, 18, nup_four_cg7);
  } else if (chosen_event_p < 4) {
    set_pool_3(chosen_event_p, 19, nup_four_cg8);
  } else if (chosen_event_p < 6) {
    set_pool_3(chosen_event_p, 20, nup_four_cg9);
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
  } else if (chosen_event_p < 28) {
    set_pool_3(chosen_event_p, 20, nup_four_cg9);
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
      ini_ams(nup_four_c, 23, nup_four_cg39);
    } break;
    default: {
      error_code = 102;
    }
  }
}
size_t giwscli::rspick(const size_t* kindx, size_t sizekind) {
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

unsigned int giwscli::WRSpick(const ptrdiff_t* weightx, size_t nom) {
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
  if (ach_count[8] < 7) {
    if (kind_r_ach_8 != kind) {
      kind_r_ach_8 = kind;
      ach_count[8] = 0;
    } else {
      ach_count[8]++;
    }
  }
}  // 3-star kind settler for all banners

void giwscli::mpcheck() {
  if (countx == 2 || countx == 6 || countx == 30 || countx == 126 ||
      countx == 8190 || countx == 131070 || countx == 524286 ||
      countx == 2147483646 || countx == 2305843009213693950) {
    ach[7] = true;
  }
  if (countx == 20192977) {
    ach[9] = true;
  }
  if (countx == 157087284) {
    ach[10] = true;
  }
}

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
      mpcheck();
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
        if (!five_star_guarantee_number) {
          ach_count[0] = 0;
          ach_count[1]++;
        }
        five_star_guarantee_number = false;
      } else {
        type = 2;
        five_count_c++;
        kind = rspick(nup_five_c, 5);
        if (kind == five_check[0]) {
          five_star_guarantee_number = false;
          ach_count[0] = 0;
          ach_count[1]++;
        } else {
          five_star_guarantee_number = true;
          ach_count[0]++;
          ach_count[1] = 0;
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
        ach[2] = true;
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
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
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
            } break;
            case 1: {
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
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
              type = 3;
              four_count_w++;
              unmet4_w = 0;
              kind = rspick(nup_four_w, size_nup_four_w);
              four_star_guarantee_number = true;
            } break;
            case 1: {
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
            } break;
            default: {
              error_code = 4;
            }
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
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
      mpcheck();
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
          ach_count[4]++;
          ach_count[5] = 0;
        } else if (five_star_guarantee_number || temp1 < 3) {
          type = 1;
          five_count_w++;
          kind = rspick(up_five_g, 2);
          if (kind == up_five_g[fate_weapon - 1]) {
            fate_points = 0;
            ach_count[4] = 0;
            if (!five_star_guarantee_number) {
              ach_count[5]++;
            }
          } else {
            fate_points++;
            ach_count[5] = 0;
          }
          five_star_guarantee_number = false;
        } else {
          type = 2;
          five_count_w++;
          kind = rspick(nup_five_w, 10);
          if (kind == up_five_g[fate_weapon - 1]) {
            fate_points = 0;
            ach_count[4] = 0;
            ach_count[5]++;
          } else {
            fate_points++;
            ach_count[5] = 0;
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
        ach[2] = true;
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
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            case 1: {
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
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            case 1: {
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
            } break;
            case 1: {
              type = 2;
              four_count_c++;
              unmet4_c = 0;
              kind = rspick(nup_four_c, size_nup_four_c);
              four_star_guarantee_number = true;
            } break;
            default: {
              error_code = 4;
            }
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
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
      mpcheck();
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
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      if (unmet4_c < 17 && unmet4_w < 17) {
        const ptrdiff_t weight3[2] = {255, 255};
        resultu = WRSpick(weight3, 2);
        switch (resultu) {
          case 0: {
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          case 1: {
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
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
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          case 1: {
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
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
            type = 2;
            four_count_w++;
            unmet4_w = 0;
            kind = rspick(nup_four_w, size_nup_four_w);
          } break;
          case 1: {
            type = 1;
            four_count_c++;
            unmet4_c = 0;
            kind = rspick(nup_four_c, size_nup_four_c);
          } break;
          default: {
            error_code = 4;
          }
        }
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
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
    if (ach_count[11] < 7) {
      if (kind_r_ach_11 != kind) {
        kind_r_ach_11 = kind;
        ach_count[11] = 0;
      } else {
        ach_count[11]++;
      }
    }
  } else if (four_star_assurance_number < 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
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
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } else
      tri();
  } else if (four_star_assurance_number == 9) {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
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
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    } else
      tri();
  } else {
    if (temp1 < 6) {
      star = 5;
      five_count++;
      mpcheck();
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
      if (four_star_assurance_number > 11) {
        ach[2] = true;
      }
      four_star_assurance_number = 0;
      four_count_c++;
      kind = rspick(nup_four_c, 11);
      if (kind == 20) {
        is_noelle = false;
      }
      if (ach_count[11] < 7) {
        if (kind_r_ach_11 != kind) {
          kind_r_ach_11 = kind;
          ach_count[11] = 0;
        } else {
          ach_count[11]++;
        }
      }
    }
  }
}

void giwscli::post_add() {
  countx++;
  five_star_assurance_number++;
  four_star_assurance_number++;
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
