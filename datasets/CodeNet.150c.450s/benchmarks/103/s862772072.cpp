#include <iostream>

int solve(int element_count, int sum, int range_max)
{
	if (element_count <= 1) {
		return (element_count == 1 && range_max >= sum) ? 1 : 0;
	}
	int result = 0;
	for (int max_element = element_count - 1; max_element <= range_max; ++max_element) {
		if (sum - max_element >= 0) {
			result += solve(element_count - 1, sum - max_element, max_element - 1);
		}
	}
	return result;
}

int main()
{
	int element_count, sum;
	while (std::cin >> element_count >> sum) {
		if (element_count == 0 && sum == 0) {
			break;
		}
		std::cout << solve(element_count, sum, 9) << std::endl;
	}

	return 0;
}