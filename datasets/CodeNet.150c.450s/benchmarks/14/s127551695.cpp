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

int main()
{
	int n;
	cin >> n;
	FOR(i, n + 1, 1)
	{
		if (i % 3 == 0)
		{
			cout << " " << i;
		}
		else
		{
			int k = i;
			while (k > 0)
			{
				if (k % 10 == 3)
				{
					cout << " " << i;
					break;
				}
				k /= 10;
			}
		}
	}
	cout << endl;
	return 0;
}
