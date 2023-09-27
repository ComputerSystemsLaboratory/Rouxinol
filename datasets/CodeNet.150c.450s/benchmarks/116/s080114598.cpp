#include<cstdio>
#include<math.h>
#include<algorithm>

using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
const int INF=1001001001;
int N,K;
int A[100002];


int main(){
	while(1){
	scanf("%d %d",&N,&K);
	if(N==0&&K==0)break;
	rep(i,N)scanf("%d",&A[i]);
	long long int ans=0;
	long long int sans=0;
	rep(i,K)sans+=A[i];
	ans=sans;
	rep(i,N-K){
		sans-=A[i];
		sans+=A[i+K];
		ans=max(ans,sans);
	}
	printf("%lld\n",ans);
	}
}