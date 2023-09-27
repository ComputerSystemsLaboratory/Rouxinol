#include <stdio.h>

int main(void)
{
	int d;
	int n, i;
	int ans;
	
	n = 600;
	while (scanf("%d", &d) != EOF){
		ans = 0;
		
		for (i = 0; i < n; i += d){
			ans += (d * i * i);
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}