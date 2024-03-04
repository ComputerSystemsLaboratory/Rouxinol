#include<stdio.h>



int main(void){
		int i;
		int j;
		int k;
		int m=10;
		int p;
		int n[10] = { 0 };
		for (p = 0; p < 10; p++)
		scanf("%d", &n[p]);
		if (n[9] < 0){
			return 0;
		}
		if (n[9] > 10000){
			return 0;
		}
		else{
			for (i = 0; i < m; i++){
				for (j = i + 1; j < m; j++){
					if (n[i]> n[j]){
						k = n[j];
						n[j] = n[i];
						n[i] = k;
					}
				}
			}
			
		}

		printf("%d %d %d", n[9], n[8], n[7]);
		
	return 0;

	}