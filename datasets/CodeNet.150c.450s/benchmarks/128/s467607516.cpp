#include <stdio.h>
#include <string.h>
int main(void) {
	char str[20];
	int i;
	scanf("%s",str);
	for(i = 0; strlen(str) > i; i++){
		printf("%c",str[strlen(str)-1 - i]);
	}
	printf("\n");
	return 0;
}