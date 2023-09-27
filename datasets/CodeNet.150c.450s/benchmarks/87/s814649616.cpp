
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
		int n; scanf("%d", &n); if (n == 0) break;
		vector<vector<int>> vs(n, vector<int>(5)); for (int i = 0; i < n; i++) for (int j = 0; j < 5; j++) scanf("%d", &vs[i][j]);
		int res = 0;
		while (1) {
			bool flag = true;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < 3; j++) {
					if (vs[i][j] != -1 && vs[i][j] == vs[i][j + 1] && vs[i][j + 1] == vs[i][j + 2]) {
						if (j + 3 < 5 && vs[i][j + 2] == vs[i][j + 3]) {
							if (j + 4 < 5 && vs[i][j + 3] == vs[i][j + 4]) {
								for (int k = 0; k < 5; k++) res += vs[i][k], vs[i][k] = -1;
							}
							else {
								for (int k = 0; k < 4; k++) res += vs[i][j + k], vs[i][j + k] = -1;
							}
						}
						else {
							for (int k = 0; k < 3; k++) res += vs[i][j + k], vs[i][j + k] = -1;
						}
						flag = false;
					}
				}
			}
			if (flag) break;
			for (int j = 0; j < 5; j++) {
				for (int i = n - 1; i >= 0; i--) {
					if (vs[i][j] != -1) {
						for (int k = i; k < n - 1; k++) {
							if (vs[k + 1][j] == -1) {
								vs[k + 1][j] = vs[k][j];
								vs[k][j] = -1;
							}
						}
					}
				}
			}
		}
		printf("%d\n", res);
	}
	return 0;
	/*
		おまじないを使ったらscanfとprintf関連注意！！！！！！！！！！！！
	*/
}

