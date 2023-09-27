#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef map<ll,ll>::iterator itll;
typedef long double ld;
typedef map<ll,ll> mapll;

#define con continue
#define pb push_back
#define fi first
#define se second
#define fr front()
#define INF 1000000000000000000
#define all(vl) vl.begin(),vl.end()
#define m_p make_pair 
#define sz(a) sizeof(a)
#define forn(mp,it) for(it = mp.begin();it!=mp.end();it++)
#define FOR(i,a,n) for(int i=a;i<n;i++) 
#define FORE(i,a,n) FOR(i,a,n+1)
#define Endl endl
#define eNdl endl
#define enDl endl
#define endL endl

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	map<ll,ll> mp;
	ll he = 0;
	FOR(i,0,n)
	{
		ll a;
		cin>>a;
		he+=a;
		mp[a]++;
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll a,b;
		cin>>a>>b;
		ll now = mp[a];
		ll h = now*(b-a);
		he+=h;
		cout<<he<<endl;
		mp[b] += mp[a];
		mp[a] = 0;
	}
	return 0;
}
