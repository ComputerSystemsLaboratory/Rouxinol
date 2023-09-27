#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100][1000], mark[1000];
	int i, j, turn, count;
	
	for(i = 0; ; i++)
	{
		scanf("%s", str[i]);
		if(strcmp(str[i], "-") == 0) break;
		scanf("%d", &count);
		for(j = 1; j <= count; j++)
		{
			scanf("%d", &turn);
			strcpy(mark, &str[i][turn]);
			strncat(mark, str[i], turn);
			strcpy(str[i], mark);
		}
	}
	
	for(j = 0; j < i; j++)
	{
		printf("%s\n", str[j]);
	}
	
	return 0;
}