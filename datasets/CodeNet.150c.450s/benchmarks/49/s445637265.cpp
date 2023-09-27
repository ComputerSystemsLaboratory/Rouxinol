#include<iostream>
using namespace std;

int main() {
	int n, max, min, s;
	long sum;

	while (true) {
		cin >> n;
		sum = max = 0;
		min = 1000;

		if (n == 0)	break;

		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s < min)	min = s;
			if (s > max)	max = s;
			sum += s;
		}
		sum -= (min + max);
		cout << sum / (n - 2) << endl;
	}
	return 0;
}