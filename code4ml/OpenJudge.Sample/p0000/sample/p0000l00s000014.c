#include<stdio.h>

int main(){
	int height[10];
	int i,j,temp;
	for(i = 0; i < 10; i++){
		scanf("%d",&height[i]);
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(height[i] > height[j]){
				temp = height[i];
				height[i] = height[j];
				height[j] = temp;
			}
		}
	}

	for(i = 0; i < 3; i++){
		printf("%d\n",height[i]);
	}
	return 0;
}