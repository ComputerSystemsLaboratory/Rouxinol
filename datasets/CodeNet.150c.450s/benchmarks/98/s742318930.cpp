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
			vi va(n), vb(m);
			REP(i, n) cin >> va[i];
			REP(i, m) cin >> vb[i];
			ll ansa = 0, ansb = 0;
			ansa = accumulate(ALL(va), 0LL);
			ansb = accumulate(ALL(vb), 0LL);
			ll diff = ansa - ansb;
			ll a = 0, b = 0;
			ans = 0;
			sum = INF;
			REP(i, n)
			{
				REP(j, m)
				{
					if (2 * (va[i] - vb[j]) == diff) {
						ans++;
						if (sum >= va[i] + vb[j]) {
							a = i;
							b = j;
						}
						sum = min(sum, va[i] + vb[j]);
					}
				}
			}
			if (ans == 0) {
				cout << -1 << endl;
			} else {
				cout << va[a] << ' ' << vb[b] << endl;
			}
		}
	}
}