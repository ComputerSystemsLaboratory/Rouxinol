#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <tuple>
#include <assert.h>
#include <deque>
#include <bitset>
#include <iomanip>
#include <limits>
#include <chrono>
#include <random>
#include <array>
#include <unordered_map>
#include <functional>
#include <complex>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

constexpr long long MAX = 5100000;
constexpr long long INF = 1LL << 60;
constexpr int inf = 1 << 28;
//constexpr long long mod = 1000000007LL;
//constexpr long long mod = 998244353LL;

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/
	int kkt = 89;
	while (kkt) {
		int m, n_min, n_max; scanf("%d %d %d", &m, &n_min, &n_max);
		if (m == 0) break;
		vector<int> p(m); for (int i = 0; i < m; i++) scanf("%d", &p[i]);
		sort(p.rbegin(), p.rend());
		int g = -1;
		int res = 0;
		for (int i = n_max - 1; i >= n_min - 1; i--) {
			if (chmax(g, p[i] - p[i + 1])) {
				res = i + 1;
			}
		}
		printf("%d\n", res);
	}
	return 0;

}
