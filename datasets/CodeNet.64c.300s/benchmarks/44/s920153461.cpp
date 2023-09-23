/*
* Desciption:  Desciption
* Created:    2016-02-21
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<memory.h>
using namespace std;
const int maxn=15,INF=100000;
int dp[maxn][maxn];
int n,t,a,b,c,temp,ans,ai;
int main()
{
	while (scanf("%d",&t)&&t)
	{
		n=0;
		for (int i = 0; i < maxn; i += 1)fill(dp[i],dp[i]+maxn,INF);
		for (int i = 0; i < maxn; i += 1)dp[i][i]=0;
		for (int i = 0; i < t; i += 1)
		{
			scanf("%d",&a);
			scanf("%d",&b);
			scanf("%d",&c);
			dp[a][b]=dp[b][a]=c;
			if(a>n)n=a;
			if(b>n)n=b;
		}
		ans=INF;
		for (int k = 0; k <= n; k += 1)
		{
			for (int i = 0; i <= n; i += 1)
			{
				for (int j = 0; j <= n; j += 1)
				{
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
				}
			}
		}
		ans=INF;
		for (int i = 0; i <= n; i += 1)
		{
			temp=0;
			for (int j = 0; j <= n; j += 1)
			{
				if(i==j)continue;
				temp+=dp[i][j];
			}
			if(temp<ans){
				ai=i;
				ans=temp;
			}
		}
		printf("%d %d\n",ai,ans);
		
	}
	return 0;
}