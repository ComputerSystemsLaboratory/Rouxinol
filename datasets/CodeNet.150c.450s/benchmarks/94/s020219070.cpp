#include <iostream>
#include <vector>
#include <algorithm>

int BubbleSort(std::vector<int>& arr)
{
	bool flag = true;
	int count = 0;
	while (flag)
	{
		flag = false;
		for (auto i = arr.size()-1; i >= 1; --i)
		{
			if (arr[i] < arr[i - 1])
			{
				std::swap(arr[i], arr[i - 1]);
				flag = true;
				++count;
			}
		}
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
	std::vector<int> arr;
	int num, count;
	std::cin >> num;
	for (auto i = 0; i < num; ++i)
		arr.push_back(Input<int>());

	count = BubbleSort(arr);

	for (auto i = 0; i < num;++i)
		std::cout << arr[i] << (i!=num-1? " ":"");
	std::cout << "\n" << count << "\n";
	return 0;
}