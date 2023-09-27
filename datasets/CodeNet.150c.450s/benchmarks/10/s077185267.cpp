#include <iostream>

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;

	int house[4][3][10] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		int b, f, r, v;
		std::cin >> b >> f >> r >> v;

		house[b - 1][f - 1][r - 1] += v;
	}

	for (int b = 0; b < 4; ++b)
	{
		for (int f = 0; f < 3; ++f)
		{
			for (int r = 0; r < 10; ++r)
			{
				std::cout << " ";
				std::cout << house[b][f][r];
			}
			std::cout << std::endl;
		}

		if (b < (4 - 1))
		{
			for (int i = 0; i < 20; ++i)
			{
				std::cout << "#";
			}
			std::cout << std::endl;
		}
	}
}
