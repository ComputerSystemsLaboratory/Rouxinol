#include <iostream>

using namespace std;

int f(int d) { return d * d; }

int main() {
	int n, sum;
	while (cin >> n) {
		sum = 0;
		for (int i = 1; i * n < 600; i++) {
			sum += f(i * n) * n;
		}
		cout << sum << endl;
	}
	return 0;
}