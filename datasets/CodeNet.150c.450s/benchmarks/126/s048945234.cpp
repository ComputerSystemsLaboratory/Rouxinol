#include <stdio.h>
#include <string.h>

int main(void){
	int a, b, n, i, j, k, x[40], y[40], m[16][16];
	while(1){
		scanf("%d%d",&a,&b);
		if(a == 0 && b == 0) break;
		scanf("%d",&n);
		memset(m,0,sizeof(m));
		m[0][0] = 1;
		for(i = 0;i < n;i++){
			scanf("%d%d",&x[i],&y[i]);
			x[i]--,y[i]--;
		}
		for(i = 0;i < a;i++){
			for(j = 0;j < b;j++){
				if(j != b - 1){
					for(k = 0;k < n;k++)
						if(i == x[k] && j + 1 == y[k]) break;
					if(k == n)
						m[i][j + 1] += m[i][j];
				}
				if(i != a - 1){
					for(k = 0;k < n;k++)
						if(i + 1 == x[k] && j == y[k]) break;
					if(k == n)
						m[i + 1][j] += m[i][j];
				}
			}
		}
		printf("%d\n",m[a - 1][b - 1]);
	}
	return 0;
}