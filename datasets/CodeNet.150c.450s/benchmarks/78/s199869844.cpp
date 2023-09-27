#include <cstdio>
#include <vector>

const int INF = 1001001001;

std::vector<int> A, B;
int dp[2][1000001], dp2[2][1000001];

void DP(int (&dp)[2][1000001], std::vector<int> &v){
    for(int i=0;i<=1000000;i++){
        dp[0][i] = INF;
    }
    dp[0][0] = 0;

    int L = v.size();
    int prev = 0, next = 1;
    for(int i=0;i<L;i++){
        for(int j=0;j<=1000000;j++){
            dp[next][j] = dp[prev][j];
            if(j-v[i] >= 0){
                dp[next][j] = std::min(dp[next][j], dp[next][j-v[i]] + 1);
            }
        }

        prev = !prev;
        next = !next;
    }
}

int main(){
    for(int i=1;;i++){
        long long x = 1ll * i * (i+1) * (i+2) / 6;
        if(x <= 1000000ll){
            A.push_back(x);
            if(x & 1){B.push_back(x);}
        }else{
            break;
        }
    }
    
    DP(dp, A);
    DP(dp2, B);
    
    int N;
    while(scanf("%d", &N), N){
        printf("%d %d\n", dp[0][N], dp2[0][N]);
    }
}