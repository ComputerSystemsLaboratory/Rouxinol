#include <stdio.h>

int main(void)
{
	int i;
	int a[10000], b[10000];
	int n;
	int ans_a, ans_b;
	
	while (1){
		
		ans_a = 0;
		ans_b = 0;
		
		scanf("%d", &n);
		
		if (n == 0){
			break;
		}
		
		for (i = 0; i < n; i++){
			scanf("%d %d", &a[i], &b[i]);
		}
		
		for (i = 0; i < n; i++){
			if (a[i] > b[i]){
				ans_a += (a[i] + b[i]);
			}
			else if (a[i] < b[i]){
				ans_b += (a[i] + b[i]);
			}
			else {
				ans_a += a[i];
				ans_b += b[i];
			}
		}
		printf("%d %d\n", ans_a, ans_b);
	}
	return (0);
}