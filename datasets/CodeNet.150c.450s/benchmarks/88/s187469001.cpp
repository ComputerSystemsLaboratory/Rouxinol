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

struct Rectangle {
	ll h, w;
	Rectangle(ll _h, ll _w) :h(_h), w(_w) {}
	bool operator<(const Rectangle& r) {
		if (h * h + w * w == r.h * r.h + r.w * r.w) {
			return h < r.h;
		}
		else {
			return h * h + w * w < r.h * r.h + r.w * r.w;
		}
	}
};
int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/
	int kkt = 89;
	vector<Rectangle> vr;
	for (int i = 1; i <= 300; i++) for (int j = i + 1; j <= 300; j++) vr.emplace_back(i, j);
	sort(vr.begin(), vr.end());
	while (kkt) {
		ll H, W; scanf("%lld %lld", &H, &W);
		if (H == 0) break;
		ll left = -1;
		ll right = (ll)vr.size() - 1;
		while (right - left > 1) {
			ll mid = (left + right) >> 1;
			if (Rectangle(H,W) < vr[mid]) {
				right = mid;
			}
			else {
				left = mid;
			}
		}
		cout << vr[right].h << " " << vr[right].w << "\n";
	}

	return 0;

}
