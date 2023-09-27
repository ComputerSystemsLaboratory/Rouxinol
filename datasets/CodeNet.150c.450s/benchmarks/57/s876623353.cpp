#include<iostream>

using namespace std;

int main() {

	int a, b,c;
	char  op;


	for (c = 0; c > -1; c++) {

		cin >> a >> op >> b;

		if (op == '+') {
			cout << a + b << endl;
		}

		else if (op == '-') {
			cout << a - b << endl;
		}

		else if (op == '*') {
			cout << a * b << endl;
		}

		else if (op == '/') {
			cout << a / b << endl;
		}

		else if (op == '?') {
			return 0;
		}

	}


}