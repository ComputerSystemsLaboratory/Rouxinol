#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;

	while (1) {
		cin >> a >> b;
		if (cin.eof()) {
			break;
		}
		a = (int) log10((double) (a + b)) + 1;
		cout << a << endl;
	}

	return 0;
}