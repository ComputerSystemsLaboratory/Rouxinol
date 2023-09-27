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

void hoge(int& y, int& m, int& d) {
	d++;
	int x = (y % 3 != 0 && m % 2 == 0) ? 19 : 20;
	if (d <= x) return;
	d = 1;
	m++;
	if (m <= 10) return;
	m = 1;
	y++;
}

int main() {
	int n; cin >> n;
	while (n--) {
		int Y, M, D; cin >> Y >> M >> D;
		int cnt = 0;
		while (Y < 1000) {
			hoge(Y, M, D);
			cnt++;
		}
		cout << cnt << endl;
	}
}