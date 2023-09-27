#include <iostream>
#include <algorithm>

using namespace std;

void show(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << " ";
	cout << arr[n - 1] << endl;
}

int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	show(arr, n);
	int j, v;
	for (int i = 1; i < n; i++) {
		v = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > v) {
			arr[j + 1] = arr[j];
				j--;
		}
		arr[j + 1] = v;
		show(arr, n);
	}

	return 0;
}