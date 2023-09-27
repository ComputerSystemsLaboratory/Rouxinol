#include <stdio.h>
int main(){
	
	int n, x, count;
	
	while(1){
	scanf("%d", &n);
	scanf("%d", &x);
	
	if(n == 0 && x == 0)
		return 0;
	
	count = 0;
	
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			for(int k = j+1; k <= n; k++){
				if(i+j+k == x)
					count++;
				}
			}
		}
	printf("%d\n", count);
	}
  	return 0;
}