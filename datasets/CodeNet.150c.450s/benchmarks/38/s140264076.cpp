# include <iostream>
# include <algorithm>
# include <cmath>

int n;
int edge[3];

int main() {
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; ++j)
			std::cin >> edge[j];
		std::sort(edge, edge + 3);
		if (pow(edge[2],2)==pow(edge[1],2)+pow(edge[0],2))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
		return 0;
}