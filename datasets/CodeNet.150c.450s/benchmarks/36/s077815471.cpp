#include <stdio.h>

int f(int x){
	return x*x;
}

int main(void){
	int d = 0;
	int len = 600;
	int n = 0;
	int sum = 0;
	while(scanf("%d", &d) != EOF){
		n = len / d;
		sum = 0;
		for(int i=0; i<n; ++i){
			sum += f(d*i)*d;
		}
		printf("%d\n", sum);
	}
	return 0;
}