#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int ran[10001];
int main(){
	while(true){
		int n,a,b,c,x;
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&x);
		if(n==0) break;
		ran[0]=x;
		rep(i,10000) ran[i+1]=(a*ran[i]+b)%c;
		int cnt=0;
		int y[100];
		rep(i,n) scanf("%d",y+i);
		bool ok=false;
		int now=0;
		rep(i,10001){
			if(ran[i]==y[now]) now++;
			if(now==n){
				ok=true;
				printf("%d\n",i);
				break;
			}
		}
		if(!ok) printf("-1\n");
	}
	return 0;
}