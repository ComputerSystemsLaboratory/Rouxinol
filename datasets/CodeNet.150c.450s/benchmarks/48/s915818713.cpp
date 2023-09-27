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
#define popcount __builtin_popcount

#define rep(i, n) for (int i = 0; i < n; ++i)

template <class T> void max_swap(T& a, const T& b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T& b) { a = min(a, b); }

const double EPS = 1e-10;
typedef long long ll;
typedef pair<int, int> pint;


int main()
{
	const int MAX = 1000000;
	vector<int> cub, sq;
	for (int i = 0; i*i*i <= MAX; ++i)
		cub.push_back(i*i*i);
	for (int i = 0; i*i <= MAX; ++i)
		sq.push_back(i*i);
	cub.push_back(MAX + 1);
	sq.push_back(MAX + 1);

	int e;
	while (scanf("%d", &e), e)
	{
		int res = e;
		for (int z = 0; cub[z] <= e; ++z)
			for (int y = 0; sq[y] + cub[z] <= e; ++y)
				min_swap(res, (e - (sq[y] + cub[z])) + y + z);
		printf("%d\n", res);
	}
}