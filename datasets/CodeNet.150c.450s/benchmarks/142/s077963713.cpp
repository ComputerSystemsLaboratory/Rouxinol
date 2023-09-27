#include<bits/stdc++.h>
#define ll long long
#define MAX 1000005
using namespace std;

void solve()	{
	int n,k;
	cin >> n >> k;
	ll a[n];
	for(int i=0; i<n; i++)	cin >> a[i];
	for(int i=k; i<n; i++)	{
		if(a[i]>a[i-k])	cout << "Yes\n";
		else cout << "No\n";
	}
}

int main()	
{
	
	int t=1;
	//cin >> t;
	for(int i=1; i<=t; i++)	{
		solve();
	}
	return 0;
}