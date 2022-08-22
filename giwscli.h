/*Version 3.0*/

#ifndef GIWSCLI_H
#define GIWSCLI_H 1
#include <chrono>
#include <cstddef>
#include <random>

#include "cn_item.h"
#include "en_item.h"
#define MAX_ITEMS 128

namespace giwscli {
extern std::random_device seed_gen;
extern unsigned int seed_r;
extern unsigned long long int seed_t;
extern size_t seed;
extern std::mt19937_64 generatorz;
// random engine

extern bool quit, is_noelle, five_star_guarantee_number,
    four_star_guarantee_number;
extern size_t kind, temp1, fate_points, up_five, size_nup_five_c,
    size_nup_four_c, countx, five_count, five_count_c, five_count_w, four_count,
    four_count_c, four_count_w, max_fivesth, min_fivesth, max_fivecount,
    min_fivecount, size_nup_four_w, up_five_g[2], up_four_g[5], nup_five_c[8],
    nup_four_c[32], five_check[2], four_check[5], pcount[256], four_pity[11],
    five_pity[90], five_pity_w[80];
extern const size_t nup_five_c1[5], nup_five_c2[6], nup_five_w[10],
    nup_four_w[32], three_g[13], nup_four_cg1[11], nup_four_cg2[13],
    nup_four_cg3[14], nup_four_cg4[15], nup_four_cg5[16], nup_four_cg6[17],
    nup_four_cg7[18], nup_four_cg8[19], nup_four_cg9[20], nup_four_cg10[21],
    nup_four_cg11[22], nup_four_cg12[23], tempga1[35][3], tempga2[35][3],
    tempga3[35], tempgb1[9][3], tempgb2[9][3], tempgb3[9], tempgc1[34][2],
    tempgc2[34][5], tempgc3[34][5], tempgc4[34][2], nup_four_cg31[14],
    nup_four_cg32[16], nup_four_cg33[17], nup_four_cg34[18], nup_four_cg35[19],
    nup_four_cg36[20], nup_four_cg37[21], nup_four_cg38[22], nup_four_cg39[23],
    nup_four_cg310[24], nup_four_cg311[25], nup_four_cg312[26],
    four_stars_c[26], four_stars_w[27], five_stars_c[25], five_stars_w[30];
extern const ptrdiff_t tempga4[14], tempgb4[9];
extern unsigned int resultt, resultu, star, type;
extern ptrdiff_t chosen_event, chosen_banner, unmet4_c, unmet4_w, unmet5_c,
    unmet5_w, switch_e_should_be, switch_e_sav, four_star_assurance_number,
    five_star_assurance_number, max_fives, min_fives, five_weight, four_weight,
    three_weight, fate_weapon, ave_fives, hash_out[9];
extern signed int error_code;
#if CN_ITEM_H
extern const char *s_pname_cn[256], *s_pnameshort_cn[256], *s_pdetails_cn[256],
    *s_charbanner1_cn[64], *s_charbanner2_cn[32], *s_weaponbanner_cn[64],
    *s_permbanner_cn[32], *s_beginbanner_cn[8], *s_version_cn[32];
#endif
#if EN_ITEM_H
extern const char *s_pname_en[256], *s_pnameshort_en[256], *s_pdetails_en[256],
    *s_charbanner1_en[64], *s_charbanner2_en[32], *s_weaponbanner_en[64],
    *s_permbanner_en[32], *s_beginbanner_en[8], *s_version_en[32];
#endif

extern void ini_ams(size_t *in, size_t ins, const size_t *out);

extern void set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                       const size_t size_nup_five_c_p,
                       const size_t *nup_four_cgm, const size_t *nup_five_cgm);
extern void set_pool_2(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                       const size_t size_nup_five_c_p,
                       const size_t *nup_four_cgm, const size_t *nup_five_cgm);
extern void set_pool_3(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                       const size_t size_nup_five_c_p,
                       const size_t *nup_four_cgm, const size_t *nup_five_cgm);
extern void pool_stair_1(ptrdiff_t chosen_banner_p);
extern void pool_stair_2(ptrdiff_t chosen_banner_p);
extern void pool_stair_3(ptrdiff_t chosen_banner_p);
extern void pool_stair_4(ptrdiff_t chosen_banner_p);
extern size_t rspick(const size_t *kindx, size_t sizekind);
extern unsigned int WRSpick(const ptrdiff_t *weightx, size_t nom);
extern void tri();
extern void core_f_1();
extern void core_f_3();
extern void core_f_4();
extern void core_f_5();
extern void post_add();
extern void set_banner_f(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p);
extern void gipull(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p);
extern void clear_all();
extern void hash_gen();
extern int hash_apply(const ptrdiff_t *sav_p);
extern int set_fw(const unsigned int fw);
extern void case_2c();
extern void case_2c_alt();
extern void case_3w();
extern void case_3w_alt();
extern void case_2w();
extern void case_1c();
}  // namespace giwscli
#endif
