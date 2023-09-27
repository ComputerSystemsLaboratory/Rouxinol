#include <stdio.h>
#include <string.h>

int main(void){
	int n, i, j, f[86400], time[3] = {3600,60,1}, h, m, s, c1, c2, max;
	while(1){
		scanf("%d%*c",&n);
		if(!n)
			break;
		memset(f,0,sizeof(f));
		for(i = 0;i < n;i++){
			scanf("%d%*c%d%*c%d",&h,&m,&s);
			c1 = h * time[0] + m * time[1] + s * time[2];
			scanf("%d%*c%d%*c%d",&h,&m,&s);
			c2 = h * time[0] + m * time[1] + s * time[2];
			for(j = c1;j < c2;j++) f[j]++;
		}
		max = -1;
		for(i = 0;i < 86400;i++)
			if(max < f[i]) max = f[i];
		printf("%d\n",max);
	}
	return 0;
}