#include <iostream>
#define INF 1e+9
using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin >> a >> b;
		if(!a) break;
		int dp[17][17] = {};
		for(int i = 1;i < 17;i++) for(int j = 1;j < 17;j++) dp[i][j] = INF;
		cin >> c;
		for(int i = 0;i < c;i++){
			int d,e;
			cin >> d >> e;
			dp[d][e] = 0;
		}
		for(int i = 1;i <= a;i++){
			for(int j = 1;j <= b;j++){
				if(i == 1 && j == 1) dp[i][j] = 1;
				else if(dp[i][j]) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[a][b] << endl;
	}
	return 0;
}