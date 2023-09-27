#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>
#include <algorithm>


int main(void)
{
	int n, t;
	int sum = 0;
	std::cin >> n >> t;
	std::vector<int> arr(n);
	for (auto&a : arr) {
		std::cin >> a;
		sum += a;
	}
	sum /= t;
	int max = *std::max_element(arr.begin(), arr.end());
	if (sum > max) max = sum;
	while (true)
	{
		int sum = 0;
		int c = 1;
		for (auto a : arr) {
			sum += a;
			if (sum > max) {
				c++;
				if (c > t) break;
				sum = a;
			}
		}
		if (c > t) {
			max++;
			continue;
		}
		else break;

	}

	std::cout << max << std::endl;

	return 0;
}