#include <iostream>
#include <cmath>

bool IsPrimeNumber(int number) {
	if (number < 2) return false;
	if (number == 2) return true;
	if (number % 2 == 0) return false;
	int max = (int)std::sqrt(number);
	for (int i=3; i<=max; i+=2)
		if (number % i == 0)
			return false;
	return true;
}

int main() {
	int N[1000000] = {0};
	for (int i=1; i<=999999; i++) {
		if (IsPrimeNumber(i)) {
			N[i] = N[i-1] + 1;
		} else {
			N[i] = N[i-1];
		}
	}
	int n;
	while (std::cin >> n) {
		std::cout << N[n] << std::endl;
	}
	return 0;
}
