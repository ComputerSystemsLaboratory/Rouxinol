#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };

ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
	for (;;) {
		int n, r; cin >> n >> r;
		if (n == 0) break;
		string s(n, ' ');
		for (int i = 0; i < n; i++) s[i] = n - i;
		while (r--) {
			int p, c; cin >> p >> c;
			string _s = s.substr(p - 1, c) + s.substr(0, p - 1) + s.substr(p + c - 1);
			s = _s;
		}
		cout << (int)s[0] << endl;
	}
}