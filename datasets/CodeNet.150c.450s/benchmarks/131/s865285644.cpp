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
		vector<ll> a(30);
		ll L;
		cin >> a[0] >> L;
		if (a[0] == 0 && L == 0) break;
		for (int i = 1; i < 30; i++) {
			string s;
			ll z = L - to_string(a[i - 1]).size();
			for (int j = 0; j < z; j++) s += '0';
			s += to_string(a[i - 1]);
			sort(s.begin(), s.end());
			ll mn = stoll(s);
			reverse(s.begin(), s.end());
			ll mx = stoll(s);
			a[i] = mx - mn;
			bool flag = false;
			for (int j = 0; j < i; j++) if (a[j] == a[i]) {
				cout << j << " " << a[i] << " " << i - j << "\n";
				flag = true;
				break;
			}
			if (flag) break;
		}
	}
	return 0;

}
