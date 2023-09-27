#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[21];
	int i,n;
	scanf("%s",&a);
	n=strlen(a);
	for(i=n-1;i>=0;i--){
	    printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}