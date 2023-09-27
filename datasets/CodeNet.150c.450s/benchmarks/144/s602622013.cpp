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

ll a[100][100], b[100][100], s;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < l; ++j)
			cin >> b[i][j];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < l; ++j) {
			s = 0;
			for (int k = 0; k < m; ++k) {
				s += a[i][k] * b[k][j];
			}
			cout << s;
			if (j < l - 1)
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}
