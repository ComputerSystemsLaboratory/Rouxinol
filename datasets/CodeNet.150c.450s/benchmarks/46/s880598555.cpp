#include <iostream>

int main(int argc, char** argv)
{
	while (true)
	{
		int n, x;
		std::cin >> n >> x;
		if (n == 0 && x == 0)
		{
			break;
		}

		int count = 0;
		for (int i = 1; i <= n - 2; ++i)
		{
			for (int j = i + 1; j <= n - 1; ++j)
			{
				for (int k = j + 1; k <= n; ++k)
				{
					if (i + k + j == x)
					{
						++count;
					}
				}
			}
		}

		std::cout << count << std::endl;
	}
	return 0;
}
