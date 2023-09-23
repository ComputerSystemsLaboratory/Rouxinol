#include <iostream>
using namespace std;

int main() {
	long a, b, c;
	char op;
	
	while (cin >> a >> op >> b){
		if (op == '+') c = a + b;
		if (op == '-') c = a - b;
		if (op == '*') c = a * b;
		if (op == '/') c = a / b;
		if (op == '?') break;
		cout << c << endl;
	}
}