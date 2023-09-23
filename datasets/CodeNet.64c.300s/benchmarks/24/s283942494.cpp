#include <stdio.h>

int main(void)
{
	int ans_a, ans_b;
	int n;
	int a, b;
	
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		
		ans_a = ans_b = 0;
		while (n){
			scanf("%d %d", &a, &b);
			
			if (a > b){
				ans_a += (a + b);
			}
			else if (a < b){
				ans_b += (a + b);
			}
			else {
				ans_a += a;
				ans_b += b;
			}
			
			n--;
		}
		printf("%d %d\n", ans_a, ans_b);
	}
	
	return (0);
}