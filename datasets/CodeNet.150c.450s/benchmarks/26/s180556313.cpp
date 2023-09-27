#include <stdio.h>

int main(){
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);

	if (a < b)
		printf("a < b\n");
	if (a > b)
		printf("a > b\n");
	if (a == b)
		printf("a == b\n");


	return 0;
}