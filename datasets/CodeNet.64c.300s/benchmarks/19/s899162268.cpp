#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

int n;
int list[10000],dp[10000];
int hasil;

int main()
{
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		hasil=-1000000;
		dp[0]=0;
		for(int a=1;a<=n;a++)
		{
			scanf("%d",&list[a]);
		}
		for(int a=1;a<=n;a++)
		{
			if(dp[a-1]>=0)
			{
				dp[a]=dp[a-1]+list[a];
			}
			else
			{
				dp[a]=list[a];
			}
			hasil=max(hasil,dp[a]);
		}
		/*for(int a=0;a<=n;a++)
		{
			printf("%d ",dp[a]);
		}*/
		printf("%d\n",hasil);
	}
	return 0;
}