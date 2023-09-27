#include<iostream>
int main()
{
	while (true)
	{
		int hit = 0, blow = 0;
		int num[2][4];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				std::cin >> num[i][j];
			}
		}
		if (std::cin.eof())
		{
			break;
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (num[0][i] == num[1][j])
				{
					if (i == j)
					{
						hit++;
					}
					else
					{
						blow++;
					}
				}
			}
		}
		std::cout << hit << ' ' << blow << std::endl;
	}
	return 0;
}
