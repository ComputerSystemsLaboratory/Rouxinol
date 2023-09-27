#include<stdio.h>
int main(){

	int a, b, c;
	while (1){
		scanf("%d %d", &a, &b);
		if (a == 0 && b==0){
			break;
		}
		else if (a > b){
			c = a;
			a = b;
			b = c;
			printf("%d %d\n", a, b);
		}
		else
		printf("%d %d\n", a, b);
	}
	
	return 0;
}