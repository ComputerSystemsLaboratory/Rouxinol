#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;
const int LIM = 1000000;

int dp1[LIM], dp2[LIM];

int main(){
    fill(dp1, dp1 + LIM, INF);
    fill(dp2, dp2 + LIM, INF);
    dp1[0] = dp2[0] = 0;
    for(int i = 1; i * (i + 1) * (i + 2) / 6 < LIM; i++){
        int num = i * (i + 1) * (i + 2) / 6;
        for(int j = num; j < LIM; j++){
            dp1[j] = min(dp1[j], dp1[j-num] + 1);
        }
        if(num % 2 == 0) continue;
        for(int j = num; j < LIM; j++){
            dp2[j] = min(dp2[j], dp2[j-num] + 1);
        }
    }
    int N;
    while(true){
        scanf("%d", &N);
        if(N == 0) break;
        printf("%d %d\n", dp1[N], dp2[N]);
    }
    return 0;
}