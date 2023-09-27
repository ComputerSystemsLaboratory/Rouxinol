#include<iostream>

int main(void) {
	int n, m, l;
	std::cin >> n >> m >> l;
	unsigned long A[101][101] = {};
	unsigned long B[101][101] = {};
	for (int ROW = 0; ROW < n; ++ROW) {
		for (int COLOUM = 0; COLOUM < m; ++COLOUM) {
			std::cin >> A[ROW][COLOUM];
		}
	}
	for (int ROW = 0; ROW < m; ++ROW) {
		for (int COLOUM = 0; COLOUM < l; ++COLOUM) {
			std::cin >> B[ROW][COLOUM];
		}
	}
	for (int ROW = 0; ROW < n; ++ROW) {
		for (int COLOUM=0; COLOUM < l; ++COLOUM) {
			unsigned long ELEMENT = 0;
			for (int ElementSum = 0; ElementSum < m; ++ElementSum) {
				ELEMENT += A[ROW][ElementSum] * B[ElementSum][COLOUM];
			}
			if (COLOUM == l - 1) {
				std::cout << ELEMENT << std::endl;
				break;
			}
			std::cout << ELEMENT << " ";
		}
	}
//	system("pause");
	return 0;
}