#include <iostream>
#include <iomanip>

#define PI 3.141592653589

using namespace std;

int main() {
	int a, b, r;
	char op;

	while (1) {
		cin >> a >> op >> b;

		if (op == '?') {
			break;
		}

		switch (op) {
		case '+':
			r = a + b;
			break;
		case '-':
			r = a - b;
			break;
		case '*':
			r = a * b;
			break;
		case '/':
			if (b == 0) {
				break;
			}
			r = a / b;
			break;
		default:
			break;
		}

		cout << r << endl;
	}
	return 0;
}