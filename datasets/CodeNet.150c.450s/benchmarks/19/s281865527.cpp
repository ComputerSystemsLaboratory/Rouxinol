#include<stdio.h>

int main(){
	int x, y, z;
	while (true){
		scanf("%d %d", &x, &y);
		if (x > y){
			z = x;
			x = y;
			y = z;
		}
		if (x == 0 && y == 0)break;
		printf("%d %d\n", x, y);
	}
	return 0;
}