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
#include <numeric>
#include <cctype>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long MAX = 5100000;
const long long INF = 1LL << 60;
const long long mod = 1000000007LL;
//const long long mod = 998244353LL;

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
		ll N, M, P; scanf("%lld %lld %lld", &N, &M, &P);
		if (N == 0 && M == 0 && P == 0) break;
		ll res = 0;
		ll cnt = 0;
		ll sum = 0;
		for (ll i = 1; i <= N; i++) {
			ll x; scanf("%lld", &x);
			sum += 100 * x;
			if (i == M) cnt += x;
		}
		if (cnt == 0) res = 0;
		else res = sum * (100 - P) / (100 * cnt);
		printf("%lld\n", res);
	}
	return 0;
}
