#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	
	cin >> x;
	long min = x, max = x, sum = x;
	for (int i=2; i<=n; i=i+1) {
		cin >> x;
		sum = sum + x;
		if (x < min) min = x;
		if (x > max) max = x;
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}
