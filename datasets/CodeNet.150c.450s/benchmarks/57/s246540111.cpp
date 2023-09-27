#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	while (1) {
		int a, b;
		char op;
		cin >> a >> op >> b;
		if (op == '?') break;
		switch (op) {
			case '+':
				cout << a + b << endl;
				break;
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
				break;
			defaut:
				break;
		}
	}
	return 0;
}


