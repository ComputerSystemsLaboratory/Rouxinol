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
	int n, m, l; cin >> n >> m >> l;
	vector< vector<ll> > a(n, vector<ll>(m)), b(m, vector<ll>(l)), c(n, vector<ll>(l));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int j = 0; j < m; j++)
		for (int k = 0; k < l; k++)
			cin >> b[j][k];
	for (int i = 0; i < n; i++)
		for (int k = 0; k < l; k++)
			for (int j = 0; j < m; j++)
				c[i][k] += a[i][j] * b[j][k];
	for (int i = 0; i < n; i++)
		for (int k = 0; k < l; k++)
			cout << c[i][k] << (k + 1 < l ? ' ' : '\n');
}