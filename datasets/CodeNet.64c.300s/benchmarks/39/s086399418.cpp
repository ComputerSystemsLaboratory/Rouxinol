#include<iostream>
int main()
{
	int result[50];
	int num;
	for(int i = 0;; i++)
	{
		result[i] = 0;
		int n;
		std::cin >> n;
		if(std::cin.eof())
		{
			num = i;
			break;
		}
		for(int j = 0; j <= 9; j++)
		{
			for(int k = 0; k <= 9; k++)
			{
				for(int l = 0; l <= 9; l++)
				{
					for(int m = 0; m <= 9; m++)
					{
						if(j + k + l + m == n)
						{
							result[i]++;
						}
					}
				}
			}
		}
	}
	for(int i = 0; i < num; i++)
	{
		std::cout << result[i] << std::endl;
	}
	return 0;
}
