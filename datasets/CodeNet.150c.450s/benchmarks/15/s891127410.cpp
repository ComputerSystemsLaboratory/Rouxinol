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
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;

int main() {
	int n,q;
	std::vector<int> s, t;
	std::cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		s.emplace_back(a);
	}
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		std::cin >> a;
		t.emplace_back(a);
	}
	int ans = 0;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (s[j] == t[i]) {
				ans++;
				break;
			}
		}
	}
	std::cout << ans << std::endl;
}