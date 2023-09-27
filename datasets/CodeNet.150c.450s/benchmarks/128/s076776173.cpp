#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,x;
	char str[21];
	scanf("%s",str);
		x=strlen(str);
		for(i=x-1;i>=0;i--){
			printf("%c",str[i]);
		}
		printf("\n");
	return 0;
}	