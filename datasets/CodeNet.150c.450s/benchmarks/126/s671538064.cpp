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

int main()
{
    for(int a, b, n; cin >> a >> b >> n; )
	{
		vector<vint> board(a, vint(b, true)), dp(a, vint(b, 0));
		
		rep(i, n)
		{
			int x, y;
			cin >> x >> y;
			
			board[x-1][y-1] = false;
		}
		
		dp[0][0] = 1;
		
		rep(x, a) rep(y, b)
		{
			if(0 < x && board[x-1][y]) dp[x][y] += dp[x-1][y];
			if(0 < y && board[x][y-1]) dp[x][y] += dp[x][y-1];
		}
		
		cout << dp[a-1][b-1] << endl;
	}
}