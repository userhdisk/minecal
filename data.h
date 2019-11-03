//items and dependency tabel
#define Y \
 /*X(<ITEM NAME>, <DEP 1>,<DEP 1 AMOUNT>, <DEP 2>,<DEP 2 AMOUNT>, ...  )*/\
 X(Teleporter,	Advanced_Component,2, Mithril_Block,1, Basic_Combination,2 ,Core,1 , Mese_Crystal,2, Advanced_Combination,1)\
 X(Advanced_Component, Silver_Ingot,2, Diamond,1, Mese_Crystal,2, Basic_Component,4)\
 X(Mithril_Block, Mithril_Ingot,9)\
 X(Basic_Combination, Basic_Component,5)\
 X(Core, Advanced_Combination,6, Mithril_Ingot,1, Mese_Block,1)\
 X(Advanced_Combination, Advanced_Component,5, Basic_Combination,4)\
 X(Basic_Locator, Advanced_Component,1, Basic_Component,5 , Silver_Ingot,1)\
 X(Basic_Component, Mese_Crystal_Fragment,2, Gold_Ingot,1, Iron_Ingot,2, Obsidian_Shard,2, Bronze_Ingot,2 )\
 X(Mese_Block, Mese_Crystal,9)\
 X(Bronze_Ingot, Cupper_Ingot,2, Tin_Ingot,1)\
 X(Mese_Crystal_Fragment)\
 X(Mese_Crystal)\
 X(Mithril_Ingot)\
 X(Diamond)\
 X(Silver_Ingot)\
 X(Gold_Ingot)\
 X(Iron_Ingot)\
 X(Obsidian_Shard)\
 X(Cupper_Ingot)\
 X(Tin_Ingot)\


// List here what items you have
#define HAVE \
 H(Advanced_Component, 0)\
 H(Mithril_Block, 1)\
 H(Basic_Combination, 0)\
 H(Core, 0)\
 H(Advanced_Combination, 1)\
 H(Silver_Ingot, 35 +32 +13 + 22*9)\
 H(Diamond, 99 +6 +81)\
 H(Mese_Crystal , 28*2 +99+31*9)\
 H(Basic_Component , 32*6 + 25)\
 H(Mithril_Ingot , 33 +71)\
 H(Mese_Block , 0)\
 H(Mese_Crystal_Fragment , 30 + 36 *9)\
 H(Gold_Ingot , 36*9)\
 H(Iron_Ingot , 59 *9 +35)\
 H(Obsidian_Shard , 70 * 9 + 13)\
 H(Bronze_Ingot , 64 * 9 +8)\
 H(Cupper_Ingot , 47)\
 H(Tin_Ingot , 87 +34)\


//What items you want to craft
#define WANT \
 W(Teleporter, 1)\
 //W(Core, 2)\


