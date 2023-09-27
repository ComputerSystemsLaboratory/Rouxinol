#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	char op;
	int a, b, result;

	while(true)
	{
		//Read Input
		cin >> a >> op >> b;

		switch(op)
		{
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
			case '?':
				return 0;
			default:
				cout << "invalid op" << endl;
				return 0;
		}
				
		cout << result << endl;
	}
	return 0;
}