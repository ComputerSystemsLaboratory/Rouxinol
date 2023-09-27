#include<iostream>

int main()
{
	int debt = 100000, n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		debt *= 1.05;
		if (debt % 1000)
			debt = debt - debt % 1000 + 1000;
	}

	std::cout << debt << std::endl;

	return 0;
}
