#include <stdio.h>

int main()
{
	int a[50];
	int n,w;
	int x,y;
	int dummy;
	while(scanf("%d", &n) != EOF){
		scanf("%d", &w);
		for(int i = 1; i <= n; i++){
			a[i] = i;
		}
		for(int i = 0; i < w; i++){
			scanf("%d,%d", &x, &y);
			dummy = a[y];
			a[y] = a[x];
			a[x] = dummy;
		}
		for(int i = 1; i <= n; i++){
			printf("%d\n", a[i]);
		}
	}
	return 0;
}