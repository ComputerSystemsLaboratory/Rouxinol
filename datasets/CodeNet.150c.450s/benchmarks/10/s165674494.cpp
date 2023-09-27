#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define all(a) (a).begin(), (a).end()

int main() {
	int n, a, b, c, d, v[4][3][10] = {};
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d;
		v[a - 1][b - 1][c - 1] += d;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 10; ++k) {
				cout << " " << v[i][j][k];
			}
			cout << endl;
		}
		if (i < 3)
			cout << string(20, '#') << endl;
	}

	return 0;
}
