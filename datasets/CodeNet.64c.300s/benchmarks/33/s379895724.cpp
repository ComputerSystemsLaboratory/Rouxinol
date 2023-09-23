#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a, b;
	char op;

	do{
		cin >> a >> op >> b;

		switch (op) {
		case '+': cout << a + b << "\n"; break;
		case '-': cout << a - b << "\n"; break;
		case '*': cout << a * b << "\n"; break;
		case '/': cout << a / b << "\n"; break;
		case '?': break;
		}
	}while (op != '?');
}