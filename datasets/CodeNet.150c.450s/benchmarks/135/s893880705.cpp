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
#include <list>

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype
template <class T> int __builtin_popcount(T n) { return n ? 1 + __builtin_popcount(n & (n - 1)) : 0; }
#endif

#define foreach(it, c) for (__typeof__((c).begin()) it=(c).begin(); it != (c).end(); ++it)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define CLEAR(arr, val) memset(arr, val, sizeof(arr))

#define rep(i, n) for (int i = 0; i < n; ++i)

template <class T> void max_swap(T& a, const T& b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T& b) { a = min(a, b); }

typedef long long ll;
typedef pair<int, int> pint;

const double PI = acos(-1.0);
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { 1, 0, -1, 0 };


const int MAX = 1500 * 1000 + 810;
void count(int n, int* c)
{
	int len[2048];
	rep (i, n)
		scanf("%d", len + i);
	fill_n(c, MAX, 0);
	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		for (int j = i; j < n; ++j)
		{
			s += len[j];
			++c[s];
		}
	}
}
int main()
{
	int n, m, t;
	while (scanf("%d%d", &n, &m), n | m)
	{
		static int hor[MAX], ver[MAX];
		count(n, ver);
		count(m, hor);
		int res = 0;
		for (int i = 0; i < MAX; ++i)
			res += ver[i] * hor[i];
		printf("%d\n", res);
	}
}