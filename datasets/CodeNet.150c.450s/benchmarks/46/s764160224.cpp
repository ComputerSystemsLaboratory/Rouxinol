#include <iostream>

int main(int argc, char const* argv[])
{
	int n, x;

	while (std::cin >> n >> x)
	{
		if( n == 0 & x == 0)
			break;
		int count = 0;
		for (size_t i = 1; i <= n; i++)
			for (size_t j = i + 1; j <= n; j++)
				for (size_t k = j + 1; k <= n; k++)
					if(x - k == i + j)
						count++;

		std::cout << count << std::endl;
	}

	return 0;
}