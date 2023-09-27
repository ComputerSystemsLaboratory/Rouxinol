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
		int n; cin >> n;
		if (n == 0) break;
		vector<int> a(86400);
		while (n--) {
			int h1, m1, s1, h2, m2, s2;
			scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
			a[h1 * 3600 + m1 * 60 + s1]++;
			a[h2 * 3600 + m2 * 60 + s2]--;
		}
		int x = 0, maxi = 0;
		for (int t = 0; t < 86400; t++) {
			x += a[t];
			maxi = max(maxi, x);
		}
		cout << maxi << endl;
	}
}