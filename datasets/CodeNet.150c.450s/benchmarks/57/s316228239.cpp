//============================================================================
// Name        : ITP_1_4_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b;
	char op;
	do {
		cin >> a >> op >> b;
		if (op == '?') break;
		switch(op) {
		case '+' :
			printf("%d\n",a+b);
			break;
		case '-' :
			printf("%d\n",a-b);
			break;
		case '*' :
			printf("%d\n",a*b);
			break;
		case '/' :
			printf("%d\n",a/b);
			break;
		}
	} while(1);
	return 0;
}