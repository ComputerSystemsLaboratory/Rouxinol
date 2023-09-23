#include <iostream>
using namespace std;

int main()
{
	long a[10000], i, max, min, sum = 0;
	cin >> i;

	for (int j = 0; j < i; j++) {
		cin >> a[j];
	}
	max = a[0];
	min = a[0];

	for (int j = 0; j < i; j++) {
		if (max < a[j]) { max = a[j]; }
		if (a[j] < min) { min = a[j]; }
		sum += a[j];
	}
	cout << min << ' ' << max << ' ' << sum << endl;
    return 0;
}