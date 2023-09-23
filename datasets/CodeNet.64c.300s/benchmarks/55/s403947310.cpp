#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, x;
	x = 1;
	srand(x);
	for (i = 1;i<=10000 ; i++) {
		scanf("%d", &x);
		if (x == 0){
			break;
		}
		printf("Case %d: %d\n", i,x);

		
	}




	return 0;
}