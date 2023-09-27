#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1;; j *= 10)
		{
			const int i_rownddowned = i / j;
			const int digit = i_rownddowned % 10;
			if(i_rownddowned == 0)
			{
				break;
			}
			else if(i % 3 == 0 || digit == 3)
			{
				std::cout << ' ' << i;
				break;
			}
		}
	}
	std::cout << std::endl;
}
