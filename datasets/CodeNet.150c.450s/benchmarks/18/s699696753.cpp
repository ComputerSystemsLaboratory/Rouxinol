#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, money = 100000;
	cin >> n;

	for (int i = 0; i < n; i++) {
		money *= 1.05;
		if (money % 1000 == 0) {
			continue;
		}
		money += 1000 - money % 1000;
	}

	cout << money << endl;

	return 0;
}