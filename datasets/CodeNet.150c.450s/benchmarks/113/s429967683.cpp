#include <stdio.h>
int main()
{
  int i,a;
  a=0;
  scanf("%d",&i);
  while(i!=0){
    a=a+1;
    printf("Case %d: %d\n",a,i);
    scanf("%d",&i);
  }
  return 0;
  }