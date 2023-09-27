#include <iostream>
#include <string>

int main()
{
	std::string x;
	std::cin >> x;

	int sum;

	while (x != "0") {

		sum = 0;
		for (unsigned int i = 0; i < x.length(); i++) {
			sum += std::stoi(x.substr(i, 1));
		}

		std::cout << sum << std::endl;
		std::cin >> x;
	}
}