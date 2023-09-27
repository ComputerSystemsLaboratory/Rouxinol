#include <stdio.h>

int main(void)
{
	char string[2048];
	int i=0;
	int qty=0;
	
	fgets(string,2000,stdin);
	
	while(string[i]!='\0')
	{
		qty++;
		i++;
	}
	
	for(i=0;i<=qty;i++)
	{
		if('A' <= string[i] && string[i] <= 'Z')
		{
			string[i] += ((int)('a') - ('A'));
		}
		else if('a' <= string[i] && string[i] <= 'z')
		{
			string[i] -= ((int)('a') - ('A'));
		}
	}
	
	printf("%s",string);
	
	return 0;
}
