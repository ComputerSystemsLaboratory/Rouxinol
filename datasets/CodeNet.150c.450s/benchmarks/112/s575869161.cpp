#include<iostream>
#include<vector>
int main() {
	int n;
	while (std::cin >> n, n) {
		int N;
		std::vector<char>a(n), b(n);
		for (int i = 0; i < n; i += 1)
			std::cin >> a[i] >> b[i];
		std::cin >> N;
		std::vector<char>c(N);
		for (int i = 0; i < N; i += 1) {
			std::cin >> c[i];
			for (int j = 0; j < n; j += 1) {
				if (c[i] == a[j]) {
					c[i] = b[j];
					break;
				}
			}
		}
		for (int i = 0; i < N; i += 1) {
			if (i == N - 1)
				std::cout << c[i] << std::endl;
			else
				std::cout << c[i];
		}
	}
	return 0;
}