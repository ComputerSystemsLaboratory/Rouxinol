#include <stdio.h>

int main(void) {
	int a, b, c, i ,j;
	scanf("%d", &j);
	for(i= 1; i <= j ;i++){
		scanf("%d%d%d", &a, &b, &c);
		if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return 0;
}