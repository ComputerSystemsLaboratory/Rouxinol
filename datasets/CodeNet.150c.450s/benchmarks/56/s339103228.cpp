#include <stdio.h>

int main(){
	int n,i, num, max, min;
	long sum;
	sum = 0;
	max = -1000000;
	min = 1000000;
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &num);
		if (num < min){
			min = num;
		}
		if (num > max){
			max = num;
		}
		sum = sum + num;
	}
	printf("%d %d %ld\n", min, max, sum);
	return 0;
}