#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n + 1, 0);
	for (int x = 1; x < 100; x++)
	{
		for (int y = 1; y < 100; y++)
		{
			for (int z = 1; z < 100; z++)
			{
				int value = x * x + y * y + z * z + x * y + y * z + z * x;
				if (value <= n)
					++a[value];
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		std::cout  << a[i] << '\n';
	}
	return 0;
}