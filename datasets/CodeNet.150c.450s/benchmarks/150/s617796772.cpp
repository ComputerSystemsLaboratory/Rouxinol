#include <iostream>
using namespace std;

long n = 0;
int a[2000000] = { 0 }, b[2000000] = { 0 }, c[10001] = { 0 };

void CountingSort(int a[2000000], int b[2000000], int k) {
	for (int i = 0; i <= k; i++)
		c[i] = 0;

	for (long j = 0; j < n; j++)
		c[a[j]]++;

	for (int i = 1; i <= k; i++)
		c[i] += c[i - 1];

	for (long j = n - 1; j > -1; j--) {
		b[c[a[j]] - 1] = a[j];
		c[a[j]]--;
	}
}

int main()
{
	cin >> n;

	for (long i = 0; i < n; i++)
		cin >> a[i];

	CountingSort(a, b, 10000);

	for (long i = 0; i < n - 1; i++)
		cout << b[i] << " ";
	cout << b[n - 1] << endl;

    return 0;
}