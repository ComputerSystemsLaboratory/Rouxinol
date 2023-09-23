#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];

	for (int x = 0; x < n; x++) cin >> a[x];

	for (int i = 0; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j]>v) {
			a[j + 1] = a[j];
			j--;
			a[j + 1] = v;
		}
		for (int y = 0; y < n; y++) {
			cout << a[y];
			if (y != n - 1) cout << " ";
		}
		cout << "\n";
	}
	delete[] a;
	return 0;
}