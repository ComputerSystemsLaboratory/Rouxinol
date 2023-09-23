#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool flag = true;
	int count = 0;

	while (flag) {
		flag = false;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				count++;
				flag = true;
				swap(a[i], a[i + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i < n - 1) {
			cout << " ";
		}
	}
	cout << endl << count << endl;

	return 0;
}