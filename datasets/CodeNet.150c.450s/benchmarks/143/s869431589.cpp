//Solution By SlavicG
#include <bits/stdc++.h>
using namespace std;
 
#define ll                          long long
 
#define forn(i,n)                   for(int i=0;i<n;i++)
#define all(v)                      v.begin(), v.end()
#define rall(v)                     v.rbegin(),v.rend()
	
#define pb                          push_back
#define sz(a)                       (int)a.size()
 
#define   endl                       "\n"
#define fastio                       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int  main()
{
	fastio;
	int n;
	cin >> n;
	map<int,int> m;
	ll s = 0;
	int a[n];
	forn(i,n){
		cin >> a[i];
		m[a[i]]++;
		s += a[i];
	}
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		ll x = m[a];
		s-= x * a;
		s += x * b;
		m[a] -= x;
		m[b] += x;
		cout << s << endl;
	}
}