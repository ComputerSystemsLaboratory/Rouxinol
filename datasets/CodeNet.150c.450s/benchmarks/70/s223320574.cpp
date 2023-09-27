#include<iostream>
int main()
{
	while (true)
	{
		int passed = 0;
		int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		int m, d;
		std::cin >> m >> d;
		if (m == 0)
		{
			break;
		}
		for (int i = 0; i < m - 1; i++)
		{
			passed += days[i];
		}
		passed += d - 1;
		switch (passed % 7)
		{
		case 0:
			std::cout << "Thursday" << std::endl;
			break;
		case 1:
			std::cout << "Friday" << std::endl;
			break;
		case 2:
			std::cout << "Saturday" << std::endl;
			break;
		case 3:
			std::cout << "Sunday" << std::endl;
			break;
		case 4:
			std::cout << "Monday" << std::endl;
			break;
		case 5:
			std::cout << "Tuesday" << std::endl;
			break;
		case 6:
			std::cout << "Wednesday" << std::endl;
			break;
		}
	}
	return 0;
}
