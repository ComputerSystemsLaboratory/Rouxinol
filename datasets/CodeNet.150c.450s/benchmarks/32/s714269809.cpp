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
	int m, nmin, nmax;
	while (cin >> m >> nmin >> nmax&&m) {
		vector<int>v;
		for (int i = 0; i < m; i++) {
			int a;
			cin >> a;
			v.emplace_back(a);
		}
		sort(v.begin(), v.end(), greater<int>());
		nmin--, nmax--;
		int gap = 0;
		int ans = 0;
		for (int i = nmin; i <= nmax; i++) {
			if (gap <= v[i] - v[i + 1]) {
				gap = v[i] - v[i + 1];
				ans = i;
			}
		}
		cout << ans+1 << endl;
	}
}