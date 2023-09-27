#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, c;

	while (std::cin >> n) {
		std::vector<int> nums;
		++n;
		c = 0;
		for (int i = 0; i < n; ++i) {
			nums.push_back(i);
		}
		for (int i = 0; i < n; ++i) {
			if (nums.at(i) < 2) continue;
			for (int j = nums.at(i) * 2; j < n; j += nums.at(i)) {
				nums.at(j) = 0;
			}
		}
		for (int i = 0; i < n; ++i) {
			if (nums.at(i) > 1) {
				++c;
			}
		}
		std::cout << c << std::endl;
	}
	return 0;
}