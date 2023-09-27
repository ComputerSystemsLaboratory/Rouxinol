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
	vector<int> sum(1001);
	for (int i = 1; i <= 1000; i++)
		sum[i] = sum[i - 1] + i;
	vector<int> a(1001);
	for (int i = 0; i <= 1000; i++)
		for (int j = i + 2; j <= 1000; j++) {
			int x = sum[j] - sum[i];
			if (x <= 1000) a[x]++;
		}
	for (;;) {
		int N; cin >> N;
		if (N == 0) break;
		cout << a[N] << endl;
	}
}