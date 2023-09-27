#include <iostream>
#include <vector>

int main()
{
	int numGems = -1;

	while (true)
	{
		std::cin >> numGems;
		if (numGems == 0)
		{
			break;
		}
		const int gridSize = 21;
		std::vector<bool> gems(gridSize * gridSize, false);
		int gemPointX = 0;
		int gemPointY = 0;

		for (int i = 0; i < numGems; i++)
		{
			std::cin >> gemPointX;
			std::cin >> gemPointY;

			gems[gemPointY * gridSize + gemPointX] = true;
		}

		int numOrders = 0;
		std::cin >> numOrders;

		char direction = ' ';
		int distance = 0;
		std::pair<int, int> currentPoint(10, 10);

		for (int i = 0; i < numOrders; i++)
		{
			std::cin >> direction;
			std::cin >> distance;

			switch (direction)
			{
			case 'N':
				for (int i = 0; i < distance; i++)
				{
					currentPoint.second += 1;
					gems[currentPoint.second * gridSize + currentPoint.first] = false;
				}
				break;
			case 'E':
				for (int i = 0; i < distance; i++)
				{
					currentPoint.first += 1;
					gems[currentPoint.second * gridSize + currentPoint.first] = false;
				}
				break;
			case 'S':
				for (int i = 0; i < distance; i++)
				{
					currentPoint.second -= 1;
					gems[currentPoint.second * gridSize + currentPoint.first] = false;
				}
				break;
			case 'W':
				for (int i = 0; i < distance; i++)
				{
					currentPoint.first -= 1;
					gems[currentPoint.second * gridSize + currentPoint.first] = false;
				}
				break;
			default:
				break;
			}
		}

		bool isAllGemCorrected = true;
		for (int i = 0; i < gridSize * gridSize; i++)
		{
			isAllGemCorrected = isAllGemCorrected && !gems[i];
		}
		if (isAllGemCorrected)
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}
	return 0;
}