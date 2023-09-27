#include <iostream>

int main(int argc, char const* argv[])
{
	int room[4][3][10] = {};
	int b, f, r, v;

	int input;
	std::cin >> input;

	for (size_t i = 0; i < input; i++)
	{
		std::cin >> b >> f >> r >> v;
		room[b - 1][f - 1][r - 1] += v;
	}

	for (size_t ib = 0; ib < 4; ib++)
	{
		for (size_t jf = 0; jf < 3; jf++)
		{
			for (size_t kr = 0; kr < 10; kr++)
				std::cout << " " << room[ib][jf][kr];

			std::cout << std::endl;
		}
		if(ib != 3)
			std::cout << "####################" << std::endl;
	}

	return 0;
}