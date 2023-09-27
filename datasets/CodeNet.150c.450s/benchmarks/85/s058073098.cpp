#include<iostream>
using namespace std;

long long INF = 10000000000;

int main(){
    //input
    long long n;
    cin >> n;
    long long r[n+1], c[n+1];
    long long i;
    for(i = 1; i <= n; i++){
        cin >> r[i] >> c[i];
    }

    //calc
    long long dp[n+1][n+1];
    for(i = 1; i <= n; i++){
        dp[i][i] = 0;
    }
    long long j,d;
    for(d = 1; d <= n-1; d++){
        for(i = 1; i <= n-d; i++){
            dp[i][i+d] = INF;
            for(j = 0; j < d; j++){
                dp[i][i+d] = min(dp[i][i+d], dp[i][i+j] + r[i]*c[i+j]*c[i+d] + dp[i+j+1][i+d]);
            }
        }
    }

    //answer
    cout << dp[1][n] << endl;
    return 0;
}
