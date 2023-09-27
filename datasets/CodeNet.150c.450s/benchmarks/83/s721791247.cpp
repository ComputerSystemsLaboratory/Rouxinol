#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int v[101],w[101];
    int W;
    int dp[101][10001];
    cin >> N >> W;
    for(int i=0;i<N;i++){
        cin >> v[i] >> w[i];
    }

    for(int i=0;i<101;i++) for(int j=0;j<10001;j++) dp[i][j]=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j-w[i]>=0){
                dp[i+1][j] = max(dp[i][j],dp[i][j-w[i]]+v[i]);
            }else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl;
}