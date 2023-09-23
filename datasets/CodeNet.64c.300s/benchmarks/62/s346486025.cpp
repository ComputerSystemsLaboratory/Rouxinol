#include<iostream>

int main()
{
	int n, m;
	int A[101][101];
	int b[101];
	int ans = 0;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		std::cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += (A[i][j] * b[j]);
		}
		std::cout << ans << std::endl;
		ans = 0;
	}
}