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
    int i, j, n, q, ans;
    
    //n ????????´??°???????????°??? S
    scanf("%d", &n);
    int S[n];
    for(i=0; i < n; i++){
        scanf("%d", &S[i]);
    }
    
    //q ????????°????????´??°???????????°??? T
    scanf("%d", &q);
    int T[q];
    for(i=0; i < q; i++){
        scanf("%d", &T[i]);
    }
    
    ans = 0;
    for(i=0; i < q; i++){
        for(j=0; j < n; j++){
            if(T[i] == S[j]){
                ans++;
                break;
            }
        }
        
    }
    
    printf("%d\n", ans);
    
    return 0;
}