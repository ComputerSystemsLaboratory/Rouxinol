#include <stdio.h>

int main(void){

	int x = 1, y = 1, temp;
	while(1){
		scanf("%d %d", &x, &y);
		temp = x;
		if(x != 0 || y != 0){
			x = (x < y)?x:y;
			y = (temp < y)?y:temp;
			printf("%d %d\n", x, y);
		}else{
			break;
		}
	}

	return 0;
}