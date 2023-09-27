#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>
#include <tuple>
#include <utility>
#include <list>
#include <cmath>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 100000;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(c) (c).begin(), (c).end()

struct edge{ LL to, cost; edge(int t, LL c) :to(t), cost(c){} };

int dxk[] = { 1, 1, 1, 0, -1, 0 };
int dxg[] = { 0, 1, 0, -1, -1, -1 };
int dy[] = { -1, 0, 1, 1, 0, -1 };

int bitcount(int a)
{
	int ret = 0;
	while (a != 0) { ret++; a = (a - 1) & a; }
	return ret;
}

int main()
{
	int h, w;
	while (cin >> h >> w && h)
	{
		vector<int> cols(w);
		rep(i, h) rep(j, w)
		{
			int t; cin >> t;
			cols[j] = (cols[j] << 1) | t;
		}
		int ans = 0;
		for (int i = 0; i < (1 << h); i++)
		{
			int tmp = 0;
			rep(j, w) tmp += max(h - bitcount(cols[j] ^ i), bitcount(cols[j] ^ i));
			ans = max(tmp, ans);
		}
		cout << ans << endl;
	}
	return 0;
}