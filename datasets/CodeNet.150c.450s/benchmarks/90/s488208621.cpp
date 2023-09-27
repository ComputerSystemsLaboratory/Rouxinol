#include<iostream>
int main()
{
	int appear[100];
	for (int i = 0; i < 100; i++)
	{
		appear[i] = 0;
	}
	int max = 0;
	for (int num; std::cin >> num;)
	{
		appear[num - 1]++;
		if (max < appear[num - 1])
		{
			max = appear[num - 1];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (appear[i] == max)
		{
			std::cout << i + 1 << std::endl;
		}
	}
	return 0;
}
