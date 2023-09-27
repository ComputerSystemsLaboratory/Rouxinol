#include<iostream>

int main()
{
	int n, count{};
	while (std::cin >> n)
	{
		count = 0;
		for (int a = 0; a < 10 && a <= n; ++a)
		{
			if (a + 27 < n) continue;
			for (int b = 0; b < 10 && a + b <= n; ++b)
			{
				if (a + b + 18 < n) continue;
				for (int c = 0; c < 10 && a + b + c <= n; ++c)
				{
					if (a + b + c + 9 < n) continue;
					count++;
				}
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}
