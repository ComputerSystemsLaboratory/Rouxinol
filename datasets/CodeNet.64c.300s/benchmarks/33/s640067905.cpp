#include <iostream>
using namespace std;

int main() {
	int a, b, result;
	char op;
	
	while (1) {
		cin >> a >> op >> b;
		if (op == '+') result = a + b;
		else if(op == '-') result = a - b;
		else if(op == '*') result = a * b;
		else if(op == '/') result = a / b;
		else if (op == '?') break;
		cout << result << endl;
	}
}