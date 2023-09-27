#include <stdio.h>
#include <string.h>

void op_print(char *str, int a, int b)
{
	for(int i = a; i <= b; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

void op_replace(char *str, int a, int b, char *p)
{
	for(int i = a; i <= b; ++i)
	{
		str[i] = p[i - a];
	}
}

void op_reverse(char *str, int a, int b)
{
	for(; a < b; ++a, --b)
	{
		char temp;
		temp   = str[a];
		str[a] = str[b];
		str[b] = temp;		
	}
}

int main()
{
	int q, a, b;
	char str[1024], p[1024], op[16];

	scanf("%s %d", str, &q);
	for(int i = 0; i < q; ++i)
	{
		scanf("%s %d %d", op, &a, &b);

		if(strcmp(op, "print") == 0)
		{
			op_print(str, a, b);
		}
		if(strcmp(op, "reverse") == 0)
		{
			op_reverse(str, a, b);
		}
		if(strcmp(op, "replace") == 0)
		{
			scanf("%s", p);
			op_replace(str, a, b, p);
		}
	}
	return 0;
}
