#include <stdio.h>

int main(void){

	int max;
	int i;
	int x;

	scanf("%d", &max);
	
	for(i=1;i<=max;i++){
		if(i%3==0){
			printf(" %d",i);
		}else{
			for(x=i;x>0;x/=10){
				if(x%10==3){
					printf(" %d",i);
					break;
				}
			}
		}
	}
	
	printf("\n");
	
	return 0;
}