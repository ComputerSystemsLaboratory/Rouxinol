#include <cstdio>
#define max(a,b)(a>=b?a:b)
bool osenbei[10][10000];
int r,c,s,cnt,res,ans;
int i,j,k;
int main() {
	while(scanf("%d %d",&r,&c),r) {
		for(i=0;i<r;i++)for(j=0;j<c;j++) {
			scanf("%d",&s);
			osenbei[i][j]=s;
		}
		ans=0;
		for(i=0;i<(1<<r);i++) {
			for(j=0;j<r;j++)if(i&(1<<j))
				for(k=0;k<c;k++)osenbei[j][k]=!osenbei[j][k];
			res=0;
			for(j=0;j<c;j++) {
				cnt=0;
				for(k=0;k<r;k++)cnt+=osenbei[k][j];
				res+=max(cnt,r-cnt);
			}
			ans=max(ans,res);
			for(j=0;j<r;j++)if(i&(1<<j))
				for(k=0;k<c;k++)osenbei[j][k]=!osenbei[j][k];
		}
		printf("%d\n",ans);
	}
}