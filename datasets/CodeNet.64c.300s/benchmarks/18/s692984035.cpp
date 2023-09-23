#include<cstdio>
#include<cmath>
#include<algorithm>


using namespace std;

int main(void){
    int n;
    while(scanf("%d", &n),n){
        int dp[64] ={0};
        dp[0] = 1;
        for(int i = 0; i <= n; i++){
            for(int j = 1; j < 4; j++){
                if(i - j >= 0){
                    dp[i] += dp[i-j];
                }
            }
        }
        printf("%d\n", dp[n]/3650 + 1);


    }

    return 0;
}