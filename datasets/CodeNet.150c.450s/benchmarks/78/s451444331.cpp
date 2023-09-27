#include <iostream>
using namespace std;

const int MAX_N = 1e+6;
const int INF = 1e+8;

int f(int n){
	return n * (n+1) * (n+2) / 6;
}

int dp[2][MAX_N+1] = {0};

int main(){
	for(int i=0 ; i < MAX_N ; i++ ){
		dp[0][i] = dp[1][i] = INF;
	}
	for(int i=1 ; f(i) < MAX_N ; i++ ){
		dp[0][f(i)] = 1;
		if( f(i) % 2 )
			dp[1][f(i)] = 1;
	}
	for(int i=1 ; i < MAX_N ; i++ ){
		if( dp[0][i] != INF ){
			for(int j=1 ; i + f(j) < MAX_N ; j++ ){
				dp[0][i+f(j)] = min( dp[0][i+f(j)] , dp[0][i]+1 );
			}
		}
		if( dp[1][i] != INF ){
			for(int j=1 ; i + f(j) < MAX_N ; j++ ){
				if( f(j) % 2 )
					dp[1][i+f(j)] = min( dp[1][i+f(j)] , dp[1][i]+1 );
			}
		}
	}
	
	int n;
	while( cin >> n , n ){
		cout << dp[0][n] << " " << dp[1][n] << endl;
	}
}