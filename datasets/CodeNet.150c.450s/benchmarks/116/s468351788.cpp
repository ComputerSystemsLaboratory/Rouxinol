#include <stdio.h>

#define REV_INF (1 << 31)

int main(void)
{
	int data[100000];
	int n;
	int k;
	int sum;
	int sum_max;
	int i;
	
	while (1){
		scanf("%d%d", &n, &k);
		
		if (n == 0){
			break;
		}
		
		for (int i = 0; i < n; i++){
			scanf("%d", &data[i]);
		}
		
		sum = 0;
		
		for (i = 0; i < k; i++){
			sum += data[i];
		}
		
		sum_max = sum;
		for (; i < n; i++){
			sum += data[i];
			sum -= data[i - k];
			if (sum_max < sum){
				sum_max = sum;
			}
		}
		
		printf("%d\n", sum_max);
	}
	
	return (0);
}