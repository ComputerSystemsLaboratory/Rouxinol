#include <stdio.h>

int main(){
  int i0[] = {500,100,50,10,5,1};
  int i1 = 1,i2 = 0;
  int i4[5] = {0};

  for(int j = 0; j < 6; j++){
    i2 = 0;
    scanf("%d",&i1);
    
    if(i1 == 0){   
      for(int n : i4) if(n != 0) printf("%d\n",n);
      return 0;
    }
    
    i1 = 1000 - i1;

    for(int n = 0; n < 6; n++){
      while(i1 >= i0[n]){
        i1 -= i0[n];
        i2++;
      }
    }
    i4[j] = i2;    
  }
  return -1;
}