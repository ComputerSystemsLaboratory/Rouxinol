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
	static bool is_prime[MAX + 1];
	fill(is_prime, is_prime + (MAX + 1), true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= MAX; ++i)
		if (is_prime[i])
			for (int j = i*2; j <= MAX; j += i)
				is_prime[j] = false;

	int a, d, n;
	while (scanf("%d%d%d", &a, &d, &n), a)
	{
		int res = a;
		for (int p = 0; ; res += d)
		{
			if (is_prime[res])
			{
				if (++p == n)
					break;
			}
		}
		printf("%d\n", res);
	}
}