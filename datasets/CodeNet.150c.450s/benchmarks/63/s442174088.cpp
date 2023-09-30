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
typedef long long lint;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
template<class T> void debug(T a) { for (auto i : a)cout << i << endl; }

const int M = 100001;

vector<pii> a[M];
int ans[M];
int main()
{
	fill(begin(ans), end(ans), INT_MAX);
	int v, e, r;
	cin >> v >> e >> r;
	FOR(i, e)
	{
		int s, t, d;
		cin >> s >> t >> d;
		a[s].push_back(pii(t, d));
	}
	ans[r] = 0;
	queue<int> que; que.push(r);
	while (!que.empty())
	{
		int now = que.front(); que.pop();
		FOR(i, a[now].size())
		{
			int next = a[now][i].first;
			int p = ans[now] + a[now][i].second;
			if (ans[next] > p)
			{
				ans[next] = p;
				que.push(next);
			}
		}
	}

	FOR(i, v)
	{
		if (ans[i] == INT_MAX)cout << "INF" << endl;
		else cout << ans[i] << endl;
	}
}