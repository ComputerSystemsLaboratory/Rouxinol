#include <iostream>
using namespace std;

int main() {
	int x, n, min, max;
	long long sum = 0;
	max = -10000001;
	min = 10000001;
	cin >> n;
	for (int i=1;i<=n;i++) {
		cin >> x;
		sum += x;
		if (x > max) {
			max = x;
		} if (x < min) {
			min = x;
		}	
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}

