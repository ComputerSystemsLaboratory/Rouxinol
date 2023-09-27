#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	while(true){
		int n,m,a[100],b[100],sa=0,sb=0,ansa=1e7,ansb=1e7;
		scanf("%d%d",&n,&m);
		if(n==0) break;
		rep(i,n) { scanf("%d",a+i); sa+=a[i]; }
		rep(i,m) { scanf("%d",b+i); sb+=b[i]; }
		rep(i,n) rep(j,m){
			if(sa-a[i]+b[j]==sb-b[j]+a[i]){
				if(ansa+ansb>a[i]+b[j]) ansa=a[i],ansb=b[j];
			}
		}
		if(ansa==1e7) printf("-1\n");
		else printf("%d %d\n",ansa,ansb);
	}
	return 0;
}