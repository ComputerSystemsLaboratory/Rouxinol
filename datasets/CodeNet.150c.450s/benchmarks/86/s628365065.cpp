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
	for (;;) {
		int N, M, P; cin >> N >> M >> P;
		if (N == 0) break;
		vector<int> X(N);
		for (int i = 0; i < N; i++) cin >> X[i];
		int sum = 0;
		for (int i = 0; i < N; i++) sum += X[i];
		sum *= 100 - P;
		cout << (X[M - 1] ? sum / X[M - 1] : 0) << endl;
	}
}