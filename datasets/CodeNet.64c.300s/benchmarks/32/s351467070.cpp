#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int min, max, temp;
	long sum;

	std::cin >> temp;

	min = temp;
	max = temp;
	sum = temp;

	for (int i = 0; i < n - 1; i++) {
		std::cin >> temp;
		sum += temp;
		if (temp > max) {
			max = temp;
		}
		if (temp < min) {
			min = temp;
		}
	}

	std::cout << min << " " << max << " " << sum << std::endl;

}