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
	int n, m; cin >> n >> m;
	vector< vector<int> > a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> a[i][j];
	vector<int> b(m);
	for (int j = 0; j < m; j++) cin >> b[j];
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++)
			sum += a[i][j] * b[j];
		cout << sum << endl;
	}
}