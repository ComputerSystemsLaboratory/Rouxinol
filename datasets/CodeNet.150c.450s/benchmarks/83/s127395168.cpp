#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;


int dp[110][10010];
int v[110],w[110];


int main(){

    int N,W;
    cin >> N >> W;
    REP(i,N){
        cin >> v[i] >> w[i];
    }

    memset(dp,0,sizeof(dp));

    //dp[i][j]:= i番目の品物の中から重さがWを超えない品物を選んだ時の価値の最大

  
    for(int i = 1;i <= N;i++){


        for(int j = 0;j <= W;j++){

            if(j < w[i-1]){//使えない
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }
    cout << dp[N][W] << endl;
   

    return 0;
}
