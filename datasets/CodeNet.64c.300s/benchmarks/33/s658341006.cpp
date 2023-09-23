#include <cstdio>

int main()
{
	int x, y;
	char op;
	while(1){
		scanf("%d %c %d", &x, &op, &y);
		if(op == '?') break;
		if(op == '+') printf("%d\n", x + y);
		if(op == '-') printf("%d\n", x - y);
		if(op == '*') printf("%d\n", x * y);
		if(op == '/') printf("%d\n", x / y);
	}
	return 0;
}