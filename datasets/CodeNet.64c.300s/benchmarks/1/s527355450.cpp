#include <iostream>
using namespace std;

int n = 0, a[100000] = { 0 };

int partition(int a[100000], int p, int r) {
	int x = a[r - 1];
	int i = p - 1;

	for (int j = p; j < r; j++) {
		if (a[j - 1] <= x) {
			i++;
			swap(a[i - 1], a[j - 1]);
		}
	}
	swap(a[i], a[r - 1]);
	return i + 1;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int k = 0;

	k = partition(a, 1, n);

	for (int i = 0; i < k - 1; i++)
		cout << a[i] << " ";

	if (k < n) {
		cout << "[" << a[k - 1] << "] ";

		if (k < n - 1) {
			for (int i = k; i < n - 1; i++)
				cout << a[i] << " ";
		}

		cout << a[n - 1] << endl;
	}
	else
		cout << "[" << a[n - 1] << "]" << endl;

    return 0;
}