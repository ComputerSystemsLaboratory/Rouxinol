#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int		a, b;
	char	op;
	bool	flag = true;

	do
	{
		scanf("%d %c %d", &a, &op, &b);
		switch (op)
		{
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		case '/':
			printf("%d\n", a / b);
			break;
		default:
			flag = false;
			break;
		}
	} while (flag);

	return 0;
}