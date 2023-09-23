#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int counter = 0;
		for (int i = 1; i <= n/2; i++) {
			int sum = 0;
			for (int j = i; sum <= n; j++) {
				sum += j;
				if (sum == n) {
					counter++;
					break;
				}
			}
		}
		cout << counter << endl;
	}
	return 0;
}