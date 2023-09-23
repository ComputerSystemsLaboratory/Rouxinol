#include <iostream>

int area(int n, int m);

int main()
{

	int n;

	while (std::cin >> n)
	{
		std::cout << area(n, 600) << std::endl;
	}


}

int area(int n, int m)
{
	int area = 0;
	while (m > 0)
	{
		area += (m - n) * (m - n) * n;
		m -= n;
	}

	return area;
}
