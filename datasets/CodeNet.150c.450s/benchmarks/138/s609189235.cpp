#include<stdio.h>
int main(){
  int x,y,r=1;
  int v;
  scanf("%d%d",&x,&y);
  if(y>x){
    v=x;
    x=y;
    y=v;
  }
  while(r!=0){
    r=x%y;
    x=y;
    if(r!=0){
    y=r;
    }
  }
  printf("%d\n",y);
  return 0;
}