#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char str[256];
	char n[256];
	scanf("%s", str);
	int l = strlen(str);
	for(i=0;i<l;i++)
		n[i] = str[l-i-1];
	printf("%s\n", n);
}