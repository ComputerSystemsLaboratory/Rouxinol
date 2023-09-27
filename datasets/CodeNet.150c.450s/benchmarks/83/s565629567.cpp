#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const int INF = 1e9;
#define put(n) cout<<(n)<<endl
#define rep(i,N) for(int(i)=0;(i)<(N);++(i))
#define rrep(i,N) for(int (i)=(N-1);(i)>=(0);--(i))
#define all(v) (v).begin() , (v).end()
#define rall(v) (v).rbegin() , (v).rend()
#define pb(n) push_back(n)


int dp[110][10100];

int main(){
    int N,W;
    cin>>N>>W;
    vector<int> V(N),w(N);
    rep(i,N) cin >> V[i] >> w[i];

    rep(i,N+1)rep(j,W+1) dp[i][j] = -1;
    dp[0][0] = 0;

    for(int i=0;i<N;++i){
        for(int j = 0;j <= W;++j){
            dp[i+1][j] = dp[i][j]; 
            if(j < w[i]) continue;
            dp[i+1][j] = max(dp[i+1][j],dp[i][j - w[i]] + V[i]);
        }
    }

    int ans = -1;
    rep(i,W+1) ans = max(ans,dp[N][i]);
    cout << ans << endl;


}
