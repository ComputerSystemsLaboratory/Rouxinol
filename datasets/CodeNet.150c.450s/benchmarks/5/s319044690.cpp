#include <iostream>

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;

	int a[100];
	for (int i = 0; i < n; ++i)
	{ 
		std::cin >> a[i];
	}

	for (int i = n - 1; i > 0; --i)
	{
		std::cout << a[i] << " ";
	}

	std::cout << a[0] << std::endl;
}
