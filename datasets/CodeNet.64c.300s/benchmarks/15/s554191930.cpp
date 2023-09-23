#include <iostream>
#include <algorithm>

using namespace std;

void show(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << " ";
	cout << arr[n - 1] << endl;
}

int selsctionSort(int arr[], int n) {
	int swCnt = 0, minj;
	for (int i = 0; i < n-1; i++) {
		minj = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minj])
				minj = j;
		}
		if (arr[i] != arr[minj]) {
			swap(arr[i], arr[minj]);
			swCnt++;
		}
	}
	return swCnt;
}

int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int resCnt = selsctionSort(arr, n);
	show(arr, n);
	cout << resCnt << endl;

	return 0;
}