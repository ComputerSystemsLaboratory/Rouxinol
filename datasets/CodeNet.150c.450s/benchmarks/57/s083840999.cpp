//============================================================================
// Name        : HelloCPP.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int a,b;
	char op;
	double r;
	double pi = 3.141592653589;

	while(1){
		cin >> a >> op >> b;

		if(op == '?'){
			break;
		}

		if (op == '+'){
			printf("%d\n",a + b);
		}else if(op == '-'){
			printf("%d\n",a - b);
		}else if(op == '*'){
			printf("%d\n",a * b);
		}else if(op == '/'){
			printf("%d\n",a / b);
		}

	}

	return 0;
}