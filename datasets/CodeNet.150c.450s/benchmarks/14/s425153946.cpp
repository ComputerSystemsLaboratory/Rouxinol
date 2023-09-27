#include <iostream>
using namespace std;

int main(void) {
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 3 == 0)
			cout << ' ' << i;
		else {
			for (j = i; j != 0; j /= 10) {
				if (j % 10 == 3) {
					cout << ' ' << i;
					j = 0;
				}
			}
		}
	}
	cout << endl;
	return 0;
}