#include <iostream>
#include <string>
int main()
{
	std::string number;
	while (std::getline(std::cin,number)){
		int count = 0, c = 0;
		int a = number[0] - '0';
		if (a == 0)break;
		for (int dd = 0; dd < number.size();dd++){
			char b = number[dd];
			c = b - '0';
			count = count + c;
		}
		std::cout << count << std::endl;
		number.clear();
	}
}