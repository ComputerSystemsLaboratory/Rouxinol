#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
const ll INF = 10000000000;

int main(){
	int v,e;
	ll d[100][100];
	scanf("%d %d",&v,&e);
	fill(d[0],d[0]+10000,INF);
	for(int i=0;i<v;i++) d[i][i] = 0;
	for(int i=0;i<e;i++){
		int s,t;
		ll dist;
		scanf("%d %d %lld",&s,&t,&dist);
		d[s][t] = dist;
	}
	for(int k=0;k<v;k++){
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(d[i][k]!=INF&&d[k][j]!=INF) d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
			}
		}
	}
	bool flag = false;
	for(int i=0;i<v;i++){
		if(d[i][i]<0) flag = true;
	}
	if(flag){
		printf("NEGATIVE CYCLE\n");
	}else{
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(d[i][j]==INF) printf("INF");
				else printf("%lld",d[i][j]);
				if(j==v-1) printf("\n");
				else printf(" ");
			}
		}
	}
	return 0;
}