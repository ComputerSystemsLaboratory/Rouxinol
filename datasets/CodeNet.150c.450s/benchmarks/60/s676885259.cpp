#include<cstdio>
const int max_n = 100;
int main(){
	int n;
	int u,k,v;
	int G[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			G[i][j] = 0;
		}
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&u,&k);
		for(int j=1;j<=k;j++){
			scanf("%d",&v);
			G[u-1][v-1] = 1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",G[i][j]);
			if(j!=n-1) printf(" ");
			else if(j == n-1) printf("\n");
		}
	}
	return 0;
}