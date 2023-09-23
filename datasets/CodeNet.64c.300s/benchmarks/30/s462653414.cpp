#include<stdio.h>
 
int main(){
	int a, b, i, ans = 0;
	while(scanf("%d", &a) != 0){
		if(a == 0) break;
		a = 1000 - a;
		ans += a / 500;
		a = a % 500;
		ans += a / 100;
		a = a % 100;
		ans += a / 50;
		a = a % 50;
		ans += a / 10;
		a = a % 10;
		ans += a / 5;
		ans += a % 5;
		printf("%d\n", ans);
		ans = 0;
	}
	return 0;
}