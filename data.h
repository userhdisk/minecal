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
 H(Mithril_Block, 0)\
 H(Basic_Combination, 0)\
 H(Core, 0)\
 H(Advanced_Combination, 0)\
 H(Silver_Ingot, 37*9)\
 H(Diamond, 99 +94)\
 H(Mese_Crystal , 33 +99+30*9)\
 H(Basic_Component , 0)\
 H(Mithril_Ingot , 99 +25)\
 H(Mese_Block , 0)\
 H(Mese_Crystal_Fragment , 36)\
 H(Gold_Ingot , 13*9 + 58 + 59)\
 H(Iron_Ingot , 59 *9 +99+30)\
 H(Obsidian_Shard , 41*9)\
 H(Bronze_Ingot , 46 * 9 +47)\
 H(Cupper_Ingot , 10*9+19)\
 H(Tin_Ingot , 14*9 +18)\


//What items you want to craft
#define WANT \
 W(Teleporter, 1)\
 //W(Core, 2)\


