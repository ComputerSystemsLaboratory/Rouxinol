#include<stdio.h>

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)

using namespace std;


int main(){
	int n,ans;
	int m[]={500,100,50,10,5,1};
	for(;;){
		scanf("%d",&n);
		if(n==0)break;
		ans=0;
		n=1000-n;
		rep(i,6)while(m[i]<=n){
			ans++;
			n-=m[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}