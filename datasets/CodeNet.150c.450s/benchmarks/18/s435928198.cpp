#include <math.h>
#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int loan = 100000;
	for (int i = 0; i < n; i++) {
		loan *= 1.05;
		if (int tmp = loan % 1000)
			loan += 1000 - tmp;
	}
	std::cout << loan << std::endl;
}