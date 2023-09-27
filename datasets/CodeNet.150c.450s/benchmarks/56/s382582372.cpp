#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a;
	cin >> a;

	long sum;
	int min, max;

	sum = a;
	min = a;
	max = a;

	while (--n) {
		cin >> a;

		sum += a;
		if (a < min) min = a;
		if (max < a) max = a;
	}

	cout << min << ' ' << max << ' ' << sum << endl;

	return 0;
}