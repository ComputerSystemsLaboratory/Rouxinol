#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int height;
	std::vector<int> heights;

	while (std::cin >> height) {
		heights.push_back(height);
	}
	std::sort(heights.begin(), heights.end());
	std::reverse(heights.begin(), heights.end());
	for (int i = 0; i < 3; ++i) {
		std::cout << heights.at(i) << std::endl;
	}

	return 0;
}