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

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
	for (;;) {
		int N; cin >> N;
		if (N == 0) break;
		vector<int> x(N), y(N);
		for (int i = 1; i < N; i++) {
			int n, d; cin >> n >> d;
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
		}
		int xmin = INT_MAX, xmax = INT_MIN, ymin = INT_MAX, ymax = INT_MIN;
		for (int i = 0; i < N; i++) {
			xmin = min(xmin, x[i]);
			xmax = max(xmax, x[i]);
			ymin = min(ymin, y[i]);
			ymax = max(ymax, y[i]);
		}
		cout << xmax - xmin + 1 << ' ' << ymax - ymin + 1 << endl;
	}
}