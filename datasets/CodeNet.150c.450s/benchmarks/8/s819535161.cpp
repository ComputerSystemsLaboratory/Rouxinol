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

	int p[2] = { 0 };
	REP(i, n)
	{
		string s[2];
		cin >> s[0] >> s[1];
		if (s[0] == s[1])
		{
			p[0] += 1; p[1] += 1;
		}
		else if (s[0] > s[1])
		{
			p[0] += 3;
		}
		else
		{
			p[1] += 3;
		}
	}

	cout << p[0] << " " << p[1] << endl;
	return 0;
}
