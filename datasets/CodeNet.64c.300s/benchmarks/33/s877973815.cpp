#include <cstdio>
using namespace std;

int main (void)
{
	int a, b, key=0;
	char op;

	while (scanf("%d %c %d", &a, &op, &b) != EOF && key == 0){
		if (op == '?')
			break;
		else if (op == '+')
			printf("%d\n", a+b);
		else if (op == '-')
			printf("%d\n", a-b);
		else if (op == '*')
			printf("%d\n", a*b);
		else
			printf("%d\n", a/b);
	}

	return 0;
}