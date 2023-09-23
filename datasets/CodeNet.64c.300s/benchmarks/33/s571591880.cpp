#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int a = 0, b = 0;
	char op = ' ';

	while (1){
		cin >> a >> op >> b;	
		if (op == '?'){ break; }
		switch (op)
		{
		case '+':
			a = a + b;
			break;
		case '-':
				a = a - b;
				break;
		case '*':
			a = a * b;
			break;
		case '/':
			a = a / b;
			break;
		}
		cout << a << endl;
	}
	return 0;
}