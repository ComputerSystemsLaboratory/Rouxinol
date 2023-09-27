#include <vector>
#include <iostream>
#include <algorithm>
int main() {
	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);
	int N;
	std::cin >> N;
	std::vector<int> A(N);
	for(int i = 0; i < N; ++i) {
		std::cin >> A[i];
	}
	int ptr = 0;
	for(int i = 0; i < N - 1; ++i) {
		if(A[i] <= A[N - 1]) {
			std::swap(A[i], A[ptr++]);
		}
	}
	std::swap(A[ptr], A[N - 1]);
	for(int i = 0; i < N; ++i) {
		if(i == ptr) std::cout << '[';
		std::cout << A[i];
		if(i == ptr) std::cout << ']';
		std::cout << (i != N - 1 ? ' ' : '\n');
	}
	return 0;
}
