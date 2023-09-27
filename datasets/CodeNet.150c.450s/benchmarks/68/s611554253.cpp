#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	while (std::cin >> n && n) {
		std::vector<int> a;
		int minLength = 10000000;

		//????????????????????\???
		for (int i = 0; i < n; i++) {
			int b;
			std::cin >> b;
			a.push_back(b);
		}

		std::sort(a.begin(), a.end());

		//????°???????????±???????
		for (int i = 0; i < a.size() - 1; i++) {
			minLength = std::min(a[i + 1] - a[i], minLength);
		}

		std::cout << minLength << std::endl;
	}
	return 0;
}