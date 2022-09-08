/*Version 3.0.1*/

#include "cn_item.h"
#include "en_item.h"
#include "jp.item.h"

namespace giwscli {

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
#if JP_ITEM_H
extern const char *s_pname_jp[256], *s_pnameshort_jp[256], *s_pdetails_jp[256],
    *s_charbanner1_jp[64], *s_charbanner2_jp[32], *s_weaponbanner_jp[64],
    *s_permbanner_jp[32], *s_beginbanner_jp[8], *s_version_jp[32];
#endif
}  // namespace giwscli
