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
	int m; cin >> m;
	while (m--) {
		string s; cin >> s;
		set<string> st;
		for (int i = 1; i < s.length(); i++) {
			string a = s.substr(0, i), b = s.substr(i);
			st.insert(a + b); st.insert(b + a);
			reverse(a.begin(), a.end());
			st.insert(a + b); st.insert(b + a);
			reverse(b.begin(), b.end());
			st.insert(a + b); st.insert(b + a);
			reverse(a.begin(), a.end());
			st.insert(a + b); st.insert(b + a);
		}
		cout << st.size() << endl;
	}
}