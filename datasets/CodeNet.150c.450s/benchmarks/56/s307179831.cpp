#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

template<class T>
T input()
{
	T val;
	std::cin >> val;
	return val;
}

int main()
{
	long long n, sum = 0;

	std::cin >> n;
	std::vector<long long> b;
	for (int i = 0; i < n; ++i)
		b.push_back(input<long long>()), sum += b[i];

	std::sort(b.begin(), b.end());

	std::cout << b[0] << " " << b[n-1] << " " << sum << std::endl;

	return 0;
}