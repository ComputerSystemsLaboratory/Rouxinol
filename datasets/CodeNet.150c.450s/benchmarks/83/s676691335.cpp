#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,W;
    cin >> N >> W;
    int v[101],w[101];
    for(int i=0;i<N;i++) cin >> v[i] >> w[i];

    int dp[10001];
    for(int i=0;i<10001;i++) dp[i]=0;

    for(int i=0;i<N;i++){
        for(int j=W;j>=0;j--){
            if(j-w[i]>=0) dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
        }
    }

    cout << dp[W] << endl;
}