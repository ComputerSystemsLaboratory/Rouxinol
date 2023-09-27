#include<stdio.h>
 
int main(void){
  int a,b,c,cnt=0;
 
  scanf("%d%d%d",&a,&b,&c);
  for(;a<=b;a++){
    cnt+=c%a?0:1;
  }
  printf("%d\n",cnt);
  return 0;
}