/*
* Filename:    aoj0525.cpp
* Desciption:  Desciption
* Created:     2016-03-10
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<bitset>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#define INT_MAX 1<<30
using namespace std;
typedef long long ll;
const int INF=0x7F;
int n,m,ans;
bitset<10000> bits[10];
int check(){
	int ct=0,rec=0;
	for (int i = 0; i < m; i += 1)
	{
		ct=0;
		for (int j = 0; j < n; j += 1)
		{
			if(bits[j][i]==1)ct++;
		}
		ct=max(ct,n-ct);
		rec+=ct;
	}
	return rec;
}
void dfs(int k){
	if (k==n)
	{
		ans=max(ans,check());
		return;
	}
	for (int i = 0; i < 2; i += 1)
	{
		bits[k].flip();
		dfs(k+1);
	}
}
int main()
{
//ios_base::sync_with_stdio(0);
#ifdef JIngwei_Xu
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
#endif
	while (scanf("%d%d",&n,&m)&&n&&m)
	{
		int t;
		ans=0;
		for (int i = 0; i < n; i += 1)
		{
			for (int j = 0; j < m; j += 1)
			{
				scanf("%d",&t);
				bits[i][j]=t;
			}
		}
		dfs(0);
		printf("%d\n",ans);
	}
	return 0;
}