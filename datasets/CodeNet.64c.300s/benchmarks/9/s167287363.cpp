#include <iostream>

int main() {
	int n; std::cin >> n;
	int debt = 100000;
	for (int i=0; i<n; i++) {
		debt *= 1.05;
		if (debt % 1000 > 0)
			debt = debt - (debt % 1000) + 1000;
	}
	std::cout << debt << std::endl;
	return 0;
}
