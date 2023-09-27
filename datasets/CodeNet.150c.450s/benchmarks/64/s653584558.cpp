#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>




int main(int argc, const char * argv[]){
    
    //Input
    int i, j , n ,q;
    
    int dp[40001];
    
    memset(dp, 0x00, sizeof(dp));
    dp[0] = 1;
    
    scanf("%d", &n);
    int A[n];
    for(i=0; i< n;i++){
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &q);
    int M[q];
    for(i=0; i< q;i++){
        scanf("%d", &M[i]);
    }
    
    //??°???????????§??????
    for (i = 0; i < n; i++) {
        for (j = 40000; j >= 0; j--) {
            if (dp[j] == 1 && j + A[i] <= 40000) {
                dp[j + A[i]] = 1;
            }
        }
    }
    
    for (i=0; i<q; i++) {
        if (dp[M[i]] == 1) {
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    
    return 0;
}