#include <iostream>

int main(int argc, char const* argv[])
{
	int top1 = 0, top2 = 0, top3 = 0;
	int input;

	for (size_t i = 0; i < 10; i++)
	{
		std::cin >> input;
		if(input > top1)
		{
			top3 = top2;
			top2 = top1;
			top1 = input;
		}
		else if (input > top2)
		{
			top3 = top2;
			top2 = input;
		}
		else if(input > top3)
			top3 = input;
	}

	std::cout << top1 << std::endl;
	std::cout << top2 << std::endl;
	std::cout << top3 << std::endl;
	return 0;
}