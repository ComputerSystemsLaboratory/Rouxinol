#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void init();
void solve();

#define rep(i, a) for (int i = 0; i < (int) (a); i++)
#define reps(i, a, b) for (int i = (int) (a); i < (int) (b); i++)
#define rrep(i, a) for (int i = (int) a-1; i >= 0; i--)
#define rreps(i, a, b) for (int i = (int) (a)-1; i >= (int) (b); i--)
#define MP(a, b) make_pair((a), (b))
#define PB(a) push_back((a))
#define all(v) (v).begin(), (v).end()
#define PRINT(f) if((f)){cout << (TRUE__) << endl;}else{cout << FALSE__ << endl;}
#define TRUE__  "Yes"
#define FALSE__ "No"
#define PERM(v) next_permutation(all(v))
#define UNIQUE(v) sort(all(v));(v).erase(unique(all(v)), v.end())
#define CIN(type, x) type x;cin >> x

#ifdef LOCAL
#define lcout(a) cout << a
#define lcoutln(a) cout << a << endl
#define lcerr(a) cerr << a
#define lcerrln(a) cerr << a << endl
#else
#define lcout(a) 
#define lcoutln(a) 
#define lcerr(a) 
#define lcerrln(a) 
#endif
#define MOD 1000000007

signed main()
{
	init();
	solve();
}

int q, xl, yl;
string x, y;

void init()
{
	cin >> q;
}

int dp[1010][1010];

void reset()
{
	rep(i, xl+2) rep(j, yl+2) dp[i][j] = 0;
}


void solve()
{
	rep(cnt, q) {
		cin >> x >> y;
		xl = x.length();
		yl = y.length();
		reps(i, 1, xl+1) reps(j, 1, yl+1) {
			if (x[i-1] == y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
		}
		cout << dp[xl][yl] << endl;
		reset();
	}
}


