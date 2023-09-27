#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
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
#define clear(arr, val) memset(arr, val, sizeof(arr))

#define rep(i, n) for (int i = 0; i < n; ++i)

template <class T> void max_swap(T& a, const T& b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T& b) { a = min(a, b); }

typedef long long ll;
typedef pair<int, int> pint;

const double EPS = 1e-8;
const double PI = acos(-1.0);
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { 1, 0, -1, 0 };


const int MAX = 1000000;
int cal(int n) { return n*(n+1)*(n+2)/6; }
void dpru(int* dp, const vector<int>& tet)
{
	for (int i = 0; i <= MAX; ++i)
		dp[i] = 1 << 28;
	dp[0] = 0;
	for (int i = 1; i <= MAX; ++i)
		for (int j = 0; j < tet.size() && i - tet[j] >= 0; ++j)
			min_swap(dp[i], dp[i - tet[j]] + 1);
}
int main()
{
	vector<int> tetra, odd_tetra;
	for (int i = 1; cal(i) <= MAX; ++i)
	{
		tetra.push_back(cal(i));
		if (cal(i) & 1)
			odd_tetra.push_back(cal(i));
	}

	static int min_tet[MAX + 1], min_odd_tet[MAX + 1];
	dpru(min_tet, tetra);
	dpru(min_odd_tet, odd_tetra);

	int n;
	while (scanf("%d", &n), n)
		printf("%d %d\n", min_tet[n], min_odd_tet[n]);
}