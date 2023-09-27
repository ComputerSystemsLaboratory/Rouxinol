#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define x first
#define y second	

#define sz(a) ((int)(a.size()))
using namespace std;
const int mod = 998244353;
int mult(int a, int b)
{
	return a * (ll) b % mod;
}
int add(int a, int b)
{
	return a + b >= mod ? a + b - mod : a + b;
}
int sub(int a,  int b)
{
	return a - b < 0 ? a - b + mod : a - b;
}
void Add(int &a, int b)
{
	a = add(a , b);
}
vector<ll> b;
void add(ll x)
{
	for(int i = 0; i < b.size(); i++)
	{
		ll t= b[i];
		if((x ^ t) < x)
		{
			x ^= t;
		}
	}
	if(x == 0)
		return;
	for(int i = 0; i < b.size(); i++)
	{

		if((x ^ b[i]) < b[i])
			b[i] ^= x;
	}
	b.pb(x);
	sort(b.begin() , b.end() , greater<ll>());
}
ll check(ll x)
{
	for(int i = 0; i < b.size(); i++)
	{
		ll t = b[i];
		if((x ^ t) < x)
		{
			x ^= t;
		}
	}
	return x;
}
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		b.clear();
		vector<ll> a(n);
		for(auto & x : a)
			cin >> x;
		string s;
		cin >> s;
		reverse(a.begin() , a.end());
		reverse(s.begin() , s.end());
		bool pzdc = false;
		for(int i = 0; i < n; i++)
			if(s[i] == '0')
			{
				add(a[i]);
			}
			else 
			{
				pzdc |= check(a[i]) != 0;
			}
		cout << pzdc << endl;
	}
	
}










