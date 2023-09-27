#include<stdio.h>

int gcd(int x, int y);

int main(){
	int a = 0, b = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	if( a > b){
		int temp = a;
		a = b;
		b = temp;
	}

	printf("%d\n", gcd(a, b));

	return 0;
}

int gcd(int x, int y){
	if( y == 0 ){
		return x;
	}
	return gcd(y, x%y);
}