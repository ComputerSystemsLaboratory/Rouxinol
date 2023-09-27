#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, num, min = INT_MAX, max = INT_MIN;
        long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}

	cout << min << " " << max << " " << sum << endl;
	return 0;
}