#include<iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		int temp[40] = {};
		cin >> n;
		if (n == 0) break;

		temp[0] = 1;
		for (int i = 0; i < n; i++) {
			temp[i + 1] += temp[i];
			temp[i + 2] += temp[i];
			temp[i + 3] += temp[i];
		}

		cout << temp[n]/3650 + 1 << endl;

	}
	return 0;
}
