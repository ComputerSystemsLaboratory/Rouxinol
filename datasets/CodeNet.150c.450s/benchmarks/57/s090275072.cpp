#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	char op;


	for (int i = 1;; i++) {

		cin >> a >> op >> b;

		if (op == '?')break;

		switch (op) {

		case '+':
			cout << a + b << "\n";
			break;

		case '-':
			cout << a - b << "\n";
			break;

		case'*':
			cout << a*b << "\n";
			break;

		case '/':
			cout << a / b << "\n";
			break;

		default:
			cout << "Error\n";

		}
	}

	return 0;
}