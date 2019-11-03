#include <stdio.h>
#include <string.h>

#include "data.h"

struct buy_item{ int name; int count;};

struct item{
int name;
 union{
  int d[20];
  struct buy_item dep[10]; //last 0,0
 };
};


#undef X
#define X(name , ...) name,
enum E{ Y E_size};

#undef X
#define X(name , ...) #name,
char* etos[] = {Y};

#undef X
#define X(name, ...) { name, { __VA_ARGS__ }},
struct item deps[] = { Y };


int have[E_size]; 
int want[E_size]; 
#define has_deb(what) deps[what].d
 
 
/*callback*/
void (*Tcb)(int* list, struct buy_item* item, int lvl);
 
void Tcb_have_cal (int* list, struct buy_item* item, int lvl){
  if(have[item->name] > item->count) { 
	 have[item->name] -= item->count; 
	 item->count= 0; 
  }else{
	 item->count -= have[item->name]; 
	 have[item->name] = 0;
 }
}

void Tcb_print(int* list, struct buy_item* item, int lvl){
 while(lvl--) { fputs("\t",stdout); }
 printf("%s %d\n", etos[item->name], item->count);
}

/*Depth-first search*/
int T(int* list, struct buy_item item, int lvl){
 int tmp;
 Tcb(list,&item,lvl);
 if(!item.count) { return 0;}
 
 lvl++;
 list[item.name] += item.count ;
 struct buy_item* i = deps[item.name].dep;
 for(;i->count != 0; i++) { 
	 T(list,(struct buy_item){ i->name, i->count * item.count}, lvl);
 }
}

int main(int argc, const char *argv[])
{
#define H(name,c) have[name] = c;
HAVE

#define W(name,c) want[name] = c;
WANT

 int have_all[E_size];
 memcpy(have_all,have,E_size*4);

 int basic[E_size] = {};
 Tcb = Tcb_print;
 for(int i = 0; i < E_size; i++){
 	if(want[i]){ T(basic,(struct buy_item){ i, want[i]},0);}
 }
 //fix Mese_Crystal
 basic[Mese_Crystal] += basic[Mese_Crystal_Fragment]/9;
 puts("-------------------------------------------------------------------------------------------------------------------\n"); 
 
 int need[E_size] = {}; 
 Tcb = Tcb_have_cal;
 for(int i = 0; i < E_size; i++){
 	if(want[i]){ T(need,(struct buy_item){ i, want[i]},0);}
 }
 
 printf("%30s   \t%30s                    \t%30s\n\n","ALL Base Material:","Have (Use) Leftover:","You Need to Craft/Mine:");
 for(int i = 0 ; i < E_size; i++){
 	if(basic[i]){
	 printf(need[i]?"%30s %d\t%30s %4d (%5d) %4d\t%30s %d\n":"%30s %d\t%30s %4d (%5d) %4d\n",
			etos[i],basic[i],
		       	etos[i],have_all[i],have[i]-have_all[i],have[i], 
			etos[i],need[i]);
	}
 }
 return 0;
}
