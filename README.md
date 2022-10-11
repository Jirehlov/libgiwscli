# libgiwscli
A library for Genshin Impact Wish Simulators written in C++\
Current version: 3.1.3

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

Ballad in Goblets_20200928-20201018 (Venti, Barbara, Fischl, Xiangling)\
Sparkling Steps_20201020-20201110 (Klee, Xingqiu, Noelle, Sucrose)\
Farewell of Snezhnaya_20201111-20201201 (Tartaglia, Diona, Beidou, Ningguang)\
Gentry of Hermitage_20201201-20201222 (Zhongli, Xinyan, Razor, Chongyun)\
Secretum Secretorum_20201223-20210112 (Albedo, Fischl, Sucrose, Bennett)\
Adrift in the Harbor_20210112-20210202 (Ganyu, Xiangling, Xingqiu, Noelle)\
Invitation to Mundane Life_20210203-20210217 (Xiao, Diona, Beidou, Xinyan)\
Dance of Lanterns_20210217-20210302 (Keqing, Ningguang, Bennett, Barbara)\
Moment of Bloom_20210302-20210316 (Hu Tao, Xingqiu, Xiangling, Chongyun)\
Ballad in Goblets_20210317-20210406 (Venti, Sucrose, Razor, Noelle)\
Farewell of Snezhnaya_20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)\
Gentry of Hermitage_20210428-20210518 (Zhongli, Yanfei, Noelle, Diona)\
Born of Ocean Swell_20210518-20210608 (Eula, Xinyan, Xingqiu, Beidou)\
Sparkling Steps_20210608-20210629 (Klee, Sucrose, Fischl, Barbara)\
Leaves in the Wind_20210629-20210720 (Kaedehara Kazuha, Rosaria, Bennett, Razor)\
The Heron's Court_20210721-20210810 (Kamisato Ayaka, Yanfei, Ningguang, Chongyun)\
Tapestry of Golden Flames_20210810-20210831 (Yoimiya, Sayu, Diona, Xinyan)\
Reign of Serenity_20210901-20210921 (Raiden Shogun, Kujou Sara, Xiangling, Sucrose)\
Drifting Luminescence_20210921-20211012 (Sangonomiya Kokomi, Rosaria, Beidou, Xingqiu)\
Farewell of Snezhnaya_20211013-20211102 (Tartaglia, Ningguang, Chongyun, Yanfei)\
Moment of Bloom_20211102-20211123 (Hu Tao, Thoma, Diona, Sayu)\
Secretum Secretorum_20211124-20211214 (Albedo, Rosaria, Noelle, Bennett)\
Oni's Royale_20211214-20220104 (Arataki Itto, Gorou, Xiangling, Barbara)\
The Transcendent One Returns_20220105-20220125 (Shenhe, Yun Jin, Ningguang, Chongyun)\
Gentry of Hermitage_20220125-20220215 (Zhongli, Yanfei, Xingqiu, Beidou)\
Everbloom Violet_20220216-20220308 (Yae Miko, Fischl, Diona, Thoma)\
Reign of Serenity_20220308-20220329 (Raiden Shogun, Bennett, Xinyan, Kujou Sara)\
Azure Excursion_20220330-20220419 (Kamisato Ayato, Yun Jin, Sucrose, Xiangling)\
The Heron's Court_20220419-20220531 (Kamisato Ayaka, Sayu, Razor, Rosaria)\
Discerner of Enigmas_20220531-20220621 (Yelan, Barbara, Yanfei, Noelle)\
Oni's Royale_20220621-20220712 (Arataki Itto, Kuki Shinobu, Chongyun, Gorou)\
Leaves in the Wind_20220713-20220802 (Kaedehara Kazuha, Shikanoin Heizou, Ningguang, Thoma)\
Tapestry of Golden Flames_20220802-20220823 (Yoimiya, Bennett, Xinyan, Yun Jin)\
Viridescent Vigil_20220824-20220909 (Tighnari, Collei, Diona, Fischl)\
Adrift in the Harbor_20220909-20220927 (Ganyu, Dori, Sucrose, Xingqiu)\
Twilight Arbiter_20220928-20221014 (Cyno, Candace, Kuki Shinobu, Sayu)\
Twirling Lotus_20221014-20221101 (Nilou, Beidou, Barbara, Xiangling)

Born of Ocean Swell_20211124-20211214 (Eula, Rosaria, Noelle, Bennett)\
Invitation to Mundane Life_20220105-20220125 (Xiao, Yun Jin, Ningguang, Chongyun)\
Adrift in the Harbor_20220125-20220215 (Ganyu, Yanfei, Xingqiu, Beidou)\
Drifting Luminescence_20220308-20220329 (Sangonomiya Kokomi, Bennett, Xinyan, Kujou Sara)\
Ballad in Goblets_20220330-20220419 (Venti, Yun Jin, Sucrose, Xiangling)\
Invitation to Mundane Life_20220531-20220621 (Xiao, Barbara, Yanfei, Noelle)\
Sparkling Steps_20220713-20220802 (Klee, Shikanoin Heizou, Ningguang, Thoma)\
Gentry of Hermitage_20220824-20220909 (Zhongli, Collei, Diona, Fischl)\
Drifting Luminescence_20220909-20220927 (Sangonomiya Kokomi, Dori, Sucrose, Xingqiu)\
Ballad in Goblets_20220928-20221014 (Venti, Candace, Kuki Shinobu, Sayu)\
Secretum Secretorum_20221014-20221101 (Albedo, Beidou, Barbara, Xiangling)

Epitome Invocation_20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)\
Epitome Invocation_20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)\
Epitome Invocation_20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance, The Flute)\
Epitome Invocation_20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)\
Epitome Invocation_20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Sacrificial Fragments, The Stringless)\
Epitome Invocation_20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)\
Epitome Invocation_20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)\
Epitome Invocation_20210223-20210316 (Staff of Homa, Wolf's Gravestone, Lithic Blade, Lithic Spear, Sacrificial Bow, The Widsith, Lion's Roar)\
Epitome Invocation_20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)\
Epitome Invocation_20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)\
Epitome Invocation_20210428-20210518 (Summit Shaper, Memory of Dust, The Flute, Lithic Blade, Lithic Spear, Eye of Perception, Sacrificial Bow)\
Epitome Invocation_20210518-20210608 (Song of Broken Pines, Aquila Favonia, Sacrificial Sword, Rainslasher, Dragon's Bane, Sacrificial Fragments, Rust)\
Epitome Invocation_20210609-20210629 (Skyward Pride, Lost Prayer to the Sacred Winds, Mitternachts Waltz, Lion's Roar, The Bell, Favonius Lance, The Widsith)\
Epitome Invocation_20210629-20210720 (Freedom-Sworn, Skyward Atlas, The Alley Flash, Wine and Song, Alley Hunter, Favonius Greatsword, Dragon's Bane)\
Epitome Invocation_20210721-20210810 (Mistsplitter Reforged, Skyward Spine, The Stringless, Favonius Sword, Favonius Lance, Favonius Codex, Sacrificial Greatsword)\
Epitome Invocation_20210810-20210831 (Thundering Pulse, Skyward Blade, Favonius Warbow, Sacrificial Sword, Dragon's Bane, Rainslasher, Sacrificial Fragments)\
Epitome Invocation_20210901-20210921 (Engulfing Lightning, The Unforged, Sacrificial Bow, Lion's Roar, The Widsith, Favonius Lance, The Bell)\
Epitome Invocation_20210921-20211012 (Everlasting Moonglow, Primordial Jade Cutter, The Flute, Favonius Greatsword, Dragon's Bane, Favonius Codex, The Stringless)\
Epitome Invocation_20211013-20211102 (Polar Star, Memory of Dust, Akuoumaru, Favonius Sword, Favonius Lance, Eye of Perception, Rust)\
Epitome Invocation_20211102-20211123 (Staff of Homa, Elegy for the End, Wavebreaker's Fin, Mouun's Moon, Sacrificial Sword, Rainslasher, The Widsith)\
Epitome Invocation_20211124-20211214 (Freedom-Sworn, Song of Broken Pines, Alley Hunter, Lion's Roar, Dragon's Bane, Wine and Song, Sacrificial Greatsword)\
Epitome Invocation_20211214-20210104 (Redhorn Stonethresher, Skyward Harp, The Alley Flash, Mitternachts Waltz, Favonius Lance, Sacrificial Fragments, The Bell)\
Epitome Invocation_20220105-20220125 (Calamity Queller, Primordial Jade Winged-Spear, Lithic Spear, The Flute, Favonius Warbow, The Widsith, Favonius Greatsword)\
Epitome Invocation_20220125-20220215 (Vortex Vanquisher, Amos' Bow, Lithic Blade, Favonius Sword, Dragon's Bane, Favonius Codex, Sacrificial Bow)\
Epitome Invocation_20220216-20220308 (Kagura's Verity, Primordial Jade Cutter, Wavebreaker's Fin, The Stringless, Sacrificial Sword, Eye of Perception, Rainslasher)\
Epitome Invocation_20220308-20220329 (Engulfing Lightning, Everlasting Moonglow, Akuoumaru, Mouun's Moon, Lion's Roar, Favonius Lance, Sacrificial Fragments)\
Epitome Invocation_20220330-20220419 (Haran Tsukishiro Futsu, Elegy for the End, Rust, The Flute, The Widsith, Dragon's Bane, Sacrificial Greatsword)\
Epitome Invocation_20220419-20220531 (Mistsplitter Reforged, The Unforged, Favonius Warbow, Favonius Sword, Favonius Lance, Favonius Codex, The Bell)\
Epitome Invocation_20220531-20220621 (Aqua Simulacra, Primordial Jade Winged-Spear, Lithic Spear, Eye of Perception, Favonius Greatsword, Sacrificial Bow, Sacrificial Sword)\
Epitome Invocation_20220621-20220712 (Redhorn Stonethresher, Memory of Dust, Lithic Blade, Lion's Roar, Dragon's Bane, Sacrificial Fragments, The Stringless)\
Epitome Invocation_20220713-20220802 (Freedom-Sworn, Lost Prayer to the Sacred Winds, The Alley Flash, Mitternachts Waltz, Rainslasher, Favonius Lance, The Widsith)\
Epitome Invocation_20220802-20220823 (Thundering Pulse, Summit Shaper, Wine and Song, Alley Hunter, The Flute, Sacrificial Greatsword, Dragon's Bane)\
Epitome Invocation_20220824-20220909 (Hunter's Path, Vortex Vanquisher, Favonius Sword, The Bell, Favonius Lance, Favonius Codex, The Stringless)\
Epitome Invocation_20220909-20220927(Everlasting Moonglow, Amos' Bow, Sacrificial Sword, Favonius Greatsword, Dragon's Bane, Eye of Perception, Rust) \
Epitome Invocation_20220928-20221014 (Staff of the Scarlet Sands, Elegy for the End, Makhaira Aquamarine, Lion's Roar, Favonius Lance, Sacrificial Fragments, Favonius Warbow)\
Epitome Invocatio_20221014-20221101 (Key of Khaj-Nisut, Primordial Jade Cutter, Xiphos' Moonlight, Wandering Evenstar, Rainslasher, Dragon's Bane, Sacrificial Bow)

Wanderlust Invocation_20200928-20201222\
Wanderlust Invocation_20201223-20210427 (Added Diona and Xinyan)\
Wanderlust Invocation_20210428-20210608 (Added Rosaria)\
Wanderlust Invocation_20210609-20210901 (Added Yanfei)\
Wanderlust Invocation_20210901-20211012 (Added Sayu)\
Wanderlust Invocation_20211013-20211123 (Added Kujou Sara)\
Wanderlust Invocation_20211124-20220104 (Added Thoma)\
Wanderlust Invocation_20220105-20220215 (Added Gorou)\
Wanderlust Invocation_20220216-20220712 (Added Yun Jin)\
Wanderlust Invocation_20220713-20220823 (Added Kuki Shinobu)\
Wanderlust Invocation_20220824-20220927 (Added Shikanoin Heizou)\
Wanderlust Invocation_20220928-20221101 (Added Tighnari, Collei and Dori)\
Wanderlust Invocation_20221102-20221206 (Added Candace)\
Wanderlust Invocation_20221207- (Added Layla)

Beginners' Wish_20200928-


## Credits

[原神抽卡全机制总结](https://www.bilibili.com/read/cv10468091)\
[原神抽卡记录数据集](https://github.com/OneBST/GI_gacha_dataset)\
by [一棵平衡树](https://space.bilibili.com/6165300) aka [OneBST](https://github.com/OneBST)

[uzair-ashraf's simulator](https://github.com/uzair-ashraf/genshin-impact-wish-simulator)\
by [uzair-ashraf](https://github.com/uzair-ashraf/)

[Genshin Wishes](https://genshin-wishes.com)

[非小酋](https://feixiaoqiu.com)
