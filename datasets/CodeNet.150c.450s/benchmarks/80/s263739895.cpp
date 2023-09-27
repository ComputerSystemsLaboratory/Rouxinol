#include <stdio.h>


int main(){

	int a = 0, b = 0,i,buf;

	for (i = 0; 4 > i; i++){
		scanf("%d", &buf);
		a += buf;
	}
	for (i = 0; 4 > i; i++){
		scanf("%d", &buf);
		b += buf;
	}
	printf("%d\n", a > b ? a : b);
return 0;
}