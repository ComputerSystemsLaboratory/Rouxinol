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

ll m1[105][105];
ll m2[105][105];

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	REP(i, n)
	{
		REP(j, m)
		{
			cin >> m1[i][j];
		}
	}
	REP(i, m)
	{
		REP(j, l)
		{
			cin >> m2[i][j];
		}
	}

	REP(i, n)
	{
		REP(j, l)
		{
			ll sum = 0;
			REP(k, m)
			{
				sum += m1[i][k] * m2[k][j];
			}
			cout << sum;
			if (j < l - 1)cout << " ";
		}
		cout << endl;
	}
	return 0;
}
