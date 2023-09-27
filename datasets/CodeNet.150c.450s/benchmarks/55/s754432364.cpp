#include<iostream>
#include<string>

int main()
{

	while (true) {
		std::string x;
		std::cin >> x;
		if (x == "0") break;

		int sum = 0;
		for (int i = 0; i < x.size()
			; i++) {
			sum += x[i] - '0';
		}
		std::cout << sum << std::endl;
	}
}