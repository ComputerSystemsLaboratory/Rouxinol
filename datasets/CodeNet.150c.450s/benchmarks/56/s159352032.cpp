#include <stdio.h>


int main(void) {

	// 1_4-D Min,Max and Sum

	int n;
	long a;
	long min,max,sum;
	int i;
	
	scanf("%d\n",&n);
	min = 1000000;
	max = -1000000;
	sum = 0;

	for(i=0; i<n; i++){
		scanf("%ld",&a);
		if(a<min){
			min = a;
		}
		if(max<a){
			max = a;
		}
		sum = sum + a;
		
	}
	if(n == 0){
		min = 0;
		max = 0;
	}

	printf("%ld %ld %ld\n",min,max,sum);
        return 0;
}