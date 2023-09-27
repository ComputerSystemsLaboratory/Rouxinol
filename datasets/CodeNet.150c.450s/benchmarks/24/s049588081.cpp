#include <stdio.h>

int main(void){
	int n, m, i, j, d[10000], p[10000], max_i, tmp1, tmp2, sum;
	while(1){
		scanf("%d%d",&n,&m);
		if(n == 0 && m == 0)
			break;
		for(i = 0;i < n;i++)
			scanf("%d%d",&d[i],&p[i]);
		for(i = 0;i < n - 1;i++){
			max_i = i;
			for(j = i + 1;j < n;j++){
				if(p[max_i] < p[j])
					max_i = j;
			}
			if(i != max_i){
				tmp1 = d[max_i];
				tmp2 = p[max_i];
				d[max_i] = d[i];
				p[max_i] = p[i];
				d[i] = tmp1;
				p[i] = tmp2;
			}
		}
		for(i = 0;i < n;i++){
			m -= d[i];
			if(m < 0)
				break;
		}
		sum = 0;
		if(i != n){
			sum += -m * p[i];
			while(++i < n)
				sum += d[i] * p[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}