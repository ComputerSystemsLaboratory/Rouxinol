#include <ctype.h>
#include <stdio.h>
#include <string.h>

char
toswap(char c)
{
	if (islower(c)) return toupper(c);
	if (isupper(c)) return tolower(c);
	return c;
}

int
main()
{
	char s[1200];
	fgets(s, sizeof(s), stdin);

	int s_i;
	int s_len = strlen(s);
	for (s_i = 0; s_i < s_len; s_i++)
	{
		char c = toswap(s[s_i]);
		putchar(c);
	}
}