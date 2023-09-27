#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>

using namespace std;

typedef long long int ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;
typedef std::pair<ll, ll> pll;

#define FOR(i,n,m) for(ll i=(ll)(m);i<(ll)(n);++i)
#define REP(i,n) FOR(i,n,0)
#define IREP(i,n) for(ll i=(ll)(n);i>=0;--i)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

struct Dice
{
	int f;
	int a[4];
};

int main()
{
	Dice d[6];
	int k[6];
	REP(i, 6)
	{
		cin >> k[i];
	}

	d[0].f = k[0];
	d[0].a[0] = k[4];
	d[0].a[1] = k[2];
	d[0].a[2] = k[1];
	d[0].a[3] = k[3];

	d[1].f = k[1];
	d[1].a[0] = k[0];
	d[1].a[1] = k[2];
	d[1].a[2] = k[5];
	d[1].a[3] = k[3];

	d[2].f = k[2];
	d[2].a[0] = k[0];
	d[2].a[1] = k[4];
	d[2].a[2] = k[5];
	d[2].a[3] = k[1];

	d[3].f = k[3];
	d[3].a[0] = k[0];
	d[3].a[1] = k[1];
	d[3].a[2] = k[5];
	d[3].a[3] = k[4];

	d[4].f = k[4];
	d[4].a[0] = k[0];
	d[4].a[1] = k[3];
	d[4].a[2] = k[5];
	d[4].a[3] = k[2];

	d[5].f = k[5];
	d[5].a[0] = k[1];
	d[5].a[1] = k[2];
	d[5].a[2] = k[4];
	d[5].a[3] = k[3];

	int q;
	cin >> q;
	int ans[24];
	REP(i, q)
	{
		int u, f;
		cin >> u >> f;
		REP(j, 6)
		{
			if (d[j].f != f)continue;
			REP(l, 4)
			{
				if (d[j].a[l] != u)continue;
				ans[i] = d[j].a[(l + 1) % 4];
				break;
			}
			break;
		}
	}

	REP(i, q)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
