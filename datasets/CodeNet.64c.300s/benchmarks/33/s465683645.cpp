#include <stdio.h>

int main()
{
    int		a, b, out;
    char	op;

    while(1)
    {
	scanf("%d %c %d", &a, &op, &b);

	if ( op == '?' )
	{
	    break;
	}

	switch (op){
	case '+':
	    out = a + b;
	    break;
	case '-':
	    out = a - b;
	    break;
	case '*':
	    out = a * b;
	    break;
	case '/':
	    out = a / b;
	    break;
	}
	printf("%d\n", out);
    }
}
	    