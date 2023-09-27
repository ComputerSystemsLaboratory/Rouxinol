#include <cstdio>
#define rep(i,n)for(i=0;i<n;i++)
#define max(a,b)(a>=b?a:b)
bool osenbei[10][10000];
int r,c,s,cnt,res,ans,i,j,k;
int main() {
	while(scanf("%d %d",&r,&c),r) {
		rep(i,r)rep(j,c)scanf("%d",&s),osenbei[i][j]=s;
		ans=0;rep(i,1<<r) {
			rep(j,r)if(i&(1<<j))rep(k,c)osenbei[j][k]=!osenbei[j][k];
			res=0;rep(j,c) {cnt=0;rep(k,r)cnt+=osenbei[k][j];res+=max(cnt,r-cnt);}
			ans=max(ans,res);
			rep(j,r)if(i&(1<<j))rep(k,c)osenbei[j][k]=!osenbei[j][k];
		}
		printf("%d\n",ans);
	}
}