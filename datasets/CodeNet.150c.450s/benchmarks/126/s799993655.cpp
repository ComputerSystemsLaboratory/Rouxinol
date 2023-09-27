#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int tkkw; 

tkkw dp[16][16];
	
int main(){
	while(1){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			dp[i][j] =0;
		}
	}
	int a,b,n;
	cin >> a>>b;
	if(a==0 && b==0)break;
	cin >> n;
	dp[0][0] = 1;
	for(int i=0; i<n ; i++ ){
		int l,m;
		cin >> l>>m;
		dp[l-1][m-1] = -1;
	}

	for(int i=0;i< a ;i++){
		for(int j=0;j<b; j++){
			if(dp[i][j] ==-1) {
				dp[i][j] =0;
				continue;
			}
			if(i>0) dp[i][j] += dp[i-1][j];
			if(j>0) dp[i][j] += dp[i][j-1];
		}
	}
	cout << dp[a-1][b-1] << "\n";
}
	//cout <<dp[0][0]<< endl;
	return 0;

}