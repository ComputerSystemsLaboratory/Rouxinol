#include<stdio.h>
int main()
{
	int a = 0, b = 0, x, y, n, i;
	for (;;){
		scanf("%d", &n);
		if (n == 0)
			break;
		for (i = 0; i < n; i++){
			scanf("%d %d", &x, &y);
			if (x > y){
				a += x + y;
			}
			else if (x == y){
				a += x;
				b += y;
			}
			else
				b += x + y;
		}
		printf("%d %d\n", a, b);
		a = 0;
		b = 0;
	}
	return 0;
}