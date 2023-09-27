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
	cin >> S;
	int N;
	cin >> N;
	REP(i, N)
	{
		string s;
		int a, b;
		cin >> s >> a >> b;
		if (s == "replace")
		{
			string c;
			cin >> c;
			FOR(i, b + 1, a)
			{
				S[i] = c[i - a];
			}
		}
		else if (s == "reverse")
		{
			std::reverse(S.begin() + a, S.begin() + b + 1);
		}
		else
		{
			FOR(i, b + 1, a)
			{
				cout << S[i];
			}
			cout << endl;
		}
	}
	return 0;
}
