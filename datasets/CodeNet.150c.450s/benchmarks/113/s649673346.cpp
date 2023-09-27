#include<stdio.h>

int main(){
	int i = 0;
	int x = 1;
	while (x<= 10000){
		
		
			scanf("%d", &i);
			if (i == 0){
				break;
			}
			printf("Case %d: %d\n",x, i);
			x = x + 1;
		
		 

	}
	return 0;
}