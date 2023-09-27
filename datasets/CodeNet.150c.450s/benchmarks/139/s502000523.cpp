#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
#include<queue>
#include<map>
#include<vector>
#include<cmath>
#include<fstream>
#include <set>
//freopen(".in","r",stdin);
//freopen(".out","w",stdout);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
const int  MAXN =1e5+10;
const long long  mod = 1e14 ;
const long long INF = 0x7f7f7f7f7f7f7f7f;
const int inf= 0x3f3f3f3f;
#define eps 1e-8
#define PI 3.1415926535898
#define lowbit(x) (x&(-x))
using namespace std ;
//getline(cin,s);
//set<ll>::iterator it;
//map<int,int>::iterator it;
typedef long long ll;
typedef unsigned long long ull;
//unordered_map<int,int>mp;
//int need[MAXN];
//map<int,int>mp;
//TLE了 可能思路：每个数*一个数的形式 判断所得的num 然后与n比较 
//这道题注意点：O() 在数据范围小的情况下 尽量开普通数组 然后 是unordered_map（查找快，无序） 最后是map
//自己老是习惯开map 然后tle 不知所措 
int dist[MAXN];
vector<int>ve[MAXN];
int vis[MAXN];
int sign[MAXN];
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++) dist[i]=inf;
	while(k--)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		ve[x].push_back(y);
		ve[y].push_back(x);
	}
	queue<int> q;
	dist[1]=0;
	q.push(1);vis[1]=1;
	while(q.size())
	{
		int now=q.front();
		q.pop();vis[now]=0;
		for(int i=0;i<ve[now].size();i++)
		{
			int ne=ve[now][i];
			if(dist[ne]>dist[now]+1)
			{
				dist[ne]=dist[now]+1;
				sign[ne]=now;
				if(!vis[ne])
				{
					vis[ne]=1;
					q.push(ne);
				}
			}
		} 
	}
	for(int i=2;i<=n;i++) 
	{
	    if(dist[i]==inf)
	    {
	    	printf("No\n");
	    	return 0;
		} 
	} 
	printf("Yes\n");
	for(int i=2;i<=n;i++) printf("%d\n",sign[i]);
	return 0;	
} 