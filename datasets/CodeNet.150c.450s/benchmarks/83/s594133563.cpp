#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,W;
    cin>>N>>W;
    int dp[2][W+1];
    fill(dp[0],dp[2],0);
    for(int i=0;i<N;i++){
        int v,w;
        cin>>v>>w;
        for(int j=0;j<w;j++)dp[i%2][j]=dp[(i+1)%2][j];
        for(int j=0;j<=W;j++){
            if(j+w<=W){
                dp[i%2][j+w]=max(dp[(i+1)%2][j+w],dp[(i+1)%2][j]+v);
            }
        }
    }
    int max=0;
    for(int i=0;i<=W;i++){
        if(max<dp[(N+1)%2][i])max=dp[(N+1)%2][i];
    }
    cout<<max<<endl;
}