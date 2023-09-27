#include<stdio.h>

int main(){
  int a,b,c,d=0;
  scanf("%d %d %d",&a,&b,&c);
  for(;a<=b;a++){
    if(c % a == 0){
      d++;
    }   
  }
  printf("%d\n",d);
  return 0;
}