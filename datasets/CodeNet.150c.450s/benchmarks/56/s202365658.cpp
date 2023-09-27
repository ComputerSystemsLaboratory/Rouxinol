#include <iostream>
using namespace std;

int main()
{
	int n;
	int a;
	int min, max;
	long int sum = 0;

	cin >> n;
	cin >> a;

	min = a;
	max = a;
	sum += a;

	for (int i = 0; i < n - 1; i++) {
		cin >> a;

		if (min > a) {
			min = a;
		}

		if (max < a) {
			max =a;
		}

		sum += a;
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}