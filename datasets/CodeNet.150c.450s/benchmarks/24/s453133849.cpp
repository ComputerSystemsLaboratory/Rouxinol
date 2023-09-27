#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	while(true){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0) break;
		int o[11]={};
		rep(i,n){
			int d,p;
			scanf("%d%d",&d,&p);
			o[p]+=d;
		}
		int ans=0;
		for(int i=10;i>=0;i--){
			if(m>o[i]){
				m-=o[i];
				continue;
			}else{
				ans+=i*(o[i]-m);
				for(int j=i-1;j>=0;j--) ans+=j*o[j];
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}