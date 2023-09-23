#include <iostream>
using namespace std;
int main() {

	int x, y;

	for (int i = 1;; i++) {

		cin >> x >> y;

		if (x == 0 && y == 0)break;

		if (x < y) {
			
			cout << x <<" "<< y << "\n";

		}
		else {
			cout << y <<" "<< x << "\n";
		}
	}

	return 0;
}