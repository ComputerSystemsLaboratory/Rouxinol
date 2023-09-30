#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

ll memo[32];
ll rec(int n, int p)
{
	if(n < p) return 1;
	if(0 <= memo[p]) return memo[p];
	
	return memo[p] = rec(n, p + 1) + rec(n, p + 2) + rec(n, p + 3);
}

int main()
{
	for(int n; cin >> n && n;)
	{
		vector<vint> dp(n + 2, vint(n + 1));
		
		dp[0][0] = 1;
		rep(i, n + 1) rep(j, n)
		{
			dp[min(n + 1, i + 1)][j + 1] += dp[i][j];
			dp[min(n + 1, i + 2)][j + 1] += dp[i][j];
			dp[min(n + 1, i + 3)][j + 1] += dp[i][j];
		}
		
		cout << (accumulate(ALL(dp[n]), 0) + 3649) / 3650 << endl;
	}
}