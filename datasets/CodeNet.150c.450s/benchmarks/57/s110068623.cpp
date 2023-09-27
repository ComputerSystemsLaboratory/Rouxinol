#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	char op;
	while (cin >> a >> op >> b) {
		if (op == '+') {
			c = a + b;
		}
		else if (op == '-') {
			c = a - b;
		}
		else if (op == '/') {
			c = a / b;
		}
		else if (op == '*') {
			c = a * b;
		}
		else {
			break;
		}
		cout << c << endl;
	}
}