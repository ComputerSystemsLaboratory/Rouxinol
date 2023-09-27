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

template <class T> void get_max(T& a, const T b) { a = max(a, b); }
template <class T> void get_min(T& a, const T b) { a = min(a, b); }

const double EPS = 1e-10;
typedef long long ll;
typedef pair<int, int> pint;


int main()
{
	int C, R;
	while (scanf("%d%d", &R, &C), R | C)
	{
		static bool rev[10][10000];
		for (int i = 0; i < R; ++i)
		{
			for (int j = 0; j < C; ++j)
			{
				int t;
				scanf("%d", &t);
				rev[i][j] = t == 0;
			}
		}

		int res = 0;
		for (int i = 0; i < 1 << R; ++i)
		{
			int sum = 0;
			for (int x = 0; x < C; ++x)
			{
				int s = 0;
				for (int y = 0; y < R; ++y)
					if (rev[y][x] ^ (i >> y & 1))
						++s;
				sum += max(s, R - s);
			}
			get_max(res, sum);
		}
		printf("%d\n", res);
	}
}