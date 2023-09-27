#include <stdio.h>

int main(){
	
	int x, n, i, j, k, count = 0;
	
	while(1){
	
	scanf("%d", &n);
	scanf("%d", &x);
	
	if(x == 0 && n == 0)
		return 0;
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			for (k = 1; k < n; k++)
			if(i+j+k == x && i !=j && i!=k && k != j && i > j && j > k){
				count = count + 1;
			}
		
		printf("%d\n", count);
		count = 0;
			
	}
}