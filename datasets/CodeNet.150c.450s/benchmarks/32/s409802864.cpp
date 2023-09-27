#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (int)(k); i < (int)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(), a.end()
#define MS(m,v) memset(m,v,sizeof(m))
#define D10 fixed<<setprecision(10)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int INF = MOD + 1;
const ld EPS = 1e-12;
template<class T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template<class T> T &chmax(T &a, const T &b) { return a = max(a, b); }

/*--------------------template--------------------*/

int main()
{
	cin.sync_with_stdio(false);
	int m, mn, mx;
	while (cin >> m >> mn >> mx, m)
	{
		vi v(m);
		REP(i, m) cin >> v[i];
		pii ans(-1, -1);
		FOR(i, mn, mx + 1)
		{
			chmax(ans, pii(v[i - 1] - v[i], i));
		}
		cout << ans.second << endl;
	}
	return 0;
}