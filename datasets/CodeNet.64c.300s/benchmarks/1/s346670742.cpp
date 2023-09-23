#include<iostream>

using namespace std;

int partition(int *a, int p, int r) {
	int x = a[r - 1];
	int cnt = p-1;
	for (int i = p;i < r;i++) {
		if (a[i] <= x) {
			cnt++;
			swap(a[cnt], a[i]);				
		}
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	int index = partition(a, 0, n);
	for (int i = 0;i < n;i++) {
		if (i == index) {
			cout << "[" << a[i] << "]";
		}
		else {
			cout << a[i];
		}
		if (i != n - 1)cout << " ";

	}
	cout << endl;
}
