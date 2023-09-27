#include<iostream>
#include<queue>
using namespace std;

int data[20][20];
int dp[20][20];
int w,h,n;

int main(){
	int i,j;
	int x,y;
	
	while(1){
		cin >> w >> h;
		if( !w )break;
		cin >> n;
		
		for( i = 0; i < 20; i++ ){
			for( j = 0; j < 20; j++ ){
				data[i][j] = 0;
				dp[i][j] = 0;
			}
		}
		
		for( i = 0; i < n; i++ ){
			cin >> x >> y;
			x--;y--;
			data[y][x] = 1;
		}
		
		dp[0][0] = 1;
		for( i = 0; i < h; i++ ){
			for( j = 0; j < w; j++ ){
				if( i+1 < h && !data[i+1][j] )
					dp[i+1][j] += dp[i][j];
				if( j+1 < w && !data[i][j+1] )
					dp[i][j+1] += dp[i][j];
			}
		}
		cout << dp[h-1][w-1] << endl;
	}
	return 0;
}