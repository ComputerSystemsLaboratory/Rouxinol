#include <iostream>
using namespace std;

int calcdif(int a[], int n) {
	int min = a[1] - a[0];
	for (int i = 1; i < n - 1; i++) {
		if (a[i+1] - a[i] < min)
			min = a[i+1] - a[i];
	}
	return min;
}

void sort(int a[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (a[j-1] > a[j]) {
				int t = a[j-1];
				a[j-1] = a[j];
				a[j] = t;
			}
}

int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		
		sort(a, n);
		int ans = calcdif(a, n);
		cout << ans << endl;
	}
}