#include <stdio.h>

int main() {
	// your code goes here
	while(1){
		int x, y, t;
		scanf("%d %d", &x, &y);
		if(0==x && 0==y) break;
		
		if(y > x){
			t=y;
			y=x;
			x=t;
		}
		printf("%d %d\n", y, x);
	}
	return 0;
}