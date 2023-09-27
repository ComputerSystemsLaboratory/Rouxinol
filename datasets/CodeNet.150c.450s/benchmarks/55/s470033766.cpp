#include "iostream"
#include "string"
#include <stdio.h>

int main()
{

	std::string num;
	int i = 0;
	int s;
	int sum = 0;

	while (1) {
		std::cin >> num;
		if (num == "0")
			break;

		s = num.size();

		while (i < s) {
			sum += (num[i] - '0');
			i++;
		}
		std::cout << sum << std::endl;
		sum = i = 0;
	}
	return 0;
}