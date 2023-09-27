#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, a, total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 1 && a > 0) {
			int k = sqrt(a);
			for (int j = 3; j <= k; j++)
				if (a % j == 0) {
					k = -1;
					break;
				}
			if (k != -1)total++;
		}
		else if (a == 2)total++;
	}
	cout << total << endl;

	return 0;
}