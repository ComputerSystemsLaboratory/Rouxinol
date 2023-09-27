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

string mcxi(int x) {
	string s = ""; int y;
	y = x % 10;
	if (y) s += 'i';
	if (y >= 2) s += y + '0';
	x /= 10;
	y = x % 10;
	if (y) s += 'x';
	if (y >= 2) s += y + '0';
	x /= 10;
	y = x % 10;
	if (y) s += 'c';
	if (y >= 2) s += y + '0';
	x /= 10;
	y = x % 10;
	if (y) s += 'm';
	if (y >= 2) s += y + '0';
	x /= 10;
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	map<string, int> m;
	for (int x = 1; x <= 9999; x++)
		m[mcxi(x)] = x;
	int n; cin >> n;
	while (n--) {
		string s, t; cin >> s >> t;
		cout << mcxi(m[s] + m[t]) << endl;
	}
}