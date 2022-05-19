/*Version 2.6.7*/

#ifndef GIWSCLI_H
#define GIWSCLI_H 1
#include <cstddef>

#include "cn_item.h"
#include "en_item.h"
#include "random_gen.h"
#define MAX_ITEMS 118

namespace giwscli {
extern bool quit, is_noelle, five_star_guarantee_number,
    four_star_guarantee_number;
extern size_t kind, temp1, fate_points, up_five, size_nup_four_c, countx,
    five_count, five_count_c, five_count_w, four_count, four_count_c,
    four_count_w, max_fivesth, min_fivesth, max_fivecount, min_fivecount,
    size_nup_four_w, up_five_g[2], up_four_g[5], nup_four_c[32], five_check[2],
    four_check[5], pcount[128], four_pity[11], five_pity[90], five_pity_w[80];
extern const size_t nup_five_c[5], nup_five_w[10], nup_four_w[32], three_g[13],
    nup_four_cg1[11], nup_four_cg2[13], nup_four_cg3[14], nup_four_cg4[15],
    nup_four_cg5[16], nup_four_cg6[17], nup_four_cg7[18], nup_four_cg8[19],
    nup_four_cg9[20], tempga1[30][3], tempga2[30][3], tempga3[30],
    tempgb1[6][3], tempgb2[6][3], tempgb3[6], tempgc1[29][2], tempgc2[29][5],
    tempgc3[29][5], tempgc4[29][2], nup_four_cg31[14], nup_four_cg32[16],
    nup_four_cg33[17], nup_four_cg34[18], nup_four_cg35[19], nup_four_cg36[20],
    nup_four_cg37[21], nup_four_cg38[22], nup_four_cg39[23];
extern const ptrdiff_t tempga4[9], tempgb4[6];
extern unsigned int resultt, resultu, star, type;
extern ptrdiff_t chosen_event, chosen_banner, unmet4_c, unmet4_w, unmet5_c,
    unmet5_w, switch_e_should_be, switch_e_sav, four_star_assurance_number,
    five_star_assurance_number, max_fives, min_fives, five_weight, four_weight,
    three_weight, fate_weapon, ave_fives, hash_out[9];
extern signed int error_code;
#if CN_ITEM_H
extern const char *s_pname_cn[128], *s_pnameshort_cn[128], *s_pdetails_cn[128];
#endif
#if EN_ITEM_H
extern const char *s_pname_en[128], *s_pnameshort_en[128], *s_pdetails_en[128];
#endif

extern void ini_ams(size_t *in, size_t ins, const size_t *out);

extern void set_pool_1(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                       const size_t *nup_four_cgm);
extern void set_pool_2(const ptrdiff_t sw, const size_t size_nup_four_c_p,
                       const size_t *nup_four_cgm);
extern void set_pool_3(const ptrdiff_t sw, size_t size_nup_four_c_p,
                       const size_t *nup_four_cgm);
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
}  // namespace giwscli
#endif
