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
	int n, r;
	while (cin >> n >> r, n)
	{
		vi v;
		REP(i, n) v.push_back(i + 1);
		REP(i, r)
		{
			int c, p; cin >> p >> c;
			int a = n - c - p + 1;
			int b = n - p + 1;
			vi w;
			REP(i, a) w.push_back(v[i]);
			FOR(i, b, n) w.push_back(v[i]);
			FOR(i, a, b) w.push_back(v[i]);
			v = w;
		}
		cout << v.back() << endl;
	}

	return 0;
}