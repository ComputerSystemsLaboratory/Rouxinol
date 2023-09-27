#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

int main()
{
	int n;
	std::cin >> n;
	std::vector<long> vec;
	for (int i = 0; i < n; i++) {
		long x;
		std::cin >> x;
		vec.push_back(x);
	}
	std::cout << *std::min_element(vec.begin(), vec.end()) << " ";
	std::cout << *std::max_element(vec.begin(), vec.end()) << " ";
	std::cout << std::accumulate(vec.begin(), vec.end(), 0L) << std::endl;
}