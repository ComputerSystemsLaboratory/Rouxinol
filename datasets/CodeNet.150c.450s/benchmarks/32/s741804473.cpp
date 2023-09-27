#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e7+1;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
typedef long long int ll;
typedef vector<ll> vi;
typedef vector < pair<ll, ll > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
typedef list <ll> lst;

ll n,m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/


int main()
{
	while (1) {
		ll mi, ma;
		cin >> n >> mi >> ma;
		if (n == 0 && mi == 0 && ma == 0) {
			return 0;
		} else {
			vi v(n);
			vp vans;
			REP(i, n) cin >> v[n - i - 1];
			FOR(i, mi, ma + 1)
			{
				ll a = v[n - i] - v[n - i - 1];
				vans.push_back(make_pair(a, i));
			}
			sort(ALL(vans));
			cout << vans[vans.size() - 1].second << endl;
		}
	}
}