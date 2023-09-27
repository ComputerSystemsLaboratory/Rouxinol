

#include <stdio.h>
#include <string.h>
 
int main(void){
 
  char card[201];
  char f;
  int i, ii, iii, m, h, a, o;
 
  for(o = 0; o > -1; o++){
    scanf("%s", card);
    if(card[0] == '-') return 0;
    a = strlen(card) -1;
    scanf("%d", &m);
    for(i = 0; i < m; i++){
      scanf("%d", &h);
      for(ii = 0; ii < h; ii++){
    f = card[0];
    for(iii = 0; iii < a; iii++){
      card[iii] = card[iii+1];
    }
    card[a] = f;
      }
    }
    printf("%s\n", card);
  }
}
 

 