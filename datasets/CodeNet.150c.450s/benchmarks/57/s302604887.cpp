#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	while (1) {
		int x,y;
		char c;
		cin >> x >> c  >> y;

		if (c == '?')break;
		int z;
		switch (c) {
		case '+':
			z = x + y;
			break;
		case '-':
			z = x - y;
			break;
		case '*':
			z = x*y;
			break;
		case '/':
			z = x / y;
			break;
		case '%':
			z = x%y;
			break;
		}
		printf("%d\n",z);
	}

	return 0;
}