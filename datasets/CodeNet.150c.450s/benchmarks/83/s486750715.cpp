#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int max_n = 100;
const int max_w = 10000;
 
int n, W;
int w[max_n + 1], v[max_n + 1];
int dp[max_n + 1][max_w + 1];

int main(void){
    cin >> n >> W;
    for(int i=0;i<n;i++){
        cin >> v[i] >> w[i];
    }
    for(int i=n-1;i>=0;i--){
    	for(int j=0; j<=W;j++){
    		if(j < w[i]){
    			dp[i][j] = dp[i+1][j];
    		}else{
    			dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
    		}
    	}
    }
    cout << dp[0][W] << endl;
    return 0;
}