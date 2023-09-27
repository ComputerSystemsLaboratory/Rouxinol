#include<stdio.h>
#include<string.h>

int GCD(int x,int y)
{
  if(y==0)
    return x;
  return GCD(y,x%y);
}

int LCM(int x,int y)
{
  int i;
  for(i=1;i<=y;i++)
    {
      if((x*i)%y == 0)
	return x*i;
    }
  return x*y;
}



int main(void)
{
  int a,b,k;
  while(scanf("%d %d",&a,&b) != EOF)
    {
      if(a<b){
	 k = b;
	b = a;
	a = k;
      }
      printf("%d %d\n",GCD(a,b),LCM(a,b));
    }
}