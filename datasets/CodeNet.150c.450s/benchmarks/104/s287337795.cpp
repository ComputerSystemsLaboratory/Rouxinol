#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = a;
}

int main()
{
	int w, n;
	cin >> w >> n;
	int b, c;
	int a[31];
	for (int i = 1; i < 31; ++i) {
		a[i] = i;
	}
	char d;
	for (int i = 0; i < n; ++i) {
		cin >> b >> d >> c;
		swap(a[b], a[c]);
	}
	for (int i = 1; i <= w; ++i) {
		cout << a[i] << endl;
	}
	return 0;
}