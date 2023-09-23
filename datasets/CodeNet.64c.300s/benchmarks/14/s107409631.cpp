#include <stdio.h>

int main(void){
	int a;
	int b;

	scanf("%d %d", &a, &b);

	if (a<b){
	printf("%s < %s\n", "a","b");
}else if(a>b){
	printf("%s > %s\n", "a","b");
}else if(a==b){
	printf("%s == %s\n", "a","b");
}

	return 0;
}
