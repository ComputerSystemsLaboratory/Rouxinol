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
			do {
				if (x % 10 == 3)
				{
					std::cout << " " << i;
					break;
				}
				x /= 10;
			} while (x != 0);
		}
		i++;
	}
	std::cout << '\n';
}