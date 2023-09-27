#include<iostream>
#include<vector>
int main() {
	std::vector<int> a;
	while (true) {
		int i;
		std::cin >> i;
		if (i == 0) {
			break;
		}
		a.push_back(i);
	}
	for (int x = 0; x < a.size(); ++x) {
		std::cout << "Case " << x + 1 << ": " << a[x] << std::endl;
	}
}