#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include <tuple>
using namespace std;

const double pi = acos(-1);
#define nyan cout<<"(=^•ω•^=)"<<endl;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)

int N,W;
int v[110],w[110];
int dp[110][11000];
// dp[i][j] := i番目(1-leading)の品物まででコストのj以下の最大値

signed main(){
    cin>>N>>W;
    for(int i=1;i<=N;i++)cin>>v[i]>>w[i];
    for(int i=1;i<=W;i++)dp[0][i]=0;
    for(int i=1;i<=N;i++)dp[i][0]=0;//本当はいらない（グローバルで宣言したため）
    for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
            if(w[i]>j)dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
        }
    }
    cout<<dp[N][W]<<endl;
    return 0;
}
