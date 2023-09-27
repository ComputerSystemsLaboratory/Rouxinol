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
	vector<string> v(9);
	v[0] = ".,!? ";
	v[1] = "abc";
	v[2] = "def";
	v[3] = "ghi";
	v[4] = "jkl";
	v[5] = "mno";
	v[6] = "pqrs";
	v[7] = "tuv";
	v[8] = "wxyz";
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		int _i = -1, _j = -1;
		for (int k = 0; k < s.length(); k++) {
			int i = s[k] - '0';
			if (i == 0) {
				if (_i != -1) {
					cout << v[_i][_j];
					_i = -1; _j = -1;
				}
			}
			else {
				_i = i - 1;
				_j = (_j + 1) % v[_i].length();
			}
		}
		cout << endl;
	}
}