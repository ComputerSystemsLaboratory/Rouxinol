#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		if (n == 0) break;
		vector<int> array(n);
		for (int i = 0; i < n; i++) {
			cin >> array.at(i);
		}

		long max = array.at(0);
		for (int j = 0; j < n; j++) {
			long total = 0;
			for (int k = 0; k < n - j; k++) {
				total += array.at(j + k);
				if (total > max) max = total;
			}
		}

		cout << max << endl;
	}
	return 0;
}