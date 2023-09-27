#include <iostream>
#include <vector>
using namespace std;

int c = 0;

void merge(int a[], int l, int m, int r)
{
	int n1 = m - l;
	int n2 = r - m;
	vector<int> L(n1 + 1), R(n2 + 1);

	for (int i = 0; i < n1; i++)
		L[i] = a[l + i];

	for (int i = 0; i < n2; i++)
		R[i] = a[m + i];

	L[n1] = 1000000001;
	R[n2] = 1000000002;
	int i = 0, j = 0;

	for (int k = l; k < r; k++) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		c++;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l + 1 < r) {
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m, r);
		merge(a, l, m, r);
	}
}

int main()
{
	int n = 0, a[500000] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	mergeSort(a, 0, n);

	for (int i = 0; i < n - 1; i++)
		cout << a[i] << " ";

	cout << a[n - 1] << endl;
	cout << c << endl;

	return 0;
}