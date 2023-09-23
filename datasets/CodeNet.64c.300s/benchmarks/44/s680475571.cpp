#include <iostream>

using namespace std;

const int INF = 1<<29;
const int N = 10;

int main(){
    int n;
    while(true){
        cin >> n;
        if(!n) break;

        int dp[N][N];
        for(int i=0;i<N;i++)
        for(int j=0;j<N;j++) dp[i][j] = INF;

        int a,b,c;
        while(n--){
            cin >> a >> b >> c;
            dp[a][b] = c;
            dp[b][a] = c;
        }

        for(int k=0;k<N;++k){
            for(int i=0;i<N;++i){
                for(int j=0;j<N;++j){
                    if(dp[i][j] > dp[i][k] + dp[k][j])
                        dp[i][j] = dp[i][k] + dp[k][j];
                }
            }
        }

    int sum[N];
    for(int i=0;i<N;i++){
        sum[i] = 0;
        for(int j=0;j<N;j++){
            if(i != j && dp[i][j]!=INF){
                sum[i] += dp[i][j];
            }
        }
    }

    int ans_i = 0;
    for(int i=0;i<N;i++){
        if(sum[i] < sum[ans_i] && sum[i] != 0){
            ans_i = i;
        }
    }

    cout << ans_i << " " << sum[ans_i] << endl;

    }

}
