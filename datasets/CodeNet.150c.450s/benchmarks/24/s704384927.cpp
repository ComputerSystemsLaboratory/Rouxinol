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

int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/

	int kkt = 89;
	while (kkt) {
		ll n, m; scanf("%lld %lld", &n, &m);
		if (n == 0 && m == 0) break;
		vector<pair<ll, ll>> vp(n);
		for (int i = 0; i < n; i++) scanf("%lld %lld", &vp[i].second, &vp[i].first);
		sort(vp.rbegin(), vp.rend());
		ll res = 0;
		for (int i = 0; i < n; i++) {
			if (vp[i].second <= m) {
				m -= vp[i].second;
			}
			else if(m > 0){
				vp[i].second -= m;
				m = 0;
				res += vp[i].first * vp[i].second;
			}
			else {
				res += vp[i].first * vp[i].second;
			}
		}
		cout << res << "\n";
	}
	return 0;

}
