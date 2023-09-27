#include<string.h>
#include<stdio.h>

int main()
{
	char sent[201], temp[201];
	int i, j, k;
	while (scanf("%s", sent))
	{
		if (strcmp(sent, "-") == 0) break;
		scanf("%d", &i);
		for (j = 1; j <= i; j++)
		{
			scanf("%d", &k);
			strcpy(temp, sent);
			strcpy(sent, temp + k);
			temp[k] = '\0';
			strcat(sent, temp);
		}
		puts(sent);
	}
	return 0;
}