#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

//#define int ll
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	printf("%d:", n);
	int t = n;
	for (int i = 2; i <= (int)sqrt(n); i += (i == 2 ? 1 : 2))
	{
		while (t%i == 0)
		{
			printf(" %d", i);
			t /= i;
		}
	}
	if (t != 1)
	{
		printf(" %d", t);
	}
	printf("\n");

	return 0;
}
