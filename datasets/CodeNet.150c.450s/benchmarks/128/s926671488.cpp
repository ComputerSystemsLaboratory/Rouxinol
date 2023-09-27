#include <stdio.h>
#include <string.h>

int main(){

	char str[30] ={0};
	char tempstr[30] = {0};
	int a,i;

	scanf("%s",str);

	a = strlen(str);
	a=a-1;

	for(i=a;i>=0;i--)
		tempstr[a-i]=str[i];

	printf("%s\n",tempstr);


	
	return 0;
}