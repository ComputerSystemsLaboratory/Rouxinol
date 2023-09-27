#include<stdio.h>
int solve (int d)
 {
		 int ans = 0;
		 int i=d;
		 while(i<600)
         {
             ans+=d*i*i;
             i=i+d;
         }
		 return ans;
 }
int main()
{
    int d;
    while(scanf("%d",&d)==1)
    {
        printf("%d\n",solve(d));
    }
    return 0;
}