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
		int h, w; cin >> h >> w;
		if (h == 0) break;
		int x = h * h + w * w;
		i_i mini(150 * 150, 150);
		for (int H = 1; H <= 150; H++)
			for (int W = H + 1; W <= 150; W++) {
				int X = H * H + W * W;
				if (i_i(X, H) > i_i(x, h))
					mini = min(mini, i_i(X, H));
			}
		int X = mini.first, H = mini.second;
		int W = sqrt((double)X - H * H);
		cout << H << ' ' << W << endl;
	}
}