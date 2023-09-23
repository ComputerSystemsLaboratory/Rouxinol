#include <iostream>
#include <string>
int main() {
	int num;	// ??¨????????????????????°????¨????
	std::cin >> num;

	char *Mark = new char[num];
	int *Num = new int[num];
	// ????????¶???
	int Trump[4][13] = { 0 };

	// ????????????
	for (int i = 0; i < num; i++)
	{
		std::cin >> Mark[i] >> Num[i];
	}


	// ??????????????°
	for (int i = 0; i < num; i++)
	{
		if (Mark[i] == 'S')
		{
			Trump[0][Num[i] - 1] = 1;
		}
		else if (Mark[i] == 'H') {
			Trump[1][Num[i] - 1] = 1;
		}
		else if (Mark[i] == 'C') {
			Trump[2][Num[i] - 1] = 1;
		}
		else if (Mark[i] == 'D') {
			Trump[3][Num[i] - 1] = 1;
		}
	}

	// ??????
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (Trump[i][j] == 0) {
				switch (i)
				{
				case 0:
					std::cout << "S ";
					break;
				case 1:
					std::cout << "H ";
					break;
				case 2:
					std::cout << "C ";
					break;
				case 3:
					std::cout << "D ";
					break;
				default:
					break;
				}
				std::cout << j + 1 << std::endl;
			}
		}
	}
	return 0;
}