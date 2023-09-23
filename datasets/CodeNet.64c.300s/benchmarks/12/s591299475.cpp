#include <stdio.h>

int main(void){
	char str[10];
	int num;

	fgets(str, sizeof(str), stdin);
	sscanf(str, "%d", &num);
	printf( "%d\n", num*num*num );
    return 0;
}