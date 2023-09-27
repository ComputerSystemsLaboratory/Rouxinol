
#include<iostream>
#include<vector>
#include<algorithm>

using ull = unsigned long long;

int main() {
	ull n;
	std::cin >> n;

	ull A[10001]{};

	for (ull i{}; i < n; ++i) {
		ull t;
		std::cin >> t;
		++A[t];
	}
	/*
	for (int i{}; i < n; i++) {
		std::cout << A[i] << " ";
	}*/
	auto count{0};
	for (ull i{}; i < 10001; ++i) {
		for (ull j{}; j < A[i]; ++j) {
			
			std::cout << i << (count<n-1?" ":"\n");
			count++;
		}
	}

	return 0;
}

