#include <iostream>
#include <vector>
#include <algorithm>

int comp_count(const int &left, const int & right) {
	if (left + 1 < right) {
		return (right - left) + comp_count(left, (left + right) / 2) + comp_count((left + right) / 2, right);
	}
	else {
		return 0;
	}
}
int main() {
	int n;
	std::cin >> n;
	std::vector<int> vector(n);
	for (auto &v : vector) {
		std::cin >> v;
	}
	sort(vector.begin(), vector.end());
	std::cout << vector.at(0);
	for (auto i = 1; i < n; ++i) {
		std::cout << " " << vector.at(i);
	}
	std::cout << std::endl << comp_count(0, n) << std::endl;
	return 0;
}