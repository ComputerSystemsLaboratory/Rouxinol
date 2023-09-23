#include <iostream>

int main() {
	int num;
	int T, K, H, N;	// ?£????????±??????¨?±???????
	std::cin >> num;

	int official_house[4][3][10] = { 0 };

	// ??\???
	for (int i = 0; i < num; i++)
	{
		std::cin >> T >> K >> H >> N;
		official_house[T-1][K-1][H-1] += N;
	}

	// ??????
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				std::cout << " " << official_house[i][j][k];
			}
			std::cout << std::endl;
		}
		if(i != 3) std::cout << "####################" << std::endl;
	}
	return 0;
}