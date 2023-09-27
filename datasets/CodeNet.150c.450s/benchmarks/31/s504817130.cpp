#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

template<typename T>
T Input()
{
	T value;
	std::cin >> value;
	return value;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int num, max, min;
	std::vector<int> arr(200000);
	std::cin >> num;
	for (auto i = 0; i < num; ++i)
		arr[i] = Input<int>();
	min = arr[0];
	max = INT_MIN;
	for (auto i = 1; i < num; ++i)
	{
		max = std::max(max, arr[i] - min);
		min = std::min(min, arr[i]);
	}

	std::cout << max << "\n";

	return 0;
}