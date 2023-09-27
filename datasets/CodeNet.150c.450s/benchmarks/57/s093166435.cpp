#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b, ans = 0;
	char op;

	while (1) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?') break; 
		if (op == '+') ans = a + b;
		else if (op == '-') ans = a - b;
		else if (op == '*') ans = a * b;
		else if (op == '/') ans = a / b;
		printf("%d\n", ans);
	}
	
	return (0);
}