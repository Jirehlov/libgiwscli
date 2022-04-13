# libgiwscli
A library for Genshin Impact Wish Simulators written in C++\
Current version: 2.6.7

## Applications
CLI: https://github.com/Jirehlov/Genshin-Impact-Wish-Simulator-CLI \
Fileout: https://github.com/Jirehlov/Genshin-Impact-Wish-Simulator-Fileout

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

## Credits

[原神抽卡全机制总结](https://www.bilibili.com/read/cv10468091)\
[原神抽卡记录数据集](https://github.com/OneBST/GI_gacha_dataset)\
by [一棵平衡树](https://space.bilibili.com/6165300) aka [OneBST](https://github.com/OneBST)

[uzair-ashraf's simulator](https://github.com/uzair-ashraf/genshin-impact-wish-simulator)\
by [uzair-ashraf](https://github.com/uzair-ashraf/)

[Genshin Wishes](https://genshin-wishes.com)

[非小酋](https://feixiaoqiu.com)
