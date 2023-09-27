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
		cin >> n >> m;
		if (n == 0 && m == 0) {
			return 0;
		} else {
			ll a, b;
			vp v;
			REP(i, n)
			{
				cin >> a >> b;
				v.push_back(make_pair(b, a));
			}
			sort(RALL(v));
			ans = 0;
			REP(i, n)
			{
				if (m >= v[i].second) {
					m -= v[i].second;
				} else {
					ans += (v[i].second - m)*v[i].first;
					m = 0;
				}
			}
			cout << ans << endl;
			v.clear();
		}
	}
}