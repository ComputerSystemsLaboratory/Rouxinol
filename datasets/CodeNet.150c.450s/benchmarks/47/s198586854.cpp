#include<stdio.h>
int main(void){
	int W, H, x, y, r, a, b, c, d;
	scanf("%d", &W);
	scanf("%d", &H);
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &r);
	a = x - r;
	b = y + r;
	c = x + r;
	d = y - r;
	if ( 0 > a ){
		printf("No\n");
	}
	else if( b > H ){
		printf("No\n");
	}
	else if( c > W ){
		printf("No\n");
	}
	else if( 0 > d ){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}