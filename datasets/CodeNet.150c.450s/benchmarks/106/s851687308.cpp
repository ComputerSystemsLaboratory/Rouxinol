#include <iostream>
using namespace std;

int main() {
	int a, b, c, x;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (i != 0) {
			if (c % i == 0) {
				x++;
			}
		}
	}
	cout << x <<endl;
	return 0;
}