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
		int N; cin >> N;
		if (N == 0) break;
		vector< vector<bool> > a(21, vector<bool>(21));
		int cnt = N;
		while (N--) {
			int x, y; cin >> x >> y;
			a[y][x] = true;
		}
		int x = 10, y = 10;
		int M; cin >> M;
		while (M--) {
			string d; int l; cin >> d >> l;
			int dx = 0, dy = 0;
			if (d == "N") dy = 1;
			if (d == "E") dx = 1;
			if (d == "S") dy = -1;
			if (d == "W") dx = -1;
			while (l--) {
				x += dx; y += dy;
				if (a[y][x]) {
					a[y][x] = false;
					cnt--;
				}
			}
		}
		cout << (cnt == 0 ? "Yes" : "No") << endl;
	}
}