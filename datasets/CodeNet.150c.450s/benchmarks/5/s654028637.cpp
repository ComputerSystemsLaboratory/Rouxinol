#include <iostream>
#include <vector>

int main(int argc, char const* argv[])
{
	int n,a;
	std::vector<int> ai;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		ai.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		if (i) {
			std::cout << " ";
		}
		std::cout << ai.back();
		ai.pop_back();
	}
	std::cout << std::endl;

	return 0;
}