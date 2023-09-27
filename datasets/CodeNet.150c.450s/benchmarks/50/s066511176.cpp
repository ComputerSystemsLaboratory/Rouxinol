#include <stdio.h>

int main(void) {
	int n, i,cou, list[6] = {500, 100, 50, 10, 5, 1};
	
	while(scanf("%d", &n)){
		if(n == 0) break;
		cou = 0;
	n = 1000 - n;
	for( i = 0; 6 > i; i++){
		cou += n/list[i];
		n %= list[i];
		
		if(n == 0) break;
	}
	printf("%d\n", cou);
	}
	return 0;
}