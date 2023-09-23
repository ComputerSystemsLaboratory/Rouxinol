#include <iostream>
#include <cmath>

int main()
{
	int e;
	while (std::cin >> e, e > 0) {
		int m = e;	// ツ可シツづ個値
		const int z_max = static_cast<int>(pow(static_cast<double>(e), 1. / 3.)) + 1;
		for (int z = 0; z <= z_max; ++z) {
			const int y_max = static_cast<int>(sqrt(static_cast<double>(e))) + 1;
			for (int y = 0; y < y_max; ++y) {
				const int x = e - y * y - z * z * z;
				if (x < 0) { break; }
				const int m_ = x + y + z;
				if (m_ < m) { m = m_; }
			}
		}
		std::cout << m << std::endl;
	}
	return 0;
}