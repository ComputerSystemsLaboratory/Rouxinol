#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (i % 3 == 0) {
			cout << " " << i;
			continue;
		}
		while (true) {
			if (x % 10 == 3) {
				cout << " " << i;
				break;
			}
			else if (x / 10 == 0) {
				break;
			}
			x /= 10;
		}
	}
	cout << endl;
	return 0;
}