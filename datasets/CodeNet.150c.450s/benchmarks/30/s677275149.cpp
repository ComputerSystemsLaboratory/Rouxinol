#include<iostream>
using namespace std;
void selectionSort(int[], int);

int main() {
	int n, a[110];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selectionSort(a, n);
	return 0;
}

void selectionSort(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j <= n - 1; j++) {
			if (a[j] < a[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			int copy = a[i];
			a[i] = a[minj];
			a[minj] = copy;
			count++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}
	cout << count << endl;

}