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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long MAX = 5100000;
const long long INF = 1LL << 60;
const long long mod = 1000000007LL;
//const long long mod = 998244353LL;

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

struct Train {
	ll t;
	int is_in;
	Train(ll _t, int _is_in) :t(_t), is_in(_is_in) {}
	bool operator< (const Train& tr) {
		if (t == tr.t) {
			return is_in < tr.is_in;
		}
		else {
			return t < tr.t;
		}
	}
};
int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/
	while (1) {
		ll n; scanf("%lld", &n);
		if (n == 0) break;
		vector<Train> vt;
		vt.reserve(n * 2);
		for (ll i = 0; i < n; i++) {
			ll sh, sm, ss, eh, em, es;
			char c;
			cin >> sh >> c >> sm >> c >> ss >> eh >> c >> em >> c >> es;
			vt.emplace_back(sh * 3600 + sm * 60 + ss, 1);
			vt.emplace_back(eh * 3600 + em * 60 + es, 0);
		}
		sort(vt.begin(), vt.end());
		n *= 2;
		ll res = 0;
		ll now = 0;
		for (ll i = 0; i < n; i++) {
			if (vt[i].is_in) {
				now++;
				chmax(res, now);
			}
			else {
				now--;
			}
		}
		printf("%lld\n", res);
	}
	return 0;
}
