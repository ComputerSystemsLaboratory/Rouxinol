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
		int n; scanf("%d", &n); if (n == 0) break;
		vector<string> vs(n); for (int i = 0; i < n; i++) cin >> vs[i];
		int pre = 0;
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (vs[i] == "lu") {
				if (pre == 0) pre = 1;
				else if (pre == 2) res++, pre = 0;
				else pre = 0;
			}
			if (vs[i] == "ru") {
				if (pre == 0) pre = 2;
				else if (pre == 1) res++, pre = 0;
				else pre = 0;
			}
			if (vs[i] == "ld") {
				if (pre == 0) pre = 3;
				else if (pre == 4) res++, pre = 0;
				else pre = 0;
			}
			if (vs[i] == "rd") {
				if (pre == 0) pre = 4;
				else if (pre == 3) res++, pre = 0;
				else pre = 0;
			}
		}
		cout << res << "\n";
	}
	return 0;

}
