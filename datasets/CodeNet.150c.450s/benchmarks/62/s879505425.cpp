#include <iostream>

int main(int argc, char const* argv[])
{
	int a = 0;
    int b = 0;
    int c = 0;
	std::cin >> a >> b >> c;

	if (a < b)
	{
		if (b < c)
			std::cout << a << " " << b << " " << c << std::endl;
		else if (a < c)
			std::cout << a << " " << c << " " << b << std::endl;
		else
			std::cout << c << " " << a << " " << b << std::endl;
	}
	else
	{
		if (a < c)
			std::cout << b << " " << a << " " << c << std::endl;
		else if ( b < c)
			std::cout << b << " " << c << " " << a << std::endl;
		else
			std::cout << c << " " << b << " " << a << std::endl;
	}

	return 0;
}