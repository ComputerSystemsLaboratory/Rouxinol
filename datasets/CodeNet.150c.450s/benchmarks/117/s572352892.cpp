#include<iostream>
#include<vector>
#include <limits>
int merge(std::vector<int>&A, int left, int mid, int right) {
	int cnt = 0;
	int n1 = mid - left, n2 = right - mid;
	std::vector<int>L(n1 + 1);
	std::vector<int>R(n2 + 1);
	for (int i = 0; i < n1; ++i) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; ++i) {
		R[i] = A[mid + i];
	}
	L[n1] = R[n2] = std::numeric_limits<int>::max();
	int i = 0, j = 0;
	for (int k = left; k < right; ++k) {
		cnt++;
		if (L[i] <= R[j]) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
	return cnt;
}
int mergeSort(std::vector<int>&A, int left, int right) {
	int cnt = 0;
	if (left + 1 < right) {
		int mid = static_cast<int>((left + right) / 2. + 0.5);
		cnt += mergeSort(A, left, mid);
		cnt += mergeSort(A, mid, right);
		cnt += merge(A, left, mid, right);
	}
	return cnt;
}
int main(void) {
	std::ios::sync_with_stdio(false);
	int n;
	std::cin >> n;
	std::vector<int>S(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> S[i];
	}
	int AnsCnt = mergeSort(S, 0, n);
	for (int i = 0; i < n; ++i) {
		if (i == n - 1) { std::cout << S[i] << std::endl; }
		else { std::cout << S[i] << " "; }
	}
	std::cout << AnsCnt << std::endl;
	//system("pause");
	return 0;
}