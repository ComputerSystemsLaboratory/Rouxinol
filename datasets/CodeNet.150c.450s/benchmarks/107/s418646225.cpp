#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <tuple>
#include <bitset>
#include <memory>
#include <cmath>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <numeric>
#include <climits>
#include <cfloat>

int edit_distance(const std::string& a, const std::string& b) {
	std::vector<std::vector<int>> memo(2, std::vector<int>(a.size() + 1, 0));
	for (auto i = 0; i <= a.size(); ++i) memo[1][i] = i;
	for (auto i = 0; i < b.size(); ++i) {
		memo[i % 2][0] = memo[(i + 1) % 2][0] + 1;
		for (auto j = 0; j < a.size(); ++j) {
			if (a[j] == b[i]) {
				memo[i % 2][j + 1] = memo[(i + 1) % 2][j];
			}
			else {
				memo[i % 2][j + 1] = std::min({ memo[(i + 1) % 2][j] + 1, memo[i % 2][j] + 1, memo[(i + 1) % 2][j + 1] + 1 });
			}
		}
	}
	return memo[(b.size() + 1) % 2].back();
}

int main() {
	std::string from, to; std::cin >> from >> to;
	std::cout << edit_distance(from, to) << std::endl;
}

