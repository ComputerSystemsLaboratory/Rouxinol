#include<iostream>
#include<cstdio>
using namespace std;

#define MAX 20000

int main(void)
{
	int a, b, flag = 0;
	char op;
	while (1) {
		do {
			cin >> a >> op >> b;
		} while (a < 0 || a > MAX || b < 0 || b > MAX && op != '+' && op != '-' && op != '*' && op != '/' && op != '?');

		switch (op) {
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a*b);
			break;
		case '/':
			printf("%d\n", a / b);
			if (b == 0) break;
			break;
		case '?':
			flag = 1;
			break;
		}
		if (flag == 1) break;
	}
	return 0;
}