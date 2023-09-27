#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define inf 0x3f3f3f3f
#define maxn 15
#define maxm 55
using namespace std;
typedef long long ll;
int f[maxn][maxn],n;
bool app[maxn];
int main(){
	while(~scanf("%d",&n) && n){
		memset(app,false,sizeof(app));
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				f[i][j] = inf;
			}
		}
		for(int i=0;i<10;i++) f[i][i] = 0;
		for(int i=1;i<=n;i++){
			int u,v,w;
			scanf("%d%d%d",&u,&v,&w);
			app[u] = app[v] = true;
			f[u][v] = f[v][u] = min(f[u][v],w);
		}
		for(int k=1;k<=10;k++){
			for(int i=0;i<10;i++){
				for(int j=0;j<10;j++){
					f[i][j] = min(f[i][j],f[i][k-1] + f[k-1][j]);
				}
			}
		}
		int cit,ans=inf,tot;
		for(int i=0;i<=9;i++){
			if(!app[i]) continue;
			tot=0;
			for(int j=0;j<=9;j++){
				if(!app[j]) continue;
				tot += f[i][j];
			}
			if(tot < ans){
				ans = tot;
				cit = i;
			}
		}
		printf("%d %d\n",cit,ans);
	}
	return 0;
}

