#include <iostream>

void call(int n);

int main()
{
	int n;
	std::cin >> n;
	call(n);
	return 0;
}

void call(int n)
{
	int i = 1;
	while (i <= n) 
	{
		int x = i;
		if (x % 3 == 0 || x % 10 == 3)
		{
			std::cout << " " << i;
		}
		else
		{
			while (x % 10 != 3)
			{
				x /= 10;
				if (x == 0)
				{
					break;
				}
				else
				{
					if (x % 10 == 3)
					{
						std::cout << " " << i;
					}
				}
			}
		}
		i++;
	}
	std::cout << '\n';
}