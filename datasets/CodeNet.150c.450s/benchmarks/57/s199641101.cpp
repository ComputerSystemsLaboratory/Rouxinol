#include<stdio.h>
#include<string.h>

int main()
{
	int a, b;
	char op[100];

	while (strcmp(op, "?"))
	{
		scanf("%d%s%d", &a, &op, &b);

		if (!strcmp(op, "+"))
		{
			printf("%d\n", a + b);
		}
		else if (!strcmp(op, "-"))
		{
			printf("%d\n", a - b);
		}
		else if (!strcmp(op, "*"))
		{
			printf("%d\n", a * b);
		}
		else if (!strcmp(op, "/"))
		{
			printf("%d\n", a / b);
		}
	}

	return 0;
}