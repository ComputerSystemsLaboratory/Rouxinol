#include <stdio.h>

int main(void){

	int x = 1, i = 1;
	while(1){
		scanf("%d", &x);
		if(x != 0){
			printf("Case %d: %d\n", i, x);
			i++;
		}
		
		if(x == 0){
			break;
		}
	}

	return 0;
}