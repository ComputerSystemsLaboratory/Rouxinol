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
	vector<bool> p(1000000, true);
	p[0] = p[1] = false;
	for (int i = 2; i < 1000000; i++)
		if (p[i])
			for (int j = i * 2; j < 1000000; j += i)
				p[j] = false;
	for (;;) {
		int a, d, n; cin >> a >> d >> n;
		if (a == 0) break;
		for (int i = 0; i < n; i++) {
			while (!p[a]) a += d;
			a += d;
		}
		cout << a - d << endl;
	}
}