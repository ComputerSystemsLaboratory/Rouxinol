#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <string>
#include <vector>
#include <limits.h>
#include <stack>
#include <queue>
#include <cstdlib>
#define maxn 10000000
#define pi acos(-1)
#define ll long long
using namespace std;
#define MAX 100007

int n,k;
ll T[MAX];
int check(ll p)
{
	int i=0;
	for(int j=0;j<k;j++)
	{
		ll s=0;
		while (s+T[i]<=p) {
			s+=T[i];
			i++;
			if(i==n)return n;
		}
	}
	return i;
}
ll solve()
{
	ll l=0;
	ll r=100000*10000;
	ll mid;
	while(r-l>1)
	{
		mid=(l+r)/2;
		int v=check(mid);
		if(v>=n)r=mid;
		else l=mid;
	}
	return r;
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>T[i];
	ll ans=solve();
	cout<<ans<<endl;
	return 0;
}
