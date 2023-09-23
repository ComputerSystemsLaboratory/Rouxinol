#include<stdio.h>
int main(){
	int x = 1, y = 1, tmp;
	while (x != 0, y != 0){
		scanf("%d", &x);
		scanf("%d", &y);
		if (x > y){
			tmp = x;
			x = y;
			y = tmp;
			
		}
		if (x != 0, y != 0){
			printf("%d %d\n", x, y);
		}

	}
	return 0;
}