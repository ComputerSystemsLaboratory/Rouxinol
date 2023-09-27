#include <cstdio>
using namespace std;
#define MOD 100000
int main(){
	int W,H;
	while(1){
		scanf("%d%d",&W,&H);
		if(W == 0 && H == 0){
			break;
		}
		int dp[20][20]={{0}};
		int stage[17][17]={{0}};
		int N;
		scanf("%d",&N);
		for(int i = 0; i < N; i++){
			int a,b;
			scanf("%d %d",&a,&b);
			stage[b][a] = 1;
		}
		dp[1][0] = 1;
		for(int i = 1; i <= H; i++){
			for(int j = 1; j <= W; j++){
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
				if(stage[i][j])dp[i][j] = 0;
			}
		}


		printf("%d\n",dp[H][W]);
	}
	return 0;
}