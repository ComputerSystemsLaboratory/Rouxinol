#include <iostream>
#include <vector>

void InsertionSort(std::vector<int>& arr)
{
	int j;
	for (auto i = 0; i < arr.size();++i)
	{
		std::cout << arr[i];
		if (i != arr.size() - 1)
			std::cout << " ";
		else
			std::cout << "\n";
	}

	for (auto i = 1; i < arr.size(); ++i)
	{
		int v = arr[i];
		j = i - 1;
		while (j>=0&&arr[j]>v)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = v;
		for (auto i = 0; i < arr.size(); ++i)
		{
			std::cout << arr[i];
			if (i != arr.size() - 1)
				std::cout << " ";
			else
				std::cout << "\n";
		}
	}
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
	std::vector<int> vec;
	int num;
	std::cin >> num;
	for (auto i = 0; i < num; ++i)
		vec.push_back(Input<int>());

	InsertionSort(vec);

	return 0;
}