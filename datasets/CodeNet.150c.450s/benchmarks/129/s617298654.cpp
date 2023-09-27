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
	int r, c; cin >> r >> c;
	vector< vector<int> > a(r + 1, vector<int>(c + 1));
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
		}
	for (int j = 0; j < c; j++)
		a[r][c] += a[r][j];
	for (int i = 0; i <= r; i++)
		for (int j = 0; j <= c; j++)
			cout << a[i][j] << (j < c ? ' ' : '\n');
}