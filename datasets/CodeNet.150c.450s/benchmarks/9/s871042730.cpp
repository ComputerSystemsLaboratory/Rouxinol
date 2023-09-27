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
	string S;
	while (true)
	{
		cin >> S;
		if (S == "-")
		{
			break;
		}
		int m;
		cin >> m;
		REP(i, m)
		{
			int h;
			cin >> h;

			string sub1 = S.substr(0, h);
			string sub2 = S.substr(h, S.length() - h);
			S = sub2 + sub1;
		}
		cout << S << endl;
	}
	return 0;
}
