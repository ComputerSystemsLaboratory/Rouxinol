#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype

template <class T>
int __builtin_popcount(T n) { return n ? 1 + __builtin_popcount(n & (n - 1)) : 0; }
#endif

#define foreach(it, c) for (__typeof__((c).begin()) it=(c).begin(); it != (c).end(); ++it)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define popcount __builtin_popcount

const double EPS = 1e-10;
typedef long long ll;
typedef pair<int, int> pint;


int main()
{
	int a, b, n;
	while (scanf("%d%d", &a, &b), a|b)
	{
		scanf("%d", &n);
		bool c[16][16];
		memset(c, 0, sizeof(c));
		while (n--)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			--x; --y;
			c[y][x] = true;
		}
		int dp[16][16];
		dp[0][0] = 1;
		for (int i = 0; i < b; ++i)
		{
			for (int j = i ? 0 : 1; j < a; ++j)
			{
				dp[i][j] = 0;
				if (!c[i][j])
				{
					if (j > 0)
						dp[i][j] += dp[i][j-1];
					if (i > 0)
						dp[i][j] += dp[i-1][j];
				}
			}
		}
		printf("%d\n", dp[b-1][a-1]);
	}
}