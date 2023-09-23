#include <iostream>
using namespace std;

int main() {
	while(1) {
		int a, b;
		char op;
		cin >> a >> op >> b;
		auto result = 0;
		if (op == '?') break;
		switch (op) {
		  case '+': result = a + b; break;
		  case '-': result = a - b; break;
		  case '*': result = a * b; break;
		  case '/': result = a / b; break;
		}
		cout << result << endl;
	}
}