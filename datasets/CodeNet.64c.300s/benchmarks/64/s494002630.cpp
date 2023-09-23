#include <stdio.h>

int gcd(int x, int y){
	int ans;
	if(x == 0){
		return y;
	}else if(y == 0){
		return x;
	}else if(x > y){
		ans = gcd(y, x % y);
	}else{
		ans = gcd(x, y % x);
	}
	return ans;
}

int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
	return 0;
}