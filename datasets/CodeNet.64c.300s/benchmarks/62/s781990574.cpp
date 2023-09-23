#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;

	int a[n][m];
	int b[m];
	int c[n];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			std::cin >> a[i][j];
		}
	}

	for(int i=0; i<m; i++){
		std::cin >> b[i];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(j==0) c[i] = 0;
			c[i] += a[i][j] * b[j];
		}
	}

	for(int i=0; i<n; i++){
		std::cout << c[i] << std::endl;
	}
}