#include <iostream>

using namespace std;

int a,b;
char op;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (true) {
		cin >> a >> op >> b;

		if (op == '?')	break;
		if (op == '+') {
			cout << a + b << "\n";
		}
		else if (op == '-') {
			cout << a - b << "\n";
		}
		else if (op == '*') {
			cout << a*b << "\n";
		}
		else if (op == '/') {
			cout << a / b << "\n";
		}
	}

	return 0;
}