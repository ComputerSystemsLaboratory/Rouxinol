#include<cstdio>
#include<string>
#include<vector>
#include<sstream>
#include<deque>
#include<algorithm>
#include<queue>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int ini[100001];
int main(){
	while(1){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0)break;
		rep(i,n){
			scanf("%d",&ini[i]);
		}
		
		int sum=0;
		rep(i,m){
			sum+=ini[i];
		}
		
		int maxi=sum;
		for(int i=m;i<n;i++){
			sum-=ini[i-m];
			sum+=ini[i];
			maxi=max(maxi,sum);
		}
		
		printf("%d\n",maxi);
	}
}