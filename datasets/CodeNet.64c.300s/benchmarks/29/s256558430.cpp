#include <iostream>
#include <algorithm>

int main()
{
	int energy;

	while (std::cin >> energy, energy)
	{
		int sol = 1e+9;

		for (int z = 0; z * z * z <= energy; z++)
		{
			for (int y = 0, yMax = energy - z * z * z; y * y <= yMax; y++)
			{
			//	int y = ::sqrt(energy - z * z * z);
				sol = std::min(sol, z + y + (energy - z * z * z - y * y));
			}
		}

		std::cout << sol << std::endl;
	}

	return(0);
}