#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_B&lang=jp

int part(int a[], int p, int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j] <= x) {
			i += 1;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int d = part(arr, 0, n - 1);
	
	if (d == 0) cout << "[" << arr[0] << "]";
	else cout << arr[0];
	
	for (int i = 1; i < n; i++) {
		cout << " " << (i == d ? "[" : "") << arr[i] << (i == d ? "]" : "");
	}
	cout << endl;
	return 0;
}