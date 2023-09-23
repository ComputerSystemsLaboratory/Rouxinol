#include <iostream>
using namespace std;

int main(){
	int n, a[101];

	cin >> n;
	for(int i=0 ; i < n ; i++ ){
		cin >> a[i];
	}

	unsigned long long int dp[100][21] = {0};
	dp[0][ a[0] ] = 1;
	for(int i=1 ; i < n-1 ; i++ ){
		for(int j=0 ; j <= 20 ; j++ ){
			if( dp[i-1][j] > 0 ){
				int val = j + a[i];
				if( val <= 20 ) dp[i][val] += dp[i-1][j];
				val = j - a[i];
				if( val >= 0 ) dp[i][val] += dp[i-1][j];
			}
		}
	}
	cout << dp[n-2][ a[n-1] ] << endl;
}