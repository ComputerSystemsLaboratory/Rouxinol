#include <stdio.h>

//---------------------------------------
int c(int n, int x);   //????????????????????°
//---------------------------------------

int main(void)
{
	int n, x;   //1~n???????¨?x
	
	while(1){
		scanf("%d %d", &n, &x);
		if((n == 0) && (x == 0)){
			break;
		}
		else{
			printf("%d\n", c(n, x));
		}
	}
	return 0;
}
//-----------------------------//????????????????????°
int c(int n, int x)
{
	int count = 0;
	
	for(int i = n; i >= 3; i--){
		for(int j = i-1; j >= 2; j--){
			for(int k = j-1; k >= 1; k--){
				if((i+j+k) == x){
					count++;
				}
			}
		}
	}
	return count;
}

/*-----------------------------//????????????????????°
int c(int n, int x)
{
	int count = 0;
	
	for(int n1 = 1; n1 <= n/2, n1++){  
		x -= n1;
		for(int n2 = 2; n2 <= n/2, n2++){
			x -= n2;
			if((n1 != n2) && (n1 != x) && (n2 != x)){
				count++;
			}
		}
	}
	return count;
}
-----------------------------------*/