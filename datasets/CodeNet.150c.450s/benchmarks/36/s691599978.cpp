#include <stdio.h>

int main(void)
{
	int i;
	int d;
	int ans;
	
	while (scanf("%d", &d) != EOF){
		ans = 0;
		for (i = d; i <= 600 - d; i += d){
			ans += (i * i) * d;
		}
		printf("%d\n", ans);
	}
	return (0);
}