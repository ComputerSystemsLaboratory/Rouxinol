#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b&&a < c){
		printf("%d ", a);
		if (b < c){
			printf("%d %d\n", b, c);
		}
		else{
			printf("%d %d\n", c, b);
		}
	}
	else if (b < a&&b < c){
		printf("%d ", b);
		if (a < c){
			printf("%d %d\n", a, c);
		}
		else{
			printf("%d %d\n", c, a);
		}
	}
	else{
		printf("%d ",c);
		if (b<a){
			printf("%d %d\n",b,a);
		}
		else{
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}