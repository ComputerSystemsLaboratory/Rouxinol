#include <iostream>
using namespace std;

// dp[n][s] := n個の数字を使って合計がsのときの組合せ数
int dp[10][110] = {0};

int main(){
	dp[0][0] = 1;
	for(int i = 0; i < 10; i++){
		for(int j = 100; j >= 0; j--){
			for(int k = 9; k >= 1; k--){
				if( j - i >= 0 ){
					dp[k][j] += dp[k - 1][j - i];
				}
			}
		}
	}
	
	int n, s;
	while( cin >> n >> s , n || s ){
		cout << dp[n][s] << endl;
	}
}