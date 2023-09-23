#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int count = 0;
		bool table[1000001] = { false };
		int upper = sqrt(n);

		table[1] = true;

		for (int i = 1; i <= upper; i++) {
			if (table[i] == false) {
				table[i] = true;
				count++;
				for (int j = i; j <= n; j += i) {
					table[j] = true;
				}
			}
		}

		for (int i = upper; i <= n; i++) {
			if (table[i] == false) {
				count++;
			}
		}

		cout << count << '\n';
	}

	return 0;
}