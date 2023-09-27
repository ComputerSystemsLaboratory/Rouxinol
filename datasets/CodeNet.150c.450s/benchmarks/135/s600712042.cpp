#include <stdio.h>
#include <string.h>

int main(void){
	int sw[1500001],sum, n, m, i, j, k, count, w[1500], h[1500];
	while(1){
		scanf("%d%d",&n,&m);
		if(n == 0 && m == 0)
			break;
		for(i = 0;i < n;i++)
			scanf("%d",&h[i]);
		for(i = 0;i < m;i++)
			scanf("%d",&w[i]);
		memset(sw,0,sizeof(sw));
		for(i = 0;i < m;i++){
			for(j = i;j < m;j++){
				sum = 0;
				for(k = i;k <= j;k++)
					sum += w[k];
				sw[sum]++;
			}
		}
		count = 0;
		for(i = 0;i < n;i++){
			for(j = i;j < n;j++){
				sum = 0;
				for(k = i;k <= j;k++)
					sum += h[k];
				if(sw[sum])
					count += sw[sum];
			}
		}
		printf("%d\n",count);
	}
	return 0;
}