#include <stdio.h>
int main(void){
  int cards[4][13] = {};
  int n,i,c,s,r,k,l;
  char a,b;
  scanf("%d",&n);
  for (i = 0; i < n ;i++ ){
    scanf("%c",&a);
    scanf("%c %d",&b,&c);
    if(b == 'S'){
      s = 0;
    }else if(b == 'H'){
      s = 1;
    }else if(b == 'C'){
      s = 2;
    }else if(b == 'D'){
      s = 3;
    }
   r = c - 1;
   cards[s][r] = 1;
  }
  for (k = 0 ;k <= 3 ;k++){
      for (l = 0 ;l <= 12 ;l++){
        if (cards[k][l] == 0){
          if (k == 0){
            printf("S %d\n",l + 1);
          }else if (k == 1){
            printf("H %d\n",l + 1);
          }else if (k == 2){
            printf("C %d\n",l + 1);
          }else if (k == 3){
            printf("D %d\n",l + 1);
          }
        }
      }
    }
  return 0;
}

