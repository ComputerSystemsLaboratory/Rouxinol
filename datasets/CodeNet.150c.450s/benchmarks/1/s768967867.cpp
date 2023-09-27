#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll dp[100001];
ll a[100000];

int main()
{
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i<100001;i++)
	{
		dp[i] = 1e9;
	}
	for(int i = 0;i<n;i++)
	{
		ll *p = lower_bound(dp,dp+100001,a[i]);
		*p = min(a[i],*p);
	}
	int ans = lower_bound(dp,dp+100001,1e9)-dp;
	cout<<ans<<endl;
}
