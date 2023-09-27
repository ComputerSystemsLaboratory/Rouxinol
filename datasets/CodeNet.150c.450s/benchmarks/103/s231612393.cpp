//1〜10までの数を使って、n項の和をs+nにするという問題に置き換える。
#include<iostream>
using namespace std;

int dp[10][11][111];	//dp[今作った項][今使った数(昇順に使う)][今の和]

int main()
{
	int i,j,k,l;
	int n,s;
	
	while( cin >> n >> s ){
		if( !n )break;
		
		for( i = 0;i < 10;i++ ){
			for( j = 0;j < 11;j++ ){
				for( k = 0;k < 111;k++ ){
					dp[i][j][k] = 0;
				}
			}
		}
		dp[0][0][0] = 1;
		
		for( i = 0;i < n;i++ ){
			for( j = 0;j < 11;j++ ){
				for( k = 0;k <= s+n;k++ ){
					for( l = j+1;l < 11;l++ ){
						if( k+l > s+n )
							break;
						
						dp[i+1][l][k+l] += dp[i][j][k];
					}
				}
			}
		}
		int ans = 0;
		
		for( i = 0;i < 11;i++ ){
			ans += dp[n][i][s+n];
		}
		cout << ans << endl;
	}
	return 0;
}