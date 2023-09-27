#include<iostream>
using namespace std;

int main()
{
	int a, b, x;
	char op;

	while (true){

		cin >> a >> op >> b;

		if (op == '+')
		{
			x = a + b;
			cout << x << endl;
		}

		else if (op == '-')
		{
			x = a - b;
			cout << x << endl;
		}

		else if (op == '*')
		{
			x = a * b;
			cout << x << endl;
		}

		else if (op == '/')
		{
			x = a / b;
			cout << x << endl;
		}

		else if (op == '?')
		{
			break;
		}
	}
}