#include <cstdio>
int dt[101][101];
int d[101], f[101];

int n;
int t=1;
void dfs(int s){
	d[s]=t++;
	for(int i=1;i<=n;i++){
		if(dt[s][i]&&d[i]==0){
			dfs(i);
		}
	}
	f[s]=t++;
}
int main(){
	int fi, v, g;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&fi,&v);
		for(int j=1;j<=v;j++){
			scanf("%d",&g);
			dt[fi][g]=1;
		}
	}
	d[1]=1;
	int flag=true;
	dfs(1);
	for(int i=1;i<=n;i++){
		if(!d[i]){
			dfs(i);
		}
	}
			
	for(int i=1;i<=n;i++){
		printf("%d %d %d\n",i,d[i],f[i]);
	}
	return 0;
}