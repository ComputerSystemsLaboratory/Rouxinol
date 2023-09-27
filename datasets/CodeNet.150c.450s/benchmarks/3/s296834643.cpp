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
	string s; cin >> s;
	int q; cin >> q;
	while (q--) {
		string t; int a, b; cin >> t >> a >> b;
		if (t == "print")
			cout << s.substr(a, b - a + 1) << endl;
		if (t == "reverse")
			for (; a < b; a++, b--) swap(s[a], s[b]);
		if (t == "replace") {
			string p; cin >> p;
			for (int i = 0; i < p.length(); i++)
				s[a + i] = p[i];
		}
	}
}