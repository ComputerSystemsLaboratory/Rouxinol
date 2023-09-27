#include<iostream>
int main()
{
	int n[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> n[i];
	}
	for (int i = 0; i < 5; i++)
	{
		int max = -100001, max_index = 0;
		for (int j = i; j < 5; j++)
		{
			if (max < n[j])
			{
				max = n[j];
				max_index = j;
			}
		}
		std::swap(n[i], n[max_index]);
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << n[i];
		if (i != 4)
		{
			std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return 0;
}
