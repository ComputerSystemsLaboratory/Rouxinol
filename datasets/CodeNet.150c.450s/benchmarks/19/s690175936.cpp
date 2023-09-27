#include <stdio.h>

int main(){
	
	int x, y, i = 1;
	
	while(1){
		scanf("%d", &x);
		scanf("%d", &y);
		if(x == 0&& y == 0)
			break;
		if(x <= y)
			printf("%d %d\n",x ,y);
		else
			printf("%d %d\n",y ,x);
		i++;
	}
	return 0;
}