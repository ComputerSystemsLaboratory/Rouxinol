#include <stdio.h>

int dp[16];
bool u[16][16];

int main()
{
while(1)
{
 int a,b;
 scanf("%d%d",&a,&b);
if(a == 0)
{
break;
}
 for(int i = 0; i < b; i++)
 {
  for(int ii = 0; ii < a; ii++)
  {
   u[i][ii] = true;
  }
 }
 int n;
 scanf("%d",&n);
 for(int i = 0; i < n; i++)
 {
  int x,y;
  scanf("%d%d",&x,&y);
  u[y - 1][x - 1] = false;
 }
 for(int i = 0; i < a; i++)
 {
  dp[i] = 0;
 }
 dp[0] = 1;
 for(int i = 0; i < b; i++)
 {
  int now = 0;
  for(int ii = 0; ii < a; ii++)
  {
   if(u[i][ii])
   {
    now += dp[ii];
    dp[ii] = now;
   }
   else
   {
    dp[ii] = 0;
    now = 0;
   }
  }
 }
 printf("%d\n",dp[a - 1]);
}
 return 0;
}