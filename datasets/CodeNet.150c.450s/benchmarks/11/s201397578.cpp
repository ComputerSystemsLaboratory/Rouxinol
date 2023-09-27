#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cstring>
#include <climits>
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
 
int MOD = 1000000007;

int main() {
	vector<bool> s(14), h(14), c(14), d(14);
	int n; cin >> n;
	while (n--) {
		string t; int i; cin >> t >> i;
		if (t == "S") s[i] = true;
		if (t == "H") h[i] = true;
		if (t == "C") c[i] = true;
		if (t == "D") d[i] = true;
	}
	for (int i = 1; i <= 13; i++)
		if (!s[i]) cout << "S " << i << endl;
	for (int i = 1; i <= 13; i++)
		if (!h[i]) cout << "H " << i << endl;
	for (int i = 1; i <= 13; i++)
		if (!c[i]) cout << "C " << i << endl;
	for (int i = 1; i <= 13; i++)
		if (!d[i]) cout << "D " << i << endl;
}