#include<stdio.h>

int main() {
	int a,b;

	scanf("%d %d", &a,&b);


	printf("a ");
	if (a > b)printf("> b");
	else if (a == b)printf("== b");
	else printf("< b");
	printf("\n");



	return 0;
}