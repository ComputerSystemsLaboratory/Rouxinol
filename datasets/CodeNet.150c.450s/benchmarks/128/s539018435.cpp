#include <string.h>
#include <stdio.h>

int main()
{
	int i;
	int len;
	char str[20],copy[20];
	scanf("%s",str);
	len = strlen(str);
	for(i = 0; i < len; i++){
		copy[len - i - 1] = str[i];
	}
	for(i = 0; i < len; i++){
		str[i] = copy[i];
	}
	printf("%s\n",str);
	return 0;
}