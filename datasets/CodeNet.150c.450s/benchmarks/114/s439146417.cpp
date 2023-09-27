#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=2147483647;
const double pi=3.1415926535897932384626;
inline ll read(){
	ll x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*f;
}
const int maxn=1e2+5;
int n,x,ans,minn,m[maxn][maxn],d[maxn],fa[maxn],vis[maxn];
int main(){
	n=read();
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			x=read();
			m[i][j]=(x==-1)?INF:x;
		}
	for(int i=1;i<=n;i++) d[i]=INF;
	d[1]=0;
	int u;
	while(1){
		u=0;
		minn=INF;
		for(int i=1;i<=n;i++)
			if(minn>d[i]&&!vis[i]){
				u=i;
				minn=d[i];
			}
		if(u==0) break;
		vis[u]=1;
		for(int i=1;i<=n;i++)
			if(!vis[i]&&m[u][i]!=INF&&d[i]>m[u][i]){
				d[i]=m[u][i];
				fa[i]=u;
			}	
	}
	for(int i=1;i<=n;i++)
		if(fa[i]) ans+=m[i][fa[i]];
	printf("%d\n",ans);
	return 0;
}
