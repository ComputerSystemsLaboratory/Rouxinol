#include<stdio.h>
 
int main(void){
  int i,x;
 
  scanf("%d",&x);
  for(i=1;x!=0;i++){
    printf("Case %d: %d\n",i,x);
    scanf("%d",&x);
  }
  return 0;
}