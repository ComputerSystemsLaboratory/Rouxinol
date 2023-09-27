#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	int S[13] = { 0 };
	int H[13] = { 0 };
	int C[13] = { 0 };
	int D[13] = { 0 };

	std::string picture;
	int rank;

	for (int i = 0; i < n; i++) {
		std::cin >> picture >> rank;
		if (picture == "S") {
			S[rank-1] = 1;
		}
		else if (picture == "H") {
			H[rank-1] = 1;
		}
		else if (picture == "C") {
			C[rank-1] = 1;
		}
		else {
			D[rank-1] = 1;
		}
	}

	for (int i = 0; i < 13; i++) {
		if (S[i] == 0) {
			std::cout << "S " << i + 1 << std::endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (H[i] == 0) {
			std::cout << "H " << i + 1 << std::endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (C[i] == 0) {
			std::cout << "C " << i + 1 << std::endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (D[i] == 0) {
			std::cout << "D " << i + 1 << std::endl;
		}
	}
}