#include<iostream>
#include<iomanip>
int main()
{
	double result[2000][2];
	int num;
	for(int i = 0;; i++)
	{
		double a, b, c, d, e, f;
		std::cin >> a >> b >> c >> d >> e >> f;
		if(std::cin.eof())
		{
			num = i;
			break;
		}
		result[i][0] = (b * f - c * e) / (b * d - a * e);
		result[i][1] = (c * d - a * f) / (b * d - a * e);
		for(int j = 0; j < 2; j++)
		{
			if(result[i][j] == -0)
			{
				result[i][j] = 0;
			}
		}
	}
	std::cout << std::fixed << std::setprecision(3);
	for(int i = 0; i < num; i++)
	{
		std::cout << result[i][0] << ' ' << result[i][1] << std::endl;
	}
	return 0;
}
