#include<iostream>
#include<vector>

int main()
{
	int n;
	std::vector<int> vec;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int m;
		std::cin >> m;
		vec.push_back(m);
	}

	for (int j = n - 1; j >= 0; j--) {
		std::cout << vec[j];
		if (j != 0)
			std::cout << " ";
	}
	std::cout << std::endl;
}