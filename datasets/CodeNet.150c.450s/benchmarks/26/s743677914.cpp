#include <iostream>

int main(){
	int a = 0, b = 0;
	
	scanf("%d %d", &a, &b);

	if (a < b){
		printf("a < b\n");
	}else if (a > b){
		printf("a > b\n");
	}else{
		printf("a == b\n");
	}

	return 0;
}