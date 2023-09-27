#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n=0, k=0;
	int *a;
	long sum  = 0;
	long msum = 0;
	while(true){
		sum = 0;
		scanf("%d %d", &n, &k);
		if(n==0){break;}
		a = (int*)malloc(sizeof(int) * n);
		for(int i=0; i<n; ++i){
			scanf("%d", a+i);
		}

		for(int i=0; i<k; ++i){
			sum += a[i];
		}
		msum = sum;

		for(int i=0; k<n; ++i,++k){
			sum = sum - a[i] + a[k];
			if(sum > msum){
				msum = sum;
			}
		}
		printf("%d\n", msum);
		free(a);
	}
	return 0;
}