#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <sstream>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <iomanip>

//using namespace std;

#define Rep(i,a,b) for(int i = a; i < b; ++i)
#define rep(i,b) Rep(i,0,b)
#define allof(a) (a).begin(), (a).end()

typedef long long ll;
const int inf = 1e9 + 7;
const ll infll = 1ll << 60ll;
const ll mod = 1e9 + 7;
// 0~3までは右左下上 4~7までは斜め
constexpr int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
constexpr int dy[] = { 0, -1, 0, 1, 1, -1, -1, 1 };

template<typename T> void chmax(T& a, T b) { a = std::max(a, b); }
template<typename T> void chmin(T& a, T b) { a = std::min(a, b); }
template<typename T> void chadd(T& a, T b) { a = a + b; }

namespace {  // 名前なし名前空間
	// gcd, lcm は C++17 でstdに標準入りしたので言語のバージョンに注意
	// 最大公約数
	ll gcd(ll a, ll b) {
		if (b == 0) return a;
		return gcd(b, a % b);
	}

	ll gcd(int a, int b) {
		std::cout << "a" << std::endl;
		if (b == 0) return a;
		return gcd(b, a % b);
	}

	// 最小公倍数
	ll lcm(ll a, ll b) {
		return a / gcd(a, b) * b;
	}
}

int main() {

	while (true) {
		int h, w;
		std::cin >> h >> w;
		if (h == 0 && w == 0) break;
	
		// 100 * 100 * 1000
		int value = h * h + w * w;
		int ans_h = 1;
		int ans_w = 1;
		int min_value = inf;
		bool end = false;
		Rep(height, 1, 151) {
			Rep(width, height + 1, 151) {
				int tmp = height * height + width * width;
				if (value == tmp) {
					if (h < height) {
						ans_h = height;
						ans_w = width;
						end = true;
						break;
					}
				}
				if (tmp < min_value && value < tmp) {
					min_value = tmp;
					ans_h = height;
					ans_w = width;
				}
			}
			if (end) break;
		}
		std::cout << ans_h << " " << ans_w << std::endl;
	}

	return 0;
}

