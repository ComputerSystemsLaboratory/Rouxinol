
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
constexpr long long mod = 1000000007LL;
//constexpr long long mod = 998244353LL;

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve(ll N, ll A, ll B, ll C, ll X) {
	vector<int> y(N); for (int i = 0; i < N; i++) scanf("%d", &y[i]);
	int res = 0;
	queue<int> q;
	for (int i = 0; i < N; i++) q.push(y[i]);
	for (int i = 0; i <= 10000; i++) {
		if (q.empty()) break;
		if (X == q.front()) {
			chmax(res, i);
			q.pop();
		}
		X = (X * A + B) % C;
	}
	if (!q.empty()) puts("-1");
	else printf("%d\n", res);
}
int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/
	while (1) {
		int n, a, b, c, x;
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &x);
		if (n == 0) break;
		solve(n, a, b, c, x);
	}
	return 0;
	/*
		おまじないを使ったらscanfとprintf関連注意！！！！！！！！！！！！
	*/
}

