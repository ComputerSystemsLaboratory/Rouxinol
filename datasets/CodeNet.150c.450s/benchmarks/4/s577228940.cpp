#include <iostream>

int main(int argc, char** argv)
{
	while (true)
	{
		int m, f, r;
		std::cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}

		char rank = 'F';
		if (m >= 0 && f >= 0)
		{
			int mf = m + f;
			if (mf >= 80) { rank = 'A'; }
			else if (mf >= 65) { rank = 'B'; }
			else if (mf >= 50 || r >= 50) { rank = 'C'; }
			else if (mf >= 30) { rank = 'D'; }
			else { rank = 'F'; }
		}

		std::cout << rank << std::endl;
	}

	return 0;
}
