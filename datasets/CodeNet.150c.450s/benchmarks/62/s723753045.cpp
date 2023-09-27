#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<b)
    {
      if(b<c)printf("%d %d %d\n",a,b,c);
    }
  if(a==b)
    {
      if(b==c)printf("%d %d %d\n",a,b,c);
    }
  if(b<a)
    {
      if(a<c)printf("%d %d %d\n",b,a,c);
      if(a==c)printf("%d %d %d\n",b,a,c);
    }
  if(c<a)
    {
      if(a==b)printf("%d %d %d\n",c,a,b);
      if(a<b)printf("%d %d %d\n",c,a,b);
    }
  if(b<c)
    {
      if(a==b)printf("%d %d %d\n",b,c,a);
      if(c<a)printf("%d %d %d\n",b,c,a);
    }
  if(a<c)
    {
      if(c==b)printf("%d %d %d\n",a,c,b);
      if(c<b)printf("%d %d %d\n",a,c,b);
    }
  if(a==c)
    {
      if(c<b)printf("%d %d %d\n",a,c,b);
    }
  if(c<b)
    {
      if(b<a)printf("%d %d %d\n",c,b,a);
    }
  if(c==b)
    {
      if(c<a)printf("%d %d %d\n",c,b,a);
    }
  return 0;
}