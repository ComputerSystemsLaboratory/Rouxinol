#include <stdio.h>

int main(void){
	double sum;
	int n, m, p, i, x[100];
	while(1){
		scanf("%d%d%d",&n,&m,&p);
		if(n == 0 && m == 0 && p == 0)
			break;
		sum = 0;
		for(i = 0;i < n;i++){
			scanf("%d",&x[i]);
			sum += 100 * x[i];
		}
		if(x[m - 1] != 0){
			sum = sum * (100 - p) * 0.01;
			sum /= x[m - 1];
			printf("%d\n",(int)sum);
		}
		else
			printf("0\n");
	}
	return 0;
}