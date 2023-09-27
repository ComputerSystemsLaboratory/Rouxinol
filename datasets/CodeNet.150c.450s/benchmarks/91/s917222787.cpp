#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int a[1000000];
	int b;
	int i, j, p;
	int c[30];
	p = 0;
	while (scanf("%d", &n) != EOF){
		b = (int)pow((double)n, 0.5);
		c[p] = 0;
		a[0] = -1;
		for (i = 2; i <= b; i++){
			for (j = 2; j <= n / i; j++){
				a[i*j - 1] = -1;
			}
		}
		for (i = 1; i <= n; i++){
			if (a[i - 1] != -1){ c[p]++; }
			a[i - 1] = 0;
		}
		p++;
	}
	for (i = 0; i < p; i++){
		printf("%d\n", c[i]);
	}
	return 0;
}