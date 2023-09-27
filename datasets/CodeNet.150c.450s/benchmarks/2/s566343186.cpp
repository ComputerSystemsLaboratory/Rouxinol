#include<iostream>
#include<algorithm>
#include<vector>
int partition(std::vector<int>&A, int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j) {
		if (A[j] <= x) {
			++i;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i + 1], A[r]);
	return i + 1;
}
int main(void) {
	std::ios_base::sync_with_stdio(false);
	int n;
	std::cin >> n;
	std::vector<int>Input(n, 0);
	for (int i = 0; i < n; ++i) {
		std::cin >> Input[i];
	}
	int criterion = partition(Input, 0, n-1 );
	for (int i = 0; i < n; ++i) {
		if (i != criterion) std::cout << Input[i];
		else std::cout << "[" << Input[i] << "]";
		if (i == n - 1) std::cout << std::endl;
		else std::cout << " ";
	}
//	system("pause");
	return 0;
}