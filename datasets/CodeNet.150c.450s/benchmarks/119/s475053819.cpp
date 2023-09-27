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

void dfs(int i, int j, vector< vector<int> >& a) {
	a[i][j] = false;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (a[i + di][j + dj]) dfs(i + di, j + dj, a);
}

int main() {
	for (;;) {
		int w, h; cin >> w >> h;
		if (w == 0 && h == 0) break;
		vector< vector<int> > a(h + 2, vector<int>(w + 2));
		for (int i = 1; i <= h; i++)
			for (int j = 1; j <= w; j++)
				cin >> a[i][j];
		int cnt = 0;
		for (int i = 1; i <= h; i++)
			for (int j = 1; j <= w; j++)
				if (a[i][j]) {
					cnt++;
					dfs(i, j, a);
				}
		cout << cnt << endl;
	}
}