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

void hoge(int n, int p) {
	vector<int> a(n);
	int _p = p;
	for (;;)
		for (int i = 0; i < n; i++) {
			if (p > 0) { p--; a[i]++; }
			else { p += a[i]; a[i] = 0; }
			if (a[i] == _p) {
				cout << i << endl;
				return;
			}
		}
}

int main() {
	for (;;) {
		int n, p; cin >> n >> p;
		if (n == 0 && p == 0) break;
		hoge(n, p);
	}
}