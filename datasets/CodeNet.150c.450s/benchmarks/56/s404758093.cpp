#include <iostream>
using namespace std;

int main() {
	
	int max = -1000005;
	int min = -max;

	int n;
	cin >> n;

	long long int sum = 0;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	cout << min << ' ' << max << ' ' << sum << endl;

	return 0;
}
