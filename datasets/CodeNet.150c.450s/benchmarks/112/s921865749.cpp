#include<iostream>
#include<vector>
int main() {
	while (1) {
		int n;
		std::cin >> n;
		if (n == 0)break;
		std::vector<char>before(n);
		std::vector<char>after(n);
		for (int i = 0; i < n; ++i)std::cin >> before[i] >> after[i];
		int m;
		std::cin >> m;
		std::vector<char>vec(m);
		for (int i = 0; i < m; ++i) {
			std::cin >> vec[i];
			for (int j = 0; j < n; ++j) {
				if (vec[i] == before[j]) { vec[i] = after[j];	break; }
			}
		}
		for (int i = 0; i < m; ++i) {
			if (i == m - 1) { std::cout << vec[i] << std::endl; }
			else std::cout << vec[i];
		}
	}
	return 0;
}