# libgiwscli
A library for Genshin Impact Wish Simulators written in C++\
Current version: 3.2

## Applications
(dead) CLI: https://github.com/Jirehlov/Genshin-Impact-Wish-Simulator-CLI \
(dead) Fileout: https://github.com/Jirehlov/Genshin-Impact-Wish-Simulator-Fileout

## Quick Start
Simply
```
#include "giwscli.h"
```
and you can use defined functions.

Example:\
100 pulls of Raiden Shogun's first re-run: 
```
#include <iostream>

#include "giwscli.h"

int main() {
  for (size_t i = 0; i < 100; i++) {
    giwscli::gipull(1, 27);
    std::cout << "rarity: " << giwscli::star
              << " item name: " << giwscli::s_pname_en[giwscli::kind]
              << std::endl;
  }
  return 0;
}
```

Notes:
1. Do not edit variables without permission of defined functions, otherwise the behavior is unexpected.
2. If you find encoding errors per your compiler and don't know how to fix, try not to include language headers.

## Supported banners

1 Ballad in Goblets_20200928-20201018 (Venti, Barbara, Fischl, Xiangling)\
2 Sparkling Steps_20201020-20201110 (Klee, Xingqiu, Noelle, Sucrose)\
3 Farewell of Snezhnaya_20201111-20201201 (Tartaglia, Diona, Beidou, Ningguang)\
4 Gentry of Hermitage_20201201-20201222 (Zhongli, Xinyan, Razor, Chongyun)\
5 Secretum Secretorum_20201223-20210112 (Albedo, Fischl, Sucrose, Bennett)\
6 drift in the Harbor_20210112-20210202 (Ganyu, Xiangling, Xingqiu, Noelle)\
7 Invitation to Mundane Life_20210203-20210217 (Xiao, Diona, Beidou, Xinyan)\
8 Dance of Lanterns_20210217-20210302 (Keqing, Ningguang, Bennett, Barbara)\
9 Moment of Bloom_20210302-20210316 (Hu Tao, Xingqiu, Xiangling, Chongyun)\
10 Ballad in Goblets_20210317-20210406 (Venti, Sucrose, Razor, Noelle)\
11 Farewell of Snezhnaya_20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)\
12 Gentry of Hermitage_20210428-20210518 (Zhongli, Yanfei, Noelle, Diona)\
13 Born of Ocean Swell_20210518-20210608 (Eula, Xinyan, Xingqiu, Beidou)\
14 Sparkling Steps_20210608-20210629 (Klee, Sucrose, Fischl, Barbara)\
15 Leaves in the Wind_20210629-20210720 (Kaedehara Kazuha, Rosaria, Bennett, Razor)\
16 The Heron's Court_20210721-20210810 (Kamisato Ayaka, Yanfei, Ningguang, Chongyun)\
17 Tapestry of Golden Flames_20210810-20210831 (Yoimiya, Sayu, Diona, Xinyan)\
18 Reign of Serenity_20210901-20210921 (Raiden Shogun, Kujou Sara, Xiangling, Sucrose)\
19 Drifting Luminescence_20210921-20211012 (Sangonomiya Kokomi, Rosaria, Beidou, Xingqiu)\
20 Farewell of Snezhnaya_20211013-20211102 (Tartaglia, Ningguang, Chongyun, Yanfei)\
21 Moment of Bloom_20211102-20211123 (Hu Tao, Thoma, Diona, Sayu)\
22 Secretum Secretorum_20211124-20211214 (Albedo, Rosaria, Noelle, Bennett)\
23 Oni's Royale_20211214-20220104 (Arataki Itto, Gorou, Xiangling, Barbara)\
24 The Transcendent One Returns_20220105-20220125 (Shenhe, Yun Jin, Ningguang, Chongyun)\
25 Gentry of Hermitage_20220125-20220215 (Zhongli, Yanfei, Xingqiu, Beidou)\
26 Everbloom Violet_20220216-20220308 (Yae Miko, Fischl, Diona, Thoma)\
27 Reign of Serenity_20220308-20220329 (Raiden Shogun, Bennett, Xinyan, Kujou Sara)\
28 Azure Excursion_20220330-20220419 (Kamisato Ayato, Yun Jin, Sucrose, Xiangling)\
29 The Heron's Court_20220419-20220531 (Kamisato Ayaka, Sayu, Razor, Rosaria)\
30 Discerner of Enigmas_20220531-20220621 (Yelan, Barbara, Yanfei, Noelle)\
31 vOni's Royale_20220621-20220712 (Arataki Itto, Kuki Shinobu, Chongyun, Gorou)\
32 Leaves in the Wind_20220713-20220802 (Kaedehara Kazuha, Shikanoin Heizou, Ningguang, Thoma)\
33 Tapestry of Golden Flames_20220802-20220823 (Yoimiya, Bennett, Xinyan, Yun Jin)\
34 Viridescent Vigil_20220824-20220909 (Tighnari, Collei, Diona, Fischl)\
35 Adrift in the Harbor_20220909-20220927 (Ganyu, Dori, Sucrose, Xingqiu)\
36 Twilight Arbiter_20220928-20221014 (Cyno, Candace, Kuki Shinobu, Sayu)\
37 Twirling Lotus_20221014-20221101 (Nilou, Beidou, Barbara, Xiangling)\
38 The Moongrass' Enlightenment_20221102-20221118 (Nahida, Razor, Noelle, Bennett)

1 Born of Ocean Swell_20211124-20211214 (Eula, Rosaria, Noelle, Bennett)\
2 Invitation to Mundane Life_20220105-20220125 (Xiao, Yun Jin, Ningguang, Chongyun)\
3 Adrift in the Harbor_20220125-20220215 (Ganyu, Yanfei, Xingqiu, Beidou)\
4 Drifting Luminescence_20220308-20220329 (Sangonomiya Kokomi, Bennett, Xinyan, Kujou Sara)\
5 Ballad in Goblets_20220330-20220419 (Venti, Yun Jin, Sucrose, Xiangling)\
6 Invitation to Mundane Life_20220531-20220621 (Xiao, Barbara, Yanfei, Noelle)\
7 Sparkling Steps_20220713-20220802 (Klee, Shikanoin Heizou, Ningguang, Thoma)\
8 Gentry of Hermitage_20220824-20220909 (Zhongli, Collei, Diona, Fischl)\
9 Drifting Luminescence_20220909-20220927 (Sangonomiya Kokomi, Dori, Sucrose, Xingqiu)\
10 Ballad in Goblets_20220928-20221014 (Venti, Candace, Kuki Shinobu, Sayu)\
11 Secretum Secretorum_20221014-20221101 (Albedo, Beidou, Barbara, Xiangling)\
12 Tapestry of Golden Flames_20221102-20221118 (Yoimiya, Razor, Noelle, Bennett)

1 Epitome Invocation_20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)\
2 Epitome Invocation_20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)\
3 Epitome Invocation_20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance, The Flute)\
4 Epitome Invocation_20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)\
5 Epitome Invocation_20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Sacrificial Fragments, The Stringless)\
6 Epitome Invocation_20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)\
7 Epitome Invocation_20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)\
8 Epitome Invocation_20210223-20210316 (Staff of Homa, Wolf's Gravestone, Lithic Blade, Lithic Spear, Sacrificial Bow, The Widsith, Lion's Roar)\
9 Epitome Invocation_20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)\
10 Epitome Invocation_20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)\
11 Epitome Invocation_20210428-20210518 (Summit Shaper, Memory of Dust, The Flute, Lithic Blade, Lithic Spear, Eye of Perception, Sacrificial Bow)\
12 Epitome Invocation_20210518-20210608 (Song of Broken Pines, Aquila Favonia, Sacrificial Sword, Rainslasher, Dragon's Bane, Sacrificial Fragments, Rust)\
13 Epitome Invocation_20210609-20210629 (Skyward Pride, Lost Prayer to the Sacred Winds, Mitternachts Waltz, Lion's Roar, The Bell, Favonius Lance, The Widsith)\
14 Epitome Invocation_20210629-20210720 (Freedom-Sworn, Skyward Atlas, The Alley Flash, Wine and Song, Alley Hunter, Favonius Greatsword, Dragon's Bane)\
15 Epitome Invocation_20210721-20210810 (Mistsplitter Reforged, Skyward Spine, The Stringless, Favonius Sword, Favonius Lance, Favonius Codex, Sacrificial Greatsword)\
16 Epitome Invocation_20210810-20210831 (Thundering Pulse, Skyward Blade, Favonius Warbow, Sacrificial Sword, Dragon's Bane, Rainslasher, Sacrificial Fragments)\
17 Epitome Invocation_20210901-20210921 (Engulfing Lightning, The Unforged, Sacrificial Bow, Lion's Roar, The Widsith, Favonius Lance, The Bell)\
18 Epitome Invocation_20210921-20211012 (Everlasting Moonglow, Primordial Jade Cutter, The Flute, Favonius Greatsword, Dragon's Bane, Favonius Codex, The Stringless)\
19 Epitome Invocation_20211013-20211102 (Polar Star, Memory of Dust, Akuoumaru, Favonius Sword, Favonius Lance, Eye of Perception, Rust)\
20 Epitome Invocation_20211102-20211123 (Staff of Homa, Elegy for the End, Wavebreaker's Fin, Mouun's Moon, Sacrificial Sword, Rainslasher, The Widsith)\
21 Epitome Invocation_20211124-20211214 (Freedom-Sworn, Song of Broken Pines, Alley Hunter, Lion's Roar, Dragon's Bane, Wine and Song, Sacrificial Greatsword)\
22 Epitome Invocation_20211214-20210104 (Redhorn Stonethresher, Skyward Harp, The Alley Flash, Mitternachts Waltz, Favonius Lance, Sacrificial Fragments, The Bell)\
23 Epitome Invocation_20220105-20220125 (Calamity Queller, Primordial Jade Winged-Spear, Lithic Spear, The Flute, Favonius Warbow, The Widsith, Favonius Greatsword)\
24 Epitome Invocation_20220125-20220215 (Vortex Vanquisher, Amos' Bow, Lithic Blade, Favonius Sword, Dragon's Bane, Favonius Codex, Sacrificial Bow)\
25 Epitome Invocation_20220216-20220308 (Kagura's Verity, Primordial Jade Cutter, Wavebreaker's Fin, The Stringless, Sacrificial Sword, Eye of Perception, Rainslasher)\
26 Epitome Invocation_20220308-20220329 (Engulfing Lightning, Everlasting Moonglow, Akuoumaru, Mouun's Moon, Lion's Roar, Favonius Lance, Sacrificial Fragments)\
27 Epitome Invocation_20220330-20220419 (Haran Tsukishiro Futsu, Elegy for the End, Rust, The Flute, The Widsith, Dragon's Bane, Sacrificial Greatsword)\
28 Epitome Invocation_20220419-20220531 (Mistsplitter Reforged, The Unforged, Favonius Warbow, Favonius Sword, Favonius Lance, Favonius Codex, The Bell)\
29 Epitome Invocation_20220531-20220621 (Aqua Simulacra, Primordial Jade Winged-Spear, Lithic Spear, Eye of Perception, Favonius Greatsword, Sacrificial Bow, Sacrificial Sword)\
30 Epitome Invocation_20220621-20220712 (Redhorn Stonethresher, Memory of Dust, Lithic Blade, Lion's Roar, Dragon's Bane, Sacrificial Fragments, The Stringless)\
31 Epitome Invocation_20220713-20220802 (Freedom-Sworn, Lost Prayer to the Sacred Winds, The Alley Flash, Mitternachts Waltz, Rainslasher, Favonius Lance, The Widsith)\
32 Epitome Invocation_20220802-20220823 (Thundering Pulse, Summit Shaper, Wine and Song, Alley Hunter, The Flute, Sacrificial Greatsword, Dragon's Bane)\
33 Epitome Invocation_20220824-20220909 (Hunter's Path, Vortex Vanquisher, Favonius Sword, The Bell, Favonius Lance, Favonius Codex, The Stringless)\
34 Epitome Invocation_20220909-20220927(Everlasting Moonglow, Amos' Bow, Sacrificial Sword, Favonius Greatsword, Dragon's Bane, Eye of Perception, Rust) \
35 Epitome Invocation_20220928-20221014 (Staff of the Scarlet Sands, Elegy for the End, Makhaira Aquamarine, Lion's Roar, Favonius Lance, Sacrificial Fragments, Favonius Warbow)\
36 Epitome Invocatio_20221014-20221101 (Key of Khaj-Nisut, Primordial Jade Cutter, Xiphos' Moonlight, Wandering Evenstar, Rainslasher, Dragon's Bane, Sacrificial Bow)\
37 Epitome Invocatio_20221102-20221118 (A Thousand Floating Dreams, Thundering Pulse, The Flute, Sacrificial Greatsword, Favonius Lance, The Widsith, Rust)

1 Wanderlust Invocation_20200928-20201222\
2 Wanderlust Invocation_20201223-20210427 (Added Diona and Xinyan)\
3 Wanderlust Invocation_20210428-20210608 (Added Rosaria)\
4 Wanderlust Invocation_20210609-20210901 (Added Yanfei)\
5 Wanderlust Invocation_20210901-20211012 (Added Sayu)\
6 Wanderlust Invocation_20211013-20211123 (Added Kujou Sara)\
7 Wanderlust Invocation_20211124-20220104 (Added Thoma)\
8 Wanderlust Invocation_20220105-20220215 (Added Gorou)\
9 Wanderlust Invocation_20220216-20220712 (Added Yun Jin)\
10 Wanderlust Invocation_20220713-20220823 (Added Kuki Shinobu)\
11 Wanderlust Invocation_20220824-20220927 (Added Shikanoin Heizou)\
12 Wanderlust Invocation_20220928-20221101 (Added Tighnari, Collei and Dori)\
13 Wanderlust Invocation_20221102-20221206 (Added Candace)\
14 Wanderlust Invocation_20221207- (Added Layla)

1 Beginners' Wish_20200928-

1 杯装之诗_20200928-20201018 (温迪, 芭芭拉, 菲谢尔, 香菱)\
2 闪焰的驻足_20201020-20201110 (可莉, 行秋, 诺艾尔, 砂糖)\
3 暂别冬都_20201111-20201201 (达达利亚, 迪奥娜, 北斗, 凝光)\
4 陵薮市朝_20201201-20201222 (钟离, 辛焱, 雷泽, 重云)\
5 深秘之息_20201223-20210112 (阿贝多, 菲谢尔, 砂糖, 班尼特)\
6 浮生孰来_20210112-20210202 (甘雨, 香菱, 行秋, 诺艾尔)\
7 烟火之邀_20210203-20210217 (魈, 迪奥娜, 北斗, 辛焱)\
8 鱼龙灯昼_20210217-20210302 (刻晴, 凝光, 班尼特, 芭芭拉)\
9 赤团开时_20210302-20210316 (胡桃, 行秋, 香菱, 重云)\
10 杯装之诗_20210317-20210406 (温迪, 砂糖, 雷泽, 诺艾尔)\
11 暂别冬都_20210406-20210427 (达达利亚, 罗莎莉亚, 芭芭拉, 菲谢尔)\
12 陵薮市朝_20210428-20210518 (钟离, 烟绯, 诺艾尔, 迪奥娜)\
13 浪涌之瞬_20210518-20210608 (优菈, 辛焱, 行秋, 北斗)\
14 闪焰的驻足_20210608-20210629 (可莉, 砂糖, 菲谢尔, 芭芭拉)\
15 叶落风随_20210629-20210720 (枫原万叶, 罗莎莉亚, 班尼特, 雷泽)\
16 白鹭之庭_20210721-20210810 (神里绫华, 烟绯, 凝光, 重云)\
17 焰色天河_20210810-20210831 (宵宫, 早柚, 迪奥娜, 辛焱)\
18 影寂天下人_20210901-20210921 (雷电将军, 九条裟罗, 香菱, 砂糖)\
19 浮岳虹珠_20210921-20211012 (珊瑚宫心海, 罗莎莉亚, 北斗, 行秋)\
20 暂别冬都_20211013-20211102 (达达利亚, 凝光, 重云, 烟绯)\
21 赤团开时_20211102-20211123 (胡桃, 托马, 迪奥娜, 早柚)\
22 深秘之息_20211124-20211214 (阿贝多, 罗莎莉亚, 诺艾尔, 班尼特)\
23 鬼门斗宴_20211214-20220104 (荒泷一斗, 五郎, 香菱, 芭芭拉)\
24 出尘入世_20220105-20220125 (申鹤, 云堇, 凝光, 重云)\
25 陵薮市朝_20220125-20220215 (钟离, 烟绯, 行秋, 北斗)\
26 华紫樱绯_20220216-20220308 (八重神子, 菲谢尔, 迪奥娜, 托马)\
27 影寂天下人_20220308-20220329 (雷电将军, 班尼特, 辛焱, 九条裟罗)\
28 苍流踏花_20220330-20220419 (神里绫人, 云堇, 砂糖, 香菱)\
29 白鹭之庭_20220419-20220531 (神里绫华, 早柚, 雷泽, 罗莎莉亚)\
30 素霓伣天_20220531-20220621 (夜兰, 芭芭拉, 烟绯, 诺艾尔)\
31 鬼门斗宴_20220621-20220712 (荒泷一斗, 久岐忍, 重云, 五郎)\
32 叶落风随_20220713-20220802 (枫原万叶, 鹿野院平藏, 凝光, 托马)\
33 焰色天河_20220802-20220823 (宵宫, 班尼特, 辛焱, 云堇)\
34 巡御蘙荟_20220824-20220909 (提纳里, 柯莱, 迪奥娜, 菲谢尔)\
35 浮生孰来_20220909-20220927 (甘雨, 多莉, 砂糖, 行秋)\
36 雳裁冥昭_20220928-20221014 (赛诺, 坎蒂丝, 久岐忍, 早柚)\
37 翩舞歈莲_20221014-20221101 (妮露, 北斗, 芭芭拉, 香菱)\
38 月草的赐慧_20221102-20221118 (纳西妲, 雷泽, 诺艾尔, 班尼特)

1 浪涌之瞬_20211124-20211214 (优菈, 罗莎莉亚, 诺艾尔, 班尼特)\
2 烟火之邀_20220105-20220125 (魈, 云堇, 凝光, 重云)\
3 浮生孰来_20220125-20220215 (甘雨, 烟绯, 行秋, 北斗)\
4 浮岳虹珠_20220308-20220329 (珊瑚宫心海, 班尼特, 辛焱, 九条裟罗)\
5 杯装之诗_20220330-20220419 (温迪, 云堇, 砂糖, 香菱)\
6 烟火之邀_20220531-20220621 (魈, 芭芭拉, 烟绯, 诺艾尔)\
7 闪焰的驻足_20220713-20220802 (可莉, 鹿野院平藏, 凝光, 托马)\
8 陵薮市朝_20220824-20220909 (钟离, 柯莱, 迪奥娜, 菲谢尔)\
9 浮岳虹珠_20220909-20220927 (珊瑚宫心海, 多莉, 砂糖, 行秋)\
10 杯装之诗_20220928-20221014 (温迪, 坎蒂丝, 久岐忍, 早柚)\
11 深秘之息_20221014-20221101 (阿贝多, 北斗, 芭芭拉, 香菱)\
12 焰色天河_20221102-20221118 (宵宫, 雷泽, 诺艾尔, 班尼特)

1 神铸赋形_20200928-20201018 (风鹰剑, 阿莫斯之弓, 笛剑, 钟剑, 流浪乐章, 绝弦, 西风长枪)\
2 神铸赋形_20201020-20201109 (四风原典, 狼的末路, 祭礼剑, 祭礼弓, 祭礼大剑, 祭礼残章, 匣里灭辰)\
3 神铸赋形_20201111-20201201 (尘世之锁, 天空之翼, 雨裁, 昭心, 弓藏, 西风长枪, 笛剑)\
4 神铸赋形_20201201-20201222 (贯虹之槊, 无工之剑, 匣里龙吟, 钟剑, 西风秘典, 西风猎弓, 匣里灭辰)\
5 神铸赋形_20201223-20210112 (斫峰之刃, 天空之卷, 西风剑, 西风大剑, 西风长枪, 祭礼残章, 绝弦)\
6 神铸赋形_20210112-20210202 (天空之傲, 阿莫斯之弓, 祭礼剑, 钟剑, 匣里灭辰, 昭心, 西风猎弓)\
7 神铸赋形_20210203-20210223 (磐岩结绿, 和璞鸢, 弓藏, 昭心, 西风长枪, 祭礼大剑, 笛剑)\
8 神铸赋形_20210223-20210316 (护摩之杖, 狼的末路, 千岩古剑, 千岩长枪, 祭礼弓, 流浪乐章, 匣里龙吟)\
9 神铸赋形_20210317-20210406 (终末嗟叹之诗, 天空之刃, 暗巷闪光, 暗巷的酒与诗, 西风大剑, 西风猎弓, 匣里灭辰)\
10 神铸赋形_20210406-20210427 (天空之翼, 四风原典, 暗巷猎手, 西风剑, 祭礼大剑, 西风秘典, 西风长枪)\
11 神铸赋形_20210428-20210518 (斫峰之刃, 尘世之锁, 笛剑, 千岩古剑, 千岩长枪, 昭心, 祭礼弓)\
12 神铸赋形_20210518-20210608 (松籁响起之时, 风鹰剑, 祭礼剑, 雨裁, 匣里灭辰, 祭礼残章, 弓藏)\
13 神铸赋形_20210609-20210629 (天空之傲, 四风原典, 幽夜华尔兹, 匣里龙吟, 钟剑, 西风长枪, 流浪乐章)\
14 神铸赋形_20210629-20210720 (苍古自由之誓, 天空之卷, 暗巷闪光, 暗巷的酒与诗, 暗巷猎手, 西风大剑, 匣里灭辰)\
15 神铸赋形_20210721-20210810 (雾切之回光, 天空之脊, 绝弦, 西风剑, 西风长枪, 西风秘典, 祭礼大剑)\
16 神铸赋形_20210810-20210831 (飞雷之弦振, 天空之刃, 西风猎弓, 祭礼剑, 匣里灭辰, 雨裁, 祭礼残章)\
17 神铸赋形_20210901-20210921 (薙草之稻光, 无工之剑, 祭礼弓, 匣里龙吟, 流浪乐章, 西风长枪, 钟剑)\
18 神铸赋形_20210921-20211012 (不灭月华, 磐岩结绿, 笛剑, 西风大剑, 匣里灭辰, 西风秘典, 绝弦)\
19 神铸赋形_20211013-20211102 (冬极白星, 尘世之锁, 恶玉丸, 西风剑, 西风长枪, 昭心, 弓藏)\
20 神铸赋形_20211102-20211123 (护摩之杖, 终末嗟叹之诗, 断浪长鳍, 曚云之月, 祭礼剑, 雨裁, 流浪乐章)\
21 神铸赋形_20211124-20211214 (苍古自由之誓, 松籁响起之时, 暗巷猎手, 匣里龙吟, 匣里灭辰, 暗巷的酒与诗, 祭礼大剑)\
22 神铸赋形_20211214-20210104 (赤角石溃杵, 天空之翼, 暗巷闪光, 幽夜华尔兹, 西风长枪, 祭礼残章, 钟剑)\
23 神铸赋形_20220105-20220125 (息灾, 和璞鸢, 千岩长枪, 笛剑, 西风猎弓, 流浪乐章, 西风大剑)\
24 神铸赋形_20220125-20220215 (贯虹之槊, 阿莫斯之弓, 千岩古剑, 西风剑, 匣里灭辰, 西风秘典, 祭礼弓)\
25 神铸赋形_20220216-20220308 (神乐之真意, 磐岩结绿, 断浪长鳍, 绝弦, 祭礼剑, 昭心, 雨裁)\
26 神铸赋形_20220308-20220329 (薙草之稻光, 不灭月华, 恶玉丸, 曚云之月, 匣里龙吟, 西风长枪, 祭礼残章)\
27 神铸赋形_20220330-20220419 (波乱月白经津, 终末嗟叹之诗, 弓藏, 笛剑, 流浪乐章, 匣里灭辰, 祭礼大剑)\
28 神铸赋形_20220419-20220531 (雾切之回光, 无工之剑, 西风猎弓, 西风剑, 西风长枪, 西风秘典, 钟剑)\
29 神铸赋形_20220531-20220621 (若水, 和璞鸢, 千岩长枪, 昭心, 西风大剑, 祭礼弓, 祭礼剑)\
30 神铸赋形_20220621-20220712 (赤角石溃杵, 尘世之锁, 千岩古剑, 匣里龙吟, 匣里灭辰, 祭礼残章, 绝弦)\
31 神铸赋形_20220713-20220802 (苍古自由之誓, 四风原典, 暗巷闪光, 幽夜华尔兹, 雨裁, 西风长枪, 流浪乐章)\
32 神铸赋形_20220802-20220823 (飞雷之弦振, 斫峰之刃, 暗巷的酒与诗, 暗巷猎手, 笛剑, 祭礼大剑, 匣里灭辰)\
33 神铸赋形_20220824-20220909 (猎人之径, 贯虹之槊, 西风剑, 钟剑, 西风长枪, 西风秘典, 绝弦)\
34 神铸赋形_20220909-20220927 (不灭月华, 阿莫斯之弓, 祭礼剑, 西风大剑, 匣里灭辰, 昭心, 弓藏)\
35 神铸赋形_20220928-20221014 (赤沙之杖, 终末嗟叹之诗, 玛海菈的水色, 匣里龙吟, 西风长枪, 祭礼残章, 西风猎弓)\
36 神铸赋形_20221014-20221101 (圣显之钥, 磐岩结绿, 西福斯的月光, 流浪的晚星, 雨裁, 匣里灭辰, 祭礼弓)\
37 神铸赋形_20221102-20221118 (千夜浮梦, 飞雷之弦振, 笛剑, 祭礼大剑, 西风长枪, 流浪乐章, 弓藏)

1 奔行世间_20200928-20201222\
2 奔行世间_20201223-20210427 (新增迪奥娜和辛焱)\
3 奔行世间_20210428-20210608 (新增罗莎莉亚)\
4 奔行世间_20210609-20210901 (新增烟绯)\
5 奔行世间_20210901-20211012 (新增早柚)\
6 奔行世间_20211013-20211123 (新增九条裟罗)\
7 奔行世间_20211124-20220104 (新增托马)\
8 奔行世间_20220105-20220215 (新增五郎)\
9 奔行世间_20220216-20220712 (新增云堇)\
10 奔行世间_20220713-20220823 (新增久岐忍)\
11 奔行世间_20220824-20220927 (新增鹿野院平藏)\
12 奔行世间_20220928-20221101 (新增提纳里, 柯莱和多莉)\
13 奔行世间_20221102-20221206 (新增坎蒂丝)\
14 奔行世间_20221207- (新增莱依拉)

1 初行者推荐祈愿_20200928-

1 杯に注がれた詩_20200928-20201018 (ウェンティ, バーバラ, フィッシュル, 香菱)\
2 フレアの止まり_20201020-20201110 (クレー, 行秋, ノエル, スクロース)\
3 冬国との別れ_20201111-20201201 (タルタリヤ, ディオナ, 北斗, 凝光)\
4 大隠朝市_20201201-20201222 (鍾離, 辛炎, レザー, 重雲)\
5 深秘の生息_20201223-20210112 (アルベド, フィッシュル, スクロース, ベネット)\
6 逸俗逡巡_20210112-20210202 (甘雨, 香菱, 行秋, ノエル)\
7 灯宴の招き_20210203-20210217 (魈, ディオナ, 北斗, 辛炎)\
8 魚龍灯昼_20210217-20210302 (刻晴, 凝光, ベネット, バーバラ)\
9 彼岸満開_20210302-20210316 (胡桃, 行秋, 香菱, 重雲)\
10 杯に注がれた詩_20210317-20210406 (ウェンティ, スクロース, レザー, ノエル)\
11 冬国との別れ_20210406-20210427 (タルタリヤ, ロサリア, バーバラ, フィッシュル)\
12 大隠朝市_20210428-20210518 (鍾離, 煙緋, ノエル, ディオナ)\
13 波折りの刹那_20210518-20210608 (エウルア, 辛炎, 行秋, 北斗)\
14 フレアの止まり_20210608-20210629 (クレー, スクロース, フィッシュル, バーバラ)\
15 辻風に舞う落葉_20210629-20210720 (楓原万葉, ロサリア, ベネット, レザー)\
16 白鷺の庭_20210721-20210810 (神里綾華, 煙緋, 凝光, 重雲)\
17 天の川に咲きし大輪_20210810-20210831 (宵宮, 早柚, ディオナ, 辛炎)\
18 影寂の天下人_20210901-20210921 (雷電将軍, 九条裟羅, 香菱, スクロース)\
19 海原に浮かぶ虹珠_20210921-20211012 (珊瑚宮心海, ロサリア, 北斗, 行秋)\
20 冬国との別れ_20211013-20211102 (タルタリヤ, 凝光, 重雲, 煙緋)\
21 彼岸満開_20211102-20211123 (胡桃, トーマ, ディオナ, 早柚)\
22 深秘の生息_20211124-20211214 (アルベド, ロサリア, ノエル, ベネット)\
23 鬼門闘宴_20211214-20220104 (荒瀧一斗, ゴロー, 香菱, バーバラ)\
24 塵世に戻りし一鶴_20220105-20220125 (申鶴, 雲菫, 凝光, 重雲)\
25 大隠朝市_20220125-20220215 (鍾離, 煙緋, 行秋, 北斗)\
26 華紫櫻緋_20220216-20220308 (八重神子, フィッシュル, ディオナ, トーマ)\
27 影寂の天下人_20220308-20220329 (雷電将軍, ベネット, 辛炎, 九条裟羅)\
28 花踏み歩む蒼流_20220330-20220419 (神里綾人, 雲菫, スクロース, 香菱)\
29 白鷺の庭_20220419-20220531 (神里綾華, 早柚, レザー, ロサリア)\
30 天を諜知せし白袖_20220531-20220621 (夜蘭, バーバラ, 煙緋, ノエル)\
31 鬼門闘宴_20220621-20220712 (荒瀧一斗, 久岐忍, 重雲, ゴロー)\
32 辻風に舞う落葉_20220713-20220802 (楓原万葉, 鹿野院平蔵, 凝光, トーマ)\
33 天の川に咲きし大輪_20220802-20220823 (宵宮, ベネット, 辛炎, 雲菫)\
34 深き森の巡回者_20220824-20220909 (ティナリ, コレイ, ディオナ, フィッシュル)\
35 逸俗逡巡_20220909-20220927 (甘雨, ドリー, スクロース, 行秋)\
36 冥昼の裁定_20220928-20221014 (セノ, キャンディス, 久岐忍, 早柚)\
37 優々たる蓮歌の舞_20221014-20221101 (ニィロウ, 北斗, バーバラ, 香菱)\
38 叡智を恵む月見草_20221102-20221118 (ナヒーダ, レザー, ノエル, ベネット)

1 波折りの刹那_20211124-20211214 (エウルア, ロサリア, ノエル, ベネット)\
2 灯宴の招き_20220105-20220125 (魈, 雲菫, 凝光, 重雲)\
3 逸俗逡巡_20220125-20220215 (甘雨, 煙緋, 行秋, 北斗)\
4 海原に浮かぶ虹珠_20220308-20220329 (珊瑚宮心海, ベネット, 辛炎, 九条裟羅)\
5 杯に注がれた詩_20220330-20220419 (ウェンティ, 雲菫, スクロース, 香菱)\
6 灯宴の招き_20220531-20220621 (魈, バーバラ, 煙緋, ノエル)\
7 フレアの止まり_20220713-20220802 (クレー, 鹿野院平蔵, 凝光, トーマ)\
8 大隠朝市_20220824-20220909 (鍾離, コレイ, ディオナ, フィッシュル)\
9 海原に浮かぶ虹珠_20220909-20220927 (珊瑚宮心海, ドリー, スクロース, 行秋)\
10 杯に注がれた詩_20220928-20221014 (ウェンティ, キャンディス, 久岐忍, 早柚)\
11 深秘の生息_20221014-20221101 (アルベド, 北斗, バーバラ, 香菱)\
12 天の川に咲きし大輪_20221102-20221118 (宵宮, レザー, ノエル, ベネット)

1 神鋳賦形_20200928-20201018 (風鷹剣, アモスの弓, 笛の剣, 鐘の剣, 流浪楽章, 絶弦, 西風長槍)\
2 神鋳賦形_20201020-20201109 (四風原典, 狼の末路, 祭礼の剣, 祭礼の弓, 祭礼の大剣, 祭礼の断片, 匣中滅龍)\
3 神鋳賦形_20201111-20201201 (浮世の錠, 天空の翼, 雨裁, 昭心, 弓蔵, 西風長槍, 笛の剣)\
4 神鋳賦形_20201201-20201222 (破天の槍, 無工の剣, 匣中龍吟, 鐘の剣, 西風秘典, 西風猟弓, 匣中滅龍)\
5 神鋳賦形_20201223-20210112 (斬山の刃, 天空の巻, 西風剣, 西風大剣, 西風長槍, 祭礼の断片, 絶弦)\
6 神鋳賦形_20210112-20210202 (天空の傲, アモスの弓, 祭礼の剣, 鐘の剣, 匣中滅龍, 昭心, 西風猟弓)\
7 神鋳賦形_20210203-20210223 (磐岩結緑 和璞鳶, 弓蔵, 昭心, 西風長槍, 祭礼の大剣, 笛の剣)\
8 神鋳賦形_20210223-20210316 (護摩の杖, 狼の末路, 千岩古剣, 千岩長槍, 祭礼の弓, 流浪楽章, 匣中龍吟)\
9 神鋳賦形_20210317-20210406 (終焉を嘆く詩, 天空の刃, ダークアレイの閃光, ダークアレイの酒と詩, 西風大剣, 西風猟弓, 匣中滅龍)\
10 神鋳賦形_20210406-20210427 (天空の翼, 四風原典, ダークアレイの狩人, 西風剣, 祭礼の大剣, 西風秘典, 西風長槍)\
11 神鋳賦形_20210428-20210518 (斬山の刃, 浮世の錠, 笛の剣, 千岩古剣, 千岩長槍, 昭心, 祭礼の弓)\
12 神鋳賦形_20210518-20210608 (松韻の響く頃, 風鷹剣, 祭礼の剣, 雨裁, 匣中滅龍, 祭礼の断片, 弓蔵)\
13 神鋳賦形_20210609-20210629 (天空の傲, 四風原典, 幽夜のワルツ, 匣中龍吟, 鐘の剣, 西風長槍, 流浪楽章)\
14 神鋳賦形_20210629-20210720 (蒼古なる自由への誓い, 天空の巻, ダークアレイの狩人, ダークアレイの酒と詩, ダークアレイの狩人, 西風大剣, 匣中滅龍)\
15 神鋳賦形_20210721-20210810 (霧切の廻光, 天空の脊, 絶弦, 西風剣, 西風長槍, 西風秘典, 祭礼の大剣)\
16 神鋳賦形_20210810-20210831 (飛雷の鳴弦, 天空の刃, 西風猟弓, 祭礼の剣, 匣中滅龍, 雨裁, 祭礼の断片)\
17 神鋳賦形_20210901-20210921 (草薙の稲光, 無工の剣, 祭礼の弓, 匣中龍吟, 流浪楽章, 西風長槍, 鐘の剣)\
18 神鋳賦形_20210921-20211012 (不滅の月華, 磐岩結緑 笛の剣, 西風大剣, 匣中滅龍, 西風秘典, 絶弦)\
19 神鋳賦形_20211013-20211102 (冬極の白星, 浮世の錠, 惡王丸, 西風剣, 西風長槍, 昭心, 弓蔵)\
20 神鋳賦形_20211102-20211123 (護摩の杖, 終焉を嘆く詩, 斬波のひれ長, 曚雲の月, 祭礼の剣, 雨裁, 流浪楽章)\
21 神鋳賦形_20211124-20211214 (蒼古なる自由への誓い, 松韻の響く頃, ダークアレイの狩人, 匣中龍吟, 匣中滅龍, ダークアレイの酒と詩, 祭礼の大剣)\
22 神鋳賦形_20211214-20210104 (赤角石塵滅砕, 天空の翼, ダークアレイの閃光, 幽夜のワルツ, 西風長槍, 祭礼の断片, 鐘の剣)\
23 神鋳賦形_20220105-20220125 (息災, 和璞鳶, 千岩長槍, 笛の剣, 西風猟弓, 流浪楽章, 西風大剣)\
24 神鋳賦形_20220125-20220215 (破天の槍, アモスの弓, 千岩古剣, 西風剣, 匣中滅龍, 西風秘典, 祭礼の弓)\
25 神鋳賦形_20220216-20220308 (神楽の真意, 磐岩結緑 斬波のひれ長, 絶弦, 祭礼の剣, 昭心, 雨裁)\
26 神鋳賦形_20220308-20220329 (草薙の稲光, 不滅の月華, 惡王丸, 曚雲の月, 匣中龍吟, 西風長槍, 祭礼の断片)\
27 神鋳賦形_20220330-20220419 (波乱月白経津, 終焉を嘆く詩, 弓蔵, 笛の剣, 流浪楽章, 匣中滅龍, 祭礼の大剣)\
28 神鋳賦形_20220419-20220531 (霧切の廻光, 無工の剣, 西風猟弓, 西風剣, 西風長槍, 西風秘典, 鐘の剣)\
29 神鋳賦形_20220531-20220621 (若水, 和璞鳶, 千岩長槍, 昭心, 西風大剣, 祭礼の弓, 祭礼の剣)\
30 神鋳賦形_20220621-20220712 (赤角石塵滅砕, 浮世の錠, 千岩古剣, 匣中龍吟, 匣中滅龍, 祭礼の断片, 絶弦)\
31 神鋳賦形_20220713-20220802 (蒼古なる自由への誓い, 四風原典, ダークアレイの閃光, 幽夜のワルツ, 雨裁, 西風長槍, 流浪楽章)\
32 神鋳賦形_20220802-20220823 (飛雷の鳴弦, 斬山の刃, ダークアレイの酒と詩, ダークアレイの狩人, 笛の剣, 祭礼の大剣, 匣中滅龍)\
33 神鋳賦形_20220824-20220909 (狩人の道, 破天の槍, 西風剣, 鐘の剣, 西風長槍, 西風秘典, 絶弦)\
34 神鋳賦形_20220909-20220927 (不滅の月華, アモスの弓, 祭礼の剣, 西風大剣, 匣中滅龍, 昭心, 弓蔵)\
35 神鋳賦形_20220928-20221014 (赤砂の杖, 終焉を嘆く詩, マカイラの水色, 匣中龍吟, 西風長槍, 祭礼の断片, 西風猟弓)\
36 神鋳賦形_20221014-20221101 (聖顕の鍵, 磐岩結緑, サイフォスの月明かり, 彷徨える星, 雨裁, 匣中滅龍, 祭礼の弓)\
37 神鋳賦形_20221102-20221118 (千夜に浮かぶ夢, 飛雷の鳴弦, 笛の剣, 祭礼の大剣, 西風長槍, 流浪楽章, 弓蔵)

1 奔走世間_20200928-20201222\
2 奔走世間_20201223-20210427 (ディオナと辛炎を追加)\
3 奔走世間_20210428-20210608 (ロサリアを追加)\
4 奔走世間_20210609-20210901 (煙緋を追加)\
5 奔走世間_20210901-20211012 (早柚を追加)\
6 奔走世間_20211013-20211123 (九条裟羅を追加)\
7 奔走世間_20211124-20220104 (トーマを追加)\
8 奔走世間_20220105-20220215 (ゴローを追加)\
9 奔走世間_20220216-20220712 (雲菫を追加)\
10 奔走世間_20220713-20220823 (久岐忍を追加)\
11 奔走世間_20220824-20220927 (鹿野院平蔵を追加)\
12 奔走世間_20220928-20221101 (ティナリとコレイとドリーを追加)\
13 奔走世間_20221102-20221206 (キャンディスを追加)\
14 奔走世間_20221207- (レイラを追加)

1 初心者応援祈願_20200928-

## Credits

[原神抽卡全机制总结](https://www.bilibili.com/read/cv10468091)\
[原神抽卡记录数据集](https://github.com/OneBST/GI_gacha_dataset)\
by [一棵平衡树](https://space.bilibili.com/6165300) aka [OneBST](https://github.com/OneBST)

[uzair-ashraf's simulator](https://github.com/uzair-ashraf/genshin-impact-wish-simulator)\
by [uzair-ashraf](https://github.com/uzair-ashraf/)

[Genshin Wishes](https://genshin-wishes.com)

[非小酋](https://feixiaoqiu.com)
