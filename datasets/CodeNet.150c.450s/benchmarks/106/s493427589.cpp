#include <iostream>

int main() {
	int a, b, c;
	int count = 0;
	std::cin >> a >> b >> c;

	for (int i = 0; i < (b - a + 1); i++) {
		if (c%(a + i)== 0) {
			count++;
		}
	}

	std::cout << count << std::endl;



}
