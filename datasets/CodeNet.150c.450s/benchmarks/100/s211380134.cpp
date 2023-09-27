#include <stdio.h>

int main(){
	int n;
	int x[40];
	int i,k;
	int Flag = 0;
	
	for(i = 0;i < 40;i++){
		x[i] = 0;
	}
	
	x[39] = 1;
	
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++){
		for(k = 0;k <= 39;k++){
			x[k] *= i;
		}
		
		for(k = 39;k >= 0;k--){
			if(x[k] >= 10){
				x[k-1] += x[k]/10;
				x[k] %= 10;
			}
		}
	}
	
	for(i = 0;i < 40;i++){
		if(x[i] != 0){
			Flag = 1;
		}
		if(Flag == 1){
			printf("%d",x[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
			