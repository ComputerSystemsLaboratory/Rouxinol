#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int a, l;
  int i, j, k;
  int king, kingpoint, flag;
  int rank[10], past[30];
  char max[10], min[10];

  while(1){
    scanf("%d %d", &a, &l);
    if(a + l == 0){ break; }
    past[0] = a;
    for(i = 1;; ++i){
      // テ、ツクツ?ヲツ。ツ?」ツ?氾」ツ?ィテ」ツ?ォテ・ツ按?・ツ可イ
      for(j = 0; j < l; ++j){
	rank[j] = a%10;
	a /= 10;
      }

      // テヲツ。ツ?ヲツ閉ーテ・ツ按?ァツケツーテ」ツつ甘ィツソツ氾」ツ??
      for(j = 0; j < l; ++j){
	king = 0;
	// テヲツ慊?・ツ、ツァテ・ツ?、テ」ツつ津ヲツアツづ」ツつ?」ツつ?
	for(k = 0; k < l; ++k){
	  if(king < rank[k]){
	    king = rank[k];
	    kingpoint = k;
	  }
	}

	// テヲツ慊?・ツ、ツァテ・ツ?、テ」ツつ津ゥツ?ゥテ・ツ按?」ツ?ェテヲツ。ツ?」ツ?ォテ、ツサツ」テ・ツ?・
	max[j] = min[l - j - 1] = king + '0';
	rank[kingpoint] = 0;
      }
      // テァツオツづァツォツッテヲツ鳴?・ツュツ療」ツつ津、ツサツ」テ・ツ?・
      max[l] = min[l] = '\0';
      
      // テヲツ閉ーテ・ツ?、テ」ツ?ォテ・ツ、ツ嘉ヲツ渉?
      a = atoi(max) - atoi(min);

      flag = 0;
      for(j = 0; j < i; j++){
	if(past[j] == a){
	  // テ・ツ?コテ・ツ環?
	  printf("%d %d %d\n", j, a, i - j);
	  flag = 1;
	  break;
	}
      }
      past[i] = a;
      if(flag == 1){ break; }
    }
  }

  return 0;
}