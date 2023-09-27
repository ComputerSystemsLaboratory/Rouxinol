#include<iostream>
#include<vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);

	for (int i = 1; i <= vec.size(); i++) {
		if (i % 3 == 0) {
			std::cout << " " << i;
			continue;
		}
		int j = i;
		while (j > 0) {
			if (j % 10 == 3) {
				std::cout << " " << i;
				break;
			}
			else
				j /= 10;
		}
	}
	std::cout << std::endl;
}