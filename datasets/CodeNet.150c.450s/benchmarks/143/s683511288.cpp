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
const int mod = 1e9 + 7;
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
int need[MAXN];
int main()
{
	int n,q;
	scanf("%d",&n);
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d",&a);
		ans+=a;
		need[a]++;
	}
	scanf("%d",&q);
	while(q--)
	{
		int b,c;
		scanf("%d %d",&b,&c);
		int x=c-b;
		ans+=(1ll*x*need[b]);
		need[c]+=need[b];
		need[b]=0;
		printf("%lld\n",ans);
	}
}