#include <stdio.h>

int main(){
	
	int x;

	for (int i = 1; i <= 10000; i++){

		scanf("%d", &x);

		if (x == 0) return 0;

		printf("Case %d: %d\n", i, x);
	}

	return 0;
}