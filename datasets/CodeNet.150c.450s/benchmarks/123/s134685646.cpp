#include <iostream>
#include <vector>

template<typename T>
T Input()
{
	T value;
	std::cin >> value;
	return value;
}

int main()
{
	std::vector<bool> isPrime(100000001);
	for (auto i = 0; i < 100000000; ++i)
		isPrime[i] = false;

	for (auto i = 3; i <= 100000000; i += 2)
		isPrime[i] = true;

	isPrime[2] = true;

	for (auto i = 3; i*i <= 100000000; i += 2)
		if (isPrime[i] == true)
			for (auto j = i*i; j <= 100000000; j += i)
				isPrime[j] = false;

	int num, count = 0;
	std::vector<int> arr;

	std::cin >> num;

	for (auto i = 0; i < num; ++i)
		arr.push_back(Input<int>());

	for (auto elem : arr)
		if (isPrime[elem])
			++count;

	std::cout << count << "\n";

	return 0;
}