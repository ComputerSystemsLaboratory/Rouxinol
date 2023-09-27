#include <iostream>

int main(int argc, char const *argv[])
{
	int num;
	int index = 0;

	while (1) {
		std::cin >> num;
		if (num == 0) {
			break;
		}
		index++;
		std::cout << "Case " << index << ": " << num << std::endl;
	}

	return 0;
}