#include <iostream>

int main()
{
	int n;
	int residentNums[4][3][10] = {};
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int building;
		int floor;
		int room;
		int residentNum;
		std::cin >> building >> floor >> room >> residentNum;
		residentNums[building-1][floor-1][room-1] += residentNum;
	}
	for (int b = 0; b < 4; b++)
	{
		if (b > 0)
		{
			std::cout << "####################" << '\n';
		}
		for (int f = 0; f < 3; f++)
		{
			for (int r = 0; r < 10; r++)
			{
				std::cout << " " << residentNums[b][f][r];
				if (r == 9)
				{
					std::cout << '\n';
				}

			}
		}
	}

	return 0;
}