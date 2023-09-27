# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
using namespace std;
using LL = long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = 1000000000;
const double PI = acos(-1);

int main() {
	int n, m, p;
	while (cin >> n >> m >> p&&n) {
		int x[1001] = {};
		int sum = 0;
		int t;
		for (int i = 1; i <= n; i++) {
			cin >> x[i];
			sum += x[i];
			if (i == m)t = x[i];
		}
		if (t == 0) {
			cout << 0 << endl;
		}
		else {
			cout << sum * (100 - p) / t << endl;
		}
	}
}