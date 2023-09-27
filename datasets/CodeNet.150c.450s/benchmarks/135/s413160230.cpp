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
double EPS = 1e-9;

int main() {
	for (;;) {
		int N, M; cin >> N >> M;
		if (N == 0 && M == 0) break;
		vector<int> h(N), w(M);
		for (int i = 0; i < N; i++) cin >> h[i];
		for (int j = 0; j < M; j++) cin >> w[j];
		vector<int> hsum(N + 1), wsum(M + 1);
		for (int i = 1; i <= N; i++) hsum[i] = hsum[i - 1] + h[i - 1];
		for (int j = 1; j <= M; j++) wsum[j] = wsum[j - 1] + w[j - 1];
		map<int, int> m;
		for (int j = 0; j <= M; j++)
			for (int _j = j + 1; _j <= M; _j++)
				m[wsum[_j] - wsum[j]]++;
		ll cnt = 0;
		for (int i = 0; i <= N; i++)
			for (int _i = i + 1; _i <= N; _i++)
				cnt += m[hsum[_i] - hsum[i]];
		cout << cnt << endl;
	}
}