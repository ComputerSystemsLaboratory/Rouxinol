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

char M[4] = { 'S','H','C','D' };
struct Card
{
	int N[4] = { 0,0,0,0 };
};
Card C[15];

int main()
{
	int N;
	cin >> N;
	REP(n, N)
	{
		int c;
		char m;
		cin >> m >> c;
		REP(i, 4)
		{
			if (M[i] == m)
			{
				C[c - 1].N[i]++;
				break;
			}
		}
	}

	REP(m, 4)
	{
		REP(c, 13)
		{
			if (C[c].N[m] == 0)
			{
				cout << M[m] << " " << c + 1 << endl;
			}
		}
	}
	return 0;
}
