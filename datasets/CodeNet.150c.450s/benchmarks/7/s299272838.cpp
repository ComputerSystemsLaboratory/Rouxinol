#include <stdio.h>

int main(){
	int height[10], rank[3] = {0};
	int i;
	
	for(i = 0; i < 10; i++){
    	scanf("%d\n", &height[i]);

        if (rank[0] < height[i]){
        	rank[2] = rank[1];
        	rank[1] = rank[0];
        	rank[0] = height[i];
        }else if (rank[1] < height[i]){
        	rank[2] = rank[1];
        	rank[1] = height[i];
        }else if (rank[2] < height[i]){
        	rank[2] = height[i];
        }
    }

    for(i = 0; i < 3; i++){
    	printf("%d\n", rank[i]);
    }

	return 0;
}