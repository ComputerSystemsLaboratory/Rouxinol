#include <iostream>
using namespace std;

int main() {
	int n;
	long long a;
	long long minValue = 1000000;
	long long maxValue = -1000000;
	long long sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < minValue) minValue = a;
		if (a > maxValue) maxValue = a;
		sum += a;
	}

	cout << minValue << " " << maxValue << " " << sum << endl;

	return 0;
}
