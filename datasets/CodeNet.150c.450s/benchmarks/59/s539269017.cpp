#include <iostream>
using namespace std;

void array_print(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];

		if (i < n - 1) {
			cout << ' ';
		}
		else {
			cout << endl;
		}
	}
}

void insertionSort(int *arr, int n) {
	for (int i = 1; i < n; i++) {
		array_print(arr, n);
		int v = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > v) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = v;
	}
}

int main() {
	int n, arr[1000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	insertionSort(arr, n);
	array_print(arr, n);

	return 0;
}