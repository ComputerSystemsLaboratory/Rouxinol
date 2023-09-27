//#include<bits/stdc++.h>
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
const int  MAXN =2e5+10;
const int mod = 1e14 ;
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
ll a[MAXN];
int main()
{
	int n,k;
	ll ans=1,ans1=0,pre=1,pre1=0;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++) 
	{
	    scanf("%lld",&a[i]);
	} 
	for(int i=k+1;i<=n;i++)
	{
		if(a[i]>a[i-k]) printf("Yes\n");
		else printf("No\n");
		pre=ans;
	}
	return 0;
} 