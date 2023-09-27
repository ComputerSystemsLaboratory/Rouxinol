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

int n, k;
std::vector<long long> w;

int check(long long p) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		long long s = 0;
		while (s + w[i] <= p) {
			s += w[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}

int main() {
	std::cin >> n >> k;
	int a;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		w.emplace_back(a);
	}
	long long left = 0;
	long long right = 100000 * 10000;
	long long mid;
	while (right - left > 1) {
		mid = (left + right) / 2;
		int v = check(mid);
		if (v >= n)right = mid;
		else left = mid;
	}
	std::cout << right << std::endl;
}