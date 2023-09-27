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
	int n, m;
	while (scanf("%d", &n), n)
	{
		map<char, char> table;
		while (n--)
		{
			char a, b;
			scanf(" %c %c", &a, &b);
			table[a] = b;
		}
		scanf("%d", &m);
		while (m--)
		{
			char c;
			scanf(" %c", &c);
			putchar(table.count(c) ? table[c] : c);
		}
		putchar('\n');
	}

	return 0;
}