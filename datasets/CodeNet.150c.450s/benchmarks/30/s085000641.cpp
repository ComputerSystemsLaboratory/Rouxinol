#include <iostream>

void traceALDS12B(int arr[], int max) {
	for (int i = 0; i < max; ++i) {
		if (i)
			std::cout << " ";
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
int main() {

	int N;
	std::cin >> N;

	int arr[N];
	for (int i = 0; i < N; ++i) {
		std::cin >> arr[i];
	}

	int cnt = 0;
	for (int i = 0; i < N; ++i) {
		int minIdx = i;
		for (int j = i; j < N; ++j) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		if (minIdx != i) {
			std::swap(arr[i], arr[minIdx]);
			++cnt;
		}
	}

	traceALDS12B(arr, N);
	std::cout << cnt << std::endl;

	return 0;
}