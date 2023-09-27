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

#define rep(i, n) for (int i = 0; i < n; ++i)

template <class T> void max_swap(T& a, const T b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T b) { a = min(a, b); }

const double EPS = 1e-10;
typedef long long ll;
typedef pair<int, int> pint;


int main()
{
	int n, a[128];
	ll dp[128][21];
	scanf("%d", &n);
	rep(i, n)
		scanf("%d", a + i);

	memset(dp, 0, sizeof(dp));
	dp[0][a[0]] = 1;
	for (int i = 1; i < n - 1; ++i)
	{
		for (int j = 0; j <= 20; ++j)
		{
			int pl = j + a[i];
			int mi = j - a[i];
			if (0 <= pl && pl <= 20)
				dp[i][pl] += dp[i - 1][j];
			if (0 <= mi && mi <= 20)
				dp[i][mi] += dp[i - 1][j];
		}
	}
	printf("%lld\n", dp[n - 2][a[n - 1]]);
}