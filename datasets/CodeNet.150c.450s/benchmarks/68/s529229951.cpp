#include <iostream>
#include <algorithm>
using namespace std;

int n, a[1000];

int main() {

	while (true) {
		cin >> n;

		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n);

		int Min = INT32_MAX;
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] - a[i] < Min) {
				Min = a[i + 1] - a[i];
			}
		}

		cout << Min << endl;
	}
}