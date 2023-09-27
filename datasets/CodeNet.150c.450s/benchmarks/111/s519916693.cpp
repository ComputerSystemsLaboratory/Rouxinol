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

ll n, memo[128][32];

ll rec(vint& v, int p, int a)
{
	if(a < 0 || 20 < a) return 0;
	
	if(p == n - 1) return a == v[p];
	if(0 <= memo[p][a]) return memo[p][a];
	
	return memo[p][a] = rec(v, p + 1, a + v[p]) + rec(v, p + 1, a - v[p]);
}

int main()
{
    while(cin >> n && n)
	{
		memset(memo, -1, sizeof(memo));
		vint v(n);
		
		rep(i, n) cin >> v[i];
		
		cout << rec(v, 1, v[0]) << endl;
	}
}