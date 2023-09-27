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
	int n, x;
	while (cin >> n >> x && n > 0) {
		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				for (int k = j + 1; k <= n; ++k) {
					if (i + j + k == x)
						ans++;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
