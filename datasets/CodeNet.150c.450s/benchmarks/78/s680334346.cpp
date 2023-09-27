#include <stdio.h>
#include <string.h>
#define INF 1000001

int main(void){
	int i, j, n ,c, small1, small2;
	int dp1[1000000],dp2[1000000];
	scanf("%d",&n);
	while(n != 0){
		for(i = 0;i <= n;i++)
			dp1[i] = dp2[i] = INF;
		dp1[0] = dp2[0] = 0;
		for(i = 0;i < n;i++){
			small1 = dp1[n];
			if(small1 > dp1[i] + 1 && dp1[i] != INF){
				for(j = 1,c = j * (j + 1) * (j + 2);c / 6 + i <= n;j++,c = j * (j + 1) * (j + 2)){
					if(dp1[c / 6 + i] > dp1[i] + 1 && dp1[i] != INF){
						dp1[c / 6 + i] = dp1[i] + 1;
					}
				}
			}
		}
		for(i = 0;i < n;i++){
			small2 = dp2[n];
			if(small2 > dp2[i] + 1 && dp2[i] != INF){
				for(j = 1,c = j * (j + 1) * (j + 2);c / 6 + i <= n;j++,c = j * (j + 1) * (j + 2)){
					if(dp2[c / 6 + i] > dp2[i] + 1 && (c / 6) % 2 == 1 && dp2[i] != INF)
						dp2[c / 6 + i] = dp2[i] + 1;
				}
			}
		}
		printf("%d %d\n",dp1[n],dp2[n]);
		scanf("%d",&n);
	}
	return 0;
}