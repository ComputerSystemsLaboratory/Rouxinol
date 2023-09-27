#include<stdio.h>
int main(){
  int x,j=1;
  while(1){
    scanf("%d",&x);
    if(x==0){
      break;
    }
    printf("Case %d: %d\n",j,x);
    j++;
  }
  return(0);
}