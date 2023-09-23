#include <iostream>
using namespace std;
inline int selectionSort(int a[], int n) {
	int sw = 0;
	for (int i = 0; i < n - 1; i++) {
		int minj = i;
		for (int j = i +1; j < n; j++) {
			if (a[j] < a[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(a[i], a[minj]);
			sw++;
		}
	}
	return sw;
}
int main() {
	const int n = 100000;
	int ar[n];
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> ar[i];
	}
	int sum = selectionSort(ar, num);
	cout << ar[0];
	for (int i = 1; i < num; i++) {
		cout << ' ' << ar[i];
	}
	cout << endl << sum << endl;
	return 0;
}