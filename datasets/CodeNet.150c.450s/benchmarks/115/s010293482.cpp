# define _CRT_SECURE_NO_WARNINGS 1
# define _USE_MATH_DEFINES
# include <iostream>
# include <numeric>
# include <string>
# include <bitset>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <iomanip>
# include <queue>
# include <sstream>
# include <unordered_set>
# include <unordered_map>
# include <climits>
# include <complex>
# include <cmath>
# include <list>
# include <functional>
# include <string>
# include <ctime>
# include <set>
# include <forward_list>
# include <map>
# include <stack>
using namespace std;
# define MP make_pair
# define INF ((int)(1<<25))
# define REP(i,n) for(int i=0;i<(int)n;i++)
# define FOR(i,n) REP(i,n)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define TORAD 2.0*M_PI/360.0
# define INT(x) int x;cin>>x;
# define STRING(x) string x;cin>>x;
# define STR(x) STRING(x);
# define DOUBLE(x) double x;cin>>x;
# define DBL(x) DOUBLE(x); 
# define ALL(x) begin(x),end(x)
# define RALL(x) (x).rbegin(),(x).rend()
# define DEBUG(x) cout<<#x<<":"<<x<<endl
# define INIT(a) memset(a,-1,sizeof a)
# define CLR(a) memset(a,0,sizeof a)
# define EPS 1e-12
#ifdef _MSC_VER
#include <intrin.h>
#define __builtin_popcount __popcnt
#endif
typedef long long lint;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<int> vi;
typedef vector<lint> vl;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
//const int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
//const int M = 1000000007;
template<class T> void debug(T a) { for ( auto i : a )cout << i << endl; }

string x, y;
int memo[1100][1100];
int dp(int l, int r)
{
	if ( memo[l][r] != -1 )return memo[l][r];
	if ( l == x.size() && r == y.size() )return 0;
	int ans = 0;
	if ( x[l] == y[r] )
		ans = max(ans, dp(l + 1, r + 1) + 1);
	if ( l != x.size() )
		ans = max(ans, dp(l + 1, r));
	if ( r != y.size() )
		ans = max(ans, dp(l, r + 1));
	return memo[l][r] = ans;
}
int main()
{
	INT(n);
	while ( n-- )
	{
		cin >> x >> y;
		INIT(memo);
		cout << dp(0, 0) << endl;
	}
}