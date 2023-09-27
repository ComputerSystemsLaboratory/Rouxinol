// 2014/07/16 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int a, b;
		char op;
		cin >> a >> op >> b;

		if(op=='?')
			break;

		switch(op){
		case '+':
			cout << a+b << endl;
			break;
		case '-':
			cout << a-b << endl;
			break;
		case '*':
			cout << a*b << endl;
			break;
		case '/':
			cout << a/b << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}