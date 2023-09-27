#include <cstdio>

int main()
{
	char ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 0x41 && ch <= 0x5A || ch >= 0x61 && ch <= 0x7A) ch ^= 0x20;
		printf("%c",ch);
	}

	return 0;
}