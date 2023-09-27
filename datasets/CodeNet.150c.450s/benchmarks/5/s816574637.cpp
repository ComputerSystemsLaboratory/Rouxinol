#include <iostream>

int main(int argc, char const* argv[])
{
	int input_array[100];
	int len;

	std::cin >> len;
	for (size_t i = 0; i < len; i++)
		std::cin >> input_array[i];

	for (size_t i = 0; i < len; i++)
	{
		std::cout << input_array[len - 1 - i];
		if( i != len - 1)
			std::cout << " ";
	}
    std::cout << std::endl;
	return 0;
}