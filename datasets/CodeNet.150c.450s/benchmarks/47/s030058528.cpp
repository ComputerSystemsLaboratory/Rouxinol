#include <stdio.h>

int main(){
	int w, h, x, y, r;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	
	if((r <= x) && (x <= (w - r)) && (r <= y) && (y <= (h - r))){
		puts("Yes");
	}
	else{
		puts("No");
	}
	
	return 0;
}
 