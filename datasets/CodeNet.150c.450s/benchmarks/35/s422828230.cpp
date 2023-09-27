#include<iostream>
#include<vector>
int main()
{
	while (!std::cin.eof())
	{
		int n;
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		std::vector<int>a(n);
		for (auto&i : a)
		{
			std::cin >> i;
		}
		int max = -100001;
		for (int i = 0; i < n; i++)
		{
			int max_temp = 0;
			for (int j = 0; j < n - i; j++)
			{
				max_temp += a[i + j];
				if (max < max_temp)
				{
					max = max_temp;
				}
			}
		}
		std::cout << max << std::endl;
	}
	return 0;
}
