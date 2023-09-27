#include<stdio.h>
#include<algorithm>
#define INF 810114514
#define MAX 1000000

int dp[MAX];
int dp_odd[MAX];
int main(){
    dp[0] = 0;
    dp_odd[0] = 0;
    for(int i=1; i<MAX; i++){
        dp[i] = MAX+1;
        dp_odd[i] = MAX+1;
    }
    for(int n=1; n*(n+1)*(n+2)/6 < MAX; n++){
        int p = n*(n+1)*(n+2)/6;
        for(int i=0; i+p < MAX; i++){
            dp[i+p] = std::min(dp[i+p], dp[i] + 1);
            if(p&1) dp_odd[i+p] = std::min(dp_odd[i+p], dp_odd[i] + 1);
        }
    }
    int x;
    scanf("%d",&x);
    while(x != 0){
        printf("%d %d\n", dp[x], dp_odd[x]);
        scanf("%d",&x);
    }

    return 0;
}