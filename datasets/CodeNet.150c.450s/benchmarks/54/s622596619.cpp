#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int i, count = 0;
	char s[1001], t[11];
	char END[] = "END_OF_TEXT";
	scanf("%s", t);
	int c;
	int k;
	int len, len2;

	len = strlen(t);
	for (k = 0; k < len; k++)
	{
		t[k] = tolower(t[k]);
	}

	while (1)
	{
		scanf("%s", s);

		if (strcmp(END, s) == 0)
		{
			printf("%d\n", count);
			return 0;
		}

		len2 = strlen(s);
		for (k = 0; k < len2; k++)
		{
			s[k] = tolower(s[k]);
		}

		if (strcmp(s, t) == 0)
		{
			count++;
		}
	}
}