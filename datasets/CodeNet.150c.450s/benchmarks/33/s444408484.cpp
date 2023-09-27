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
		int x, y, s; cin >> x >> y >> s;
		if (x == 0) break;
		int maxi = 0;
		for (int i = 1; i <= s - 1; i++)
			for (int j = 1; j <= s - 1; j++)
				if (i * (100 + x) / 100 + j * (100 + x) / 100 == s)
					maxi = max(maxi, i * (100 + y) / 100 + j * (100 + y) / 100);
		cout << maxi << endl;
	}
}