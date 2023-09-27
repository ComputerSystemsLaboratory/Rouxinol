#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		
		string s;
		cin >> s;
		
		vector<ll> base;
		bool flag=0;
		for(int i=n-1;i>=0;i--)
		{
			ll x = a[i];
			for(ll b:base) x = min(x,x^b);
			
			if(x)
			{
				if( s[i] == '1' ) 
				{     flag = 1;
					//cout<<'1';
					break;
				}
				else base.push_back(x);
			}
		}
		if(flag) cout<<1;
		else cout<<0;
		cout<<'\n';
		
	}
	// your code goes here
	return 0;
}