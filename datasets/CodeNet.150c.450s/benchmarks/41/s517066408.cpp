# define _CRT_SECUREj_NO_WARNINGS 1
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
# include <climits>
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
# define INF ((int)(1<<25))
# define REP(i,n) for(int i=0;i<(int)n;i++)
# define FOR(i,n) REP(i,n)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define TORAD 2.0*M_PI/360.0
# define INT(x) int x;cin>>x;
# define ALL(x) (x).begin(),(x).end()
# define RALL(x) (x).rbegin(),(x).rend()
# define DEBUG(x) cout<<#x<<":"<<x<<endl;
# define EPS 1e-12
#ifdef _MSC_VER
#include <intrin.h>
#define __builtin_popcount __popcnt
#endif
#define int long long
typedef long long lint;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
template<class T> void debug(T a) { for (auto i : a)cout << i << endl; }

const int M = 110;
int f[M][M];
int v, e, r;

signed main()
{
	cin >> v >> e;
	FOR(i, M)FOR(j, M)f[i][j] = INT_MAX;
	FOR(i, M)f[i][i] = 0;
	FOR(i, e)
	{
		int s, t, d;
		cin >> s >> t >> d;
		f[s][t] = d;
	}

	FOR(k, M)
	{
		FOR(i, M)
		{
			FOR(j, M)
			{
				if (f[i][k] == INT_MAX || f[k][j] == INT_MAX)continue;
				f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
			}
		}
	}
	FOR(i, M)if (f[i][i] < 0) { cout << "NEGATIVE CYCLE" << endl; return 0; }

	FOR(i, v)
	{
		FOR(j, v)
		{
			if (j)cout << " ";
			if (f[i][j] == INT_MAX)cout << "INF";
			else cout << f[i][j];
		}
		cout << endl;
	}
}