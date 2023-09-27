#include <stdio.h>

int main(){
  int i1[28]={};
  int i2[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
   
  for(int i = 0; i < 28; i++) scanf("%d",&i1[i]);

  for(int i:i1) for(int j:i2) if(i == j) i2[j-1] = 0;

  for(int i:i2) if(i) printf("%d\n",i);
}