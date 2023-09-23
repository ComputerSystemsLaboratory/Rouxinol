#include<iostream>
using namespace std;

int main() {
	int n, a[31] = {0,1,2,4};
	while (1) {
		cin >> n;
		if (n == 0) break;

		for (int i = 4; i <= n; i++) {
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		}
		cout << (a[n] / 10 + 1) / 365 + 1 << endl;
	}
	return 0;
}