#include<bits/stdc++.h>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e5+5;
#define ll long long
#define inf 0x3f3f3f3f
#define mem(x) memset(x,0,sizeof(x))
#define sca(x) scanf("%d",&x)
#define scall(x) scanf("%lld",&x)
#define eps 1e-6
ll num[100005];
int main()
{
	ll n;scall(n);
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		int x;sca(x);
		num[x]++;
		ans+=x;
	}
	int q;sca(q);
	while(q--)
	{
		ll x,y;
		scall(x);scall(y);
		ans-=(num[x]*x);
		ans+=(num[x]*y);
		num[y]+=num[x];
		num[x]=0;
		printf("%lld\n",ans);
	}
 } 