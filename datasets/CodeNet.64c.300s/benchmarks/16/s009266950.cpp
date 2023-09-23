#include<iostream>
using namespace std;

int main() {
	int n, r[200010],max = -2e9,rmin = 2e9;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}


	for (int i = 0; i < n; i++) {
		if (r[i] < rmin) {
			rmin = r[i];
			for (int j = i + 1; j < n; j++) {
				if (r[j] - r[i] > max) max = r[j] - r[i];
			}
		}
	}

	cout << max << endl;
	return 0;
}