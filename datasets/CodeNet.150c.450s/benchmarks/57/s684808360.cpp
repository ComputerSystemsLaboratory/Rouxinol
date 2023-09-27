#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	const int num = 1000;
	int a[num], b[num];
	int endOfInput;
	char op;
	int output[num];

	for (int i = 0; i < num; i++) {
		cin >> a[i] >> op >> b[i];

		if (op == '+') {
			output[i] = a[i] + b[i];
		}
		else if (op == '-') {
			output[i] = a[i] - b[i];
		}
		else if (op == '*') {
			output[i] = a[i] * b[i];
		}
		else if (op == '/') {
			output[i] = a[i] / b[i];
		}
		else if (op == '?') {
			endOfInput = i;
			break;
		}
	}

	for (int i = 0; i < endOfInput; i++) {
		cout << output[i] << endl;
	}

	return 0;
}