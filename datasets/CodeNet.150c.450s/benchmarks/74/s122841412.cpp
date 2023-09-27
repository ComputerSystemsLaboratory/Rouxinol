#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int MAX_N = 50000;
const int MAX_M = 20;
vector<int> c(MAX_M+1);
vector<vector<int>> dp(MAX_M+1, vector<int>(MAX_N+1, MAX_N+1));
int n, m;

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        cin >> c[i];
        for(int j = 0; j <= n; j++){
            if(j == 0) dp[i][j] = 0;
            if(j < c[i]){
                dp[i+1][j] = dp[i][j];
            }
            else{
                dp[i+1][j] = min(dp[i][j], dp[i+1][j-c[i]] + 1);
            }
        }
    }
    
    cout << dp[m][n] << endl;
    
    return 0;
}