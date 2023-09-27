#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 2
int main(void)
{
	int a,b;
	char c;

	while (1) {
		cin >> a;
		cin >> c;
		cin >> b;

		if (c == '+') {
			printf("%d\n", a+b);
		}
		else if (c == '-') {
			printf("%d\n", a-b);
		}
		else if (c == '*') {
			printf("%d\n", a*b);
		}
		else if (c == '/') {
			printf("%d\n", a/b);
		}
		else {
			break;
		}
	}

	return 0;
}

