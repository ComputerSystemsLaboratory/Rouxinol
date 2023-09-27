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
	int n, card[2][10000];
	while (scanf("%d", &n), n)
	{
		for (int i = 0; i < n; ++i)
			scanf("%d%d", card[0] + i, card[1] + i);
		int A, B;
		A = B = 0;
		for (int i = 0; i < n; ++i)
		{
			if (card[0][i] > card[1][i])
				A += card[0][i] + card[1][i];
			else if (card[0][i] < card[1][i])
				B += card[0][i] + card[1][i];
			else
			{
				A += card[0][i];
				B += card[1][i];
			}
		}
		printf("%d %d\n", A, B);
	}

	return 0;
}