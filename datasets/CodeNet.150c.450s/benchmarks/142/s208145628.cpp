#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	int nilai[a];
	for(int i = 0; i<a; i++){	
		scanf("%d", &nilai[i]);
	}
	
	for(int j = 0; j<a-b; j++){
		if(nilai[j] < nilai[j+b]){
		printf("Yes\n");
		}else{
			printf("No\n");
		}
		
	}
	return 0;
}