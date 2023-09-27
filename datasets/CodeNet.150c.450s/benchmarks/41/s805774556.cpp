#include <stdio.h>
const long long int INF=100000000000000000;
int main(){
	int n,m,l,r,c;
	long long int g[110][110];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i==j)g[i][j]=0;
		else g[i][j]=INF; 
	}
	while(m--){
		scanf("%d%d%d",&l,&r,&c);
		g[l][r]=c;
	}
	for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(g[i][k]==INF||g[k][j]==INF)continue;
	if(g[i][k]+g[k][j]<g[i][j])g[i][j]=g[i][k]+g[k][j];
	}
	for(int i=0;i<n;i++)if(g[i][i]<0){
	printf("NEGATIVE CYCLE\n");
	return 0;
	}
	for(int i=0;i<n;i++){
		if(g[i][0]==INF)printf("INF");
		else printf("%lld",g[i][0]);
		for(int j=1;j<n;j++){
			if(g[i][j]==INF)printf(" INF");
			else printf(" %lld",g[i][j]);
		}
		printf("\n");
	}
}