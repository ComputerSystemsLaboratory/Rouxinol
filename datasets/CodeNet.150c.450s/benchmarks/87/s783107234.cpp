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
double EPS = 1e-9;

int hoge(vector< vector<int> >& a, int i, int j) {
	return i < a[j].size() ? a[j][i] : 0;
}

int main() {
	for (;;) {
		int H; cin >> H;
		if (H == 0) break;
		vector< vector<int> > a(5, vector<int>(H));
		for (int i = H - 1; i >= 0; i--)
			for (int j = 0; j < 5; j++)
				cin >> a[j][i];
		int ans = 0;
		for (;;) {
			bool flag = false;
			vector< vector<bool> > b(5, vector<bool>(H));
			for (int i = 0; i < H; i++)
				for (int j = 0; j < 3; j++) {
					int x = hoge(a, i, j);
					if (x && hoge(a, i, j + 1) == x && hoge(a, i, j + 2) == x) {
						b[j][i] = b[j + 1][i] = b[j + 2][i] = true;
						flag = true;
					}
				}
			for (int i = H - 1; i >= 0; i--)
				for (int j = 0; j < 5; j++)
					if (b[j][i]) {
						ans += a[j][i];
						a[j].erase(a[j].begin() + i);
					}
			if (!flag) break;
		}
		cout << ans << endl;
	}
}