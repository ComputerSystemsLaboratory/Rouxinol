#include <iostream>
using namespace std;
#define INF (long)1e6
long dp[10][10];
int main() {
	int n ;
	while(1){
		cin >> n ; if(!n) break;
		for(int i=0;i<10;i++) for(int j=0;j<10;j++) dp[i][j]=INF;
		for(int i=0;i<10;i++) dp[i][i]=0;
		int V=0;
		for(int i=0;i<n;i++){
			int a,b,c; cin >> a >> b >> c ;
			V=max(V,max(a,b));
			dp[a][b]=dp[b][a]=c;
		}
		for(int k=0;k<=V;k++) for(int i=0;i<=V;i++) for(int j=0;j<=V;j++)
			dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
		long NUM=0, MIN=INF;
		for(int i=0;i<=V;i++){
			int sum=0;
			for(int j=0;j<=V;j++) sum+=dp[i][j];
			if(sum<MIN) MIN=sum,NUM=i;
		}
		cout << NUM << ' ' << MIN << '\n' ;
	}
}