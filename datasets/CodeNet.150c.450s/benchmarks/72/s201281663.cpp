#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	while (1) {
		scanf("%c", &ch);

		putchar(isupper(ch) ? tolower(ch) : toupper(ch));

		if (ch == '\n')	break;
	}

	return 0;
}