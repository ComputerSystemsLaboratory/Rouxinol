
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
	while (1) {
		int n; scanf("%d", &n);
		if (n == 0) break;
		vector<int> a(n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		sort(a.begin(), a.end());
		int res = inf;
		for (int i = 0; i < n - 1; i++) chmin(res, a[i + 1] - a[i]);
		printf("%d\n", res);
	}
	return 0;
	/*
		おまじないを使ったらscanfとprintf関連注意！！！！！！！！！！！！
	*/
}

