#include<bits/stdc++.h>
#define SIZE 100005
#define MAX_V 100001
#define INF (1e9 + 1)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int g[10][10];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(i==j)g[i][j]=0;
				else g[i][j]=999999999;
			}
		}
		int t=0;
		for(int i=0;i<a;i++){
			int c,d,e;
			scanf("%d%d%d",&c,&d,&e);
			if(t<c)t=c;
			if(t<d)t=d;
			g[c][d]=e;
			g[d][c]=e;
		}
		t++;
		for(int k=0;k<t;k++){
			for(int i=0;i<t;i++){
				for(int j=0;j<t;j++){
					if(g[i][k]+g[k][j]<g[i][j]) g[i][j]=g[i][k]+g[k][j];
				}
			}
		}
		int n=0;
		ll ans = 9999999999;
		for(int i=0;i<t;i++){
			ll now=0;
			for(int j=0;j<t;j++) now+=g[i][j];
			if(ans>now){
				ans=now;
				n=i;
			}
		}
		printf("%d %lld\n",n,ans);
	}
}
