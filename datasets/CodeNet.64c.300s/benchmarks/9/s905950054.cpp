#include<iostream>
#include<cmath>

int main()
{
	int n;
	double debt;
	while (std::cin >> n)
	{
		debt = 100000;
		for (int i = 0; i < n; ++i)
		{
			debt += debt / 20;
			debt /= 1000;
			debt = std::ceil(debt);
			debt *= 1000;
		}
		std::cout << static_cast<long>(debt) << std::endl;
	}
	return 0;
}