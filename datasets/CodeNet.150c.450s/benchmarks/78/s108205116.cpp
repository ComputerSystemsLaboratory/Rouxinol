
#include <cstdio>
#include <algorithm>
using namespace std;

long dp[1000000];
long dpo[1000000];

int main(){
    int N;
    dp[0] = 0;
    dp[0] = 0;
    for(int i = 1;i < 1000000;i++){
            dp[i] = 1000000;
            dpo[i] = 1000000;
        }
    for(int i= 0;i < 1000;i++){
        long a = (i * (i + 1) * (i + 2)) / 6;
        for(int j = a;j < 1000000;j++){
            dp[j] = min(dp[j],dp[j - a] + 1);
            if(a % 2 == 1){
                dpo[j] = min(dpo[j],dpo[j - a] + 1);
            }
        }
    }
    for(int i = 0;;i++){
        scanf("%d",&N);
        if(N == 0){
            break;
        }
        printf("%ld %ld\n",dp[N],dpo[N]);
    }
    return 0;
}
