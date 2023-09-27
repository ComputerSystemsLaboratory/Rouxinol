#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	int i,s;
	scanf("%s",a);
	s=strlen(a);
	for(i=s-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}