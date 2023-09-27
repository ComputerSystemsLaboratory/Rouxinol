#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int main(){
    int n;
    int a[100000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    int dp[100000];
    fill(dp, dp + n + 1, INF);
    dp[0] = -1;
    for(int i = 0; i < n; i++){
        int* ptr = lower_bound(dp, dp + n + 1, a[i]);
        if(ptr == dp) continue;
        *ptr = min(*ptr, a[i]);
    }
    printf("%d\n", lower_bound(dp, dp + n + 1, INF) - dp - 1);
    return 0;
}