#include <iostream>

int main(int argc, char** argv)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int count = 0;
	for (int i = a; i <= b; ++i)
	{
		if (c % i == 0)
		{
			++count;
		}
	}

	std::cout << count << std::endl;

	return 0;
}
