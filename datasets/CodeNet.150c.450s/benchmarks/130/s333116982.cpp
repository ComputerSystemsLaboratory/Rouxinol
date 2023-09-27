#include <iostream>

int main(int argc, char const* argv[])
{
	int m,n;
	int a[100][100];
	int b[100];
	int c[100] = {0,0,0};

	std::cin >> n >> m ;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> a[i][j] ;
		}
	}
	for (int i = 0; i < m; i++) {
		std::cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] += a[i][j] * b[j];
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout << c[i] << std::endl;
	}

}