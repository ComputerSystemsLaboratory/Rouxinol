#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int H,W,n;
	while(cin >> W >> H , H){
		cin >> n;
		int dp[17][17] = {0};
		bool bad[17][17] = {0};
		rep(i,n){
			int a,b;
			cin >> a >> b;
			bad[b][a] = 1;
		}
		for(int i=1;i<=H;i++){
			for(int j=1;j<=W;j++){
				if(i == 1 && j == 1){
					dp[1][1] = 1;
				}else{
					dp[i][j] = dp[i-1][j] + dp[i][j-1];
				}
				if(bad[i][j])dp[i][j] = 0;
			}
		}
		cout << dp[H][W] << endl;
		
	}
}