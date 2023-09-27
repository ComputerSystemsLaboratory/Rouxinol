#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
int main(){
	while(true){
		int n,x[200],y[200];
		scanf("%d",&n);
		if(n==0) break;
		x[0]=0,y[0]=0;
		rep1(i,n-1){
			int ni,d;
			scanf("%d%d",&ni,&d);
			x[i]=x[ni]+dx[d],y[i]=y[ni]+dy[d];
		}
		int mxx=0,mxy=0,mnx=0,mny=0;
		rep(i,n){
			mxx=max(mxx,x[i]);
			mxy=max(mxy,y[i]);
			mnx=min(mnx,x[i]);
			mny=min(mny,y[i]);
		}
		printf("%d %d\n",mxx-mnx+1,mxy-mny+1);
	}
}