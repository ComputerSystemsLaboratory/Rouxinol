#include <iostream>
#include <vector>
using namespace std;

long c = 0;

void merge(unsigned long long a[], long l, long m, long r)
{
	long n1 = m - l;
	long n2 = r - m;
	vector<unsigned long long> L(n1 + 1), R(n2 + 1);

	for (long i = 0; i < n1; i++)
		L[i] = a[l + i];

	for (long i = 0; i < n2; i++)
		R[i] = a[m + i];

	L[n1] = 1000000001;
	R[n2] = 1000000002;
	long i = 0, j = 0;

	for (long k = l; k < r; k++) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
			c += n1 - i;
		}
	}
}

void mergeSort(unsigned long long a[], long l, long r)
{
	if (l + 1 < r) {
		long m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m, r);
		merge(a, l, m, r);
	}
}

int main()
{
	long n = 0;
	unsigned long long a[200000] = { 0 };

	cin >> n;

	for (long i = 0; i < n; i++)
		cin >> a[i];

	mergeSort(a, 0, n);

	cout << c << endl;

	return 0;
}