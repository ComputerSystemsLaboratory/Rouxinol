#include<iostream>
#include<algorithm>

int main() {
	int n, p[101], m[101][101];
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> p[i - 1] >> p[i];
	}

	for (int i = 1; i <= n; i++) m[i][i] = 0;
	for (int l = 2; l <= n; l++) {
		for (int i = 1; i <= n - l + 1; i++) {
			int j = i + l - 1;
			m[i][j] = (1 << 21);
			for (int k = i; k <= j - 1; k++) {
				m[i][j] = std::min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	std::cout << m[1][n] << std::endl;
	return 0;
}