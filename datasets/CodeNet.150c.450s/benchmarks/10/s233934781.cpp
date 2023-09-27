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
	vector< vector< vector<int> > > a(4, vector< vector<int> >(3, vector<int>(10)));
	int n; cin >> n;
	while (n--) {
		int b, f, r, v; cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++)
				cout << ' ' << a[i][j][k];
			cout << endl;
		}
		if (i + 1 < 4) cout << "####################" << endl;
	}
}