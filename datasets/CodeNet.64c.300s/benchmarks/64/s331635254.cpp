#include<stdio.h>
int main()
{
  int x,y,r,num;
  scanf("%d %d",&x,&y);
  if(x<y){
    r=x;
    x=y;
    y=r;
  }
  while((num=x%y)!=0){
    x=y;
    y=num;
  }
  printf("%d\n",y);
  return 0;
}