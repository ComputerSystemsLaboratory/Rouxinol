#include <stdio.h>
#include <string.h>

int main(void){
	int n, m, h[1500], w[1500], sumw[1501], sumh[1501], ans, mapw[1500001];
	int i, j;
	while(1){
		scanf("%d%d",&n,&m);
		if((n | m) == 0){
			break;
		}
		for(i = 0;i < n;i++){
			scanf("%d",&h[i]);
		}
		for(i = 0;i < m;i++){
			scanf("%d",&w[i]);
		}
		ans = 0;
		sumh[0] = 0;
		sumw[0] = 0;
		for(i = 1;i <= n;i++){
			sumh[i] = sumh[i - 1] + h[i - 1];
		}
		for(i = 1;i <= m;i++){
			sumw[i] = sumw[i - 1] + w[i - 1];
		}
		memset(mapw,0,sizeof(mapw));
		for(i = 0;i <= m;i++){
			for(j = i + 1;j <= m;j++){
				mapw[sumw[j] - sumw[i]]++;
			}
		}
		for(i = 0;i <= n;i++){
			for(j = i + 1;j <= n;j++){
				ans += mapw[sumh[j] - sumh[i]];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}