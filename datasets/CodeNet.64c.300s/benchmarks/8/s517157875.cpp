#include <iostream>

void call(int n);

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	call(n);
}

void call(int n)
{
	int i = 1;
	while (true)
	{
		int x = i;
		if (x % 3 == 0)
		{
			std::cout << " " << i;
		}
		else
		{
			while (true)
			{
				if (x % 10 == 3)
				{
					std::cout << " " << i;
					break;
				}

				x /= 10;

				if (!x)
				{
					break;
				}
			}
		}

		if (++i > n)
		{
			break;
		}
	}

	std::cout << std::endl;
}
