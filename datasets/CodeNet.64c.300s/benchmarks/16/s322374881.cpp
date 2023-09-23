#include <stdio.h>

int main(void)
{
	int n;
	long ans, min;
	scanf("%d", &n);
	long r[n];
	for(int i = 0; i < n; i++){
		scanf("%ld", &r[i]);
	}
	ans = r[1] - r[0];
	min = r[0];
	for(int i = 1; i < n; i++){
		if(min > r[i]){
			min = r[i];
		}else{
			long temp = r[i] - min;
			if(ans < temp){
				ans = temp;
			}
		}
	}
	printf("%ld\n", ans);
	return 0;
}