#include<stdio.h>
int main()
{
 int x,y;
 for(;;)
 {
  scanf("%d %d",&x,&y);
  if(x<y)
  {
   printf("%d %d\n",x,y);
  }
  else if(y<x)
  {
   printf("%d %d\n",y,x);
  }
  else if(x==y&&x!=0&&y!=0)
  {
   printf("%d %d\n",x,y);
  }
  else if(x==0&&y==0)
  {
   break;
  }
 }
 return 0;
}