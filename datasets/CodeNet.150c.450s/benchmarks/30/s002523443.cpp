#include <iostream>
#include <vector>
#include <algorithm>

int SelectionSort(std::vector<int>& arr)
{
	int count = 0;
	int min;
	for (auto i = 0; i < arr.size(); ++i)
	{
		min = i;
		for (auto j = i; j < arr.size(); ++j)
			if (arr[j] < arr[min])
				min = j;
		if (i != min)
			++count;
		std::swap(arr[i], arr[min]);
	}
	return count;
}

template<typename T>
T Input()
{
	T value;
	std::cin >> value;
	return value;
}

int main()
{
	int num, count;
	std::vector<int> arr;
	std::cin >> num;
	for (auto i = 0; i < num; ++i)
		arr.push_back(Input<int>());

	count = SelectionSort(arr);

	for (auto i = 0; i < num; ++i)
		std::cout << arr[i] << (i != num - 1 ? " " : "");
	std::cout << "\n" << count << "\n";

	return 0;
}