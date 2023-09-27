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
#define ll long long int
typedef vector<ll> vi;
typedef vector < pair<int, int > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
ll n, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/


int main()
{
	while (1) {
		int n;
		cin >> n;

		if (n == 0) {
			return 0;
		} else {
			vi v;
			v.resize(n);
			REP(i, n) cin >> v[i];
			sort(ALL(v));
			ll ans = INF;
			REP(i, n - 1)
			{
				ans = min(ans, v[i + 1] - v[i]);
			}
			ans = min(ans, v[n - 1] - v[n - 2]);
			cout << ans << endl;
		}
	}
}