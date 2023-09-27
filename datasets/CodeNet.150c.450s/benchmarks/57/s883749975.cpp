#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a, b;
	char op;

	for (int i = 0;; i++){

		cin >> a >> op >> b;

		switch (op){
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

		}
		if (op == '?')
			break;
	}

	return 0;
}