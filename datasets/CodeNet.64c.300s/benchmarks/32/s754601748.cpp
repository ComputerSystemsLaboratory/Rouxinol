#include <iostream>

int main(void)
{
	int n, a, min = 1000000, max = -1000000;
	long long sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cin >> a;
		if (a < min) {
			min = a;
		}
		if (max < a) {
			max = a;
		}
		sum += a;
	}
	std::cout << min << " " << max << " " << sum << std::endl;
	return 0;
}