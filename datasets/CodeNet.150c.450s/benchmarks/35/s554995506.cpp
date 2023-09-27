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
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;

int main() {
	int n;
	int ans;
	while (cin >> n&&n) {
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		ans = p[0];
		for (int i = 0; i < n; i++) {
			int num = 0;
			for (int j = i; j < n; j++) {
				num += p[j];
				ans = max(ans, num);
			}
		}
		cout << ans << endl;
	}
}