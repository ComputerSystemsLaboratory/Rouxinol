#include <stdio.h>
int main(){
	int a,b,c;
	int r = 0;
	while(scanf("%d %d", &a, &b) != EOF) {
		c = a+b;
		r = 0;

		while(1){
			if(c/10 == 0)break;
			c/=10;
			r++;
		}
		r++;
		printf("%d\n", r);
	}
	return 0;
}