#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[2000];
	int s,z,i;
	int n = scanf("%[^\r\n]",a);
	s=strlen(a);
	for(i=0;i<=s;i++){
		if(a[i]>=65&&a[i]<=90)
			a[i]+=32;
		else if(a[i]>=97&&a[i]<=122)
			a[i]-=32;
	}
	for(i=0;i<s;i++){
		printf("%c",a[i]);
	}
	printf("\n");
}