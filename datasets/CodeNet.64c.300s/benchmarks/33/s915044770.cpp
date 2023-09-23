#include <iostream>
#include <stdio.h>

#define PI 3.14159265358979

using namespace std;
typedef long long int lint;

void answer()
{
	int a, b;
	char op;
	while (1) {
		cin >> a >> op >> b;
		if (op == '?') break;
		if (op == '+') cout << a + b;
		if (op == '-') cout << a - b;
		if (op == '*') cout << a * b;
		if (op == '/') cout << a / b;
		cout << endl;
	}
}

int main()
{
	answer();
	return 0;
}