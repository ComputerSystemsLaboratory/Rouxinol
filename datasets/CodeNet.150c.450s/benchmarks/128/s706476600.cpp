#include<stdio.h>
#include<string.h>
#define MAX 30


int main()
{
	char str[MAX];
	scanf("%s",str);
	int num = strlen(str);
	int i;
	for(i=0;i<num;i++)
	{
		printf("%c",str[num-i-1]);
	}
	printf("\n");
	return 0;
}