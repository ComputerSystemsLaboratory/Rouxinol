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
		int n, m; cin >> n >> m;
		if (n == 0 && m == 0) break;
		vector<int> a(n), b(m);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int j = 0; j < m; j++) cin >> b[j];
		int sa = 0, sb = 0;
		for (int i = 0; i < n; i++) sa += a[i];
		for (int j = 0; j < m; j++) sb += b[j];
		int _i = 0, _j = 0, mini = INT_MAX;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (sa - a[i] + b[j] == sb - b[j] + a[i])
					if (a[i] + b[j] < mini) {
						_i = i; _j = j; mini = a[i] + b[j];
					}
		if (mini < INT_MAX) cout << a[_i] << ' ' << b[_j] << endl;
		else cout << -1 << endl;
	}
}