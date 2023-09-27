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
	int kkt = 1;
	while (kkt--) {
		int n; scanf("%d", &n);
		vector<string> vs(n); for (int i = 0; i < n; i++) cin >> vs[i];
		sort(vs.begin(), vs.end());
		int m; scanf("%d", &m);
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			string s; cin >> s;
			if (binary_search(vs.begin(), vs.end(), s)) {
				if (cnt % 2 == 0) cout << "Opened by " << s << "\n";
				else cout << "Closed by " << s << "\n";
				cnt++;
			}else{
				cout << "Unknown " << s << "\n";
			}
		}
	}
	return 0;

}
