#include <vector>
#include <algorithm>
#include <iostream>

int main() {
	std::vector<int> array;
	for (int i = 0; i < 5; ++i) {
		int input;
		std::cin >> input;
		array.push_back(input);
	}
	std::sort(array.begin(), array.end());
	for (std::vector<int>::reverse_iterator it = array.rbegin();;) {
		std::cout << *it;
		++it;
		if (it == array.rend()) { break; }
		std::cout << ' ';
	}
	std::cout << '\n';
	return 0;
}