#include <stdio.h>

bool INCLUDE3(int x)
{		
	if(x % 3 == 0){
		return true;
	}
	
	while(true){
		if(x % 10 == 3){
			return true;
		}
		
		x /= 10;
		
		if(x == 0){
			break;
		}
	}
	
	return false;
}
	
int main(void)
{
	int n;
		
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
	
		if(INCLUDE3(i)){
			printf(" %d", i);
		}
	}
	printf("\n");
	
	return 0;
}