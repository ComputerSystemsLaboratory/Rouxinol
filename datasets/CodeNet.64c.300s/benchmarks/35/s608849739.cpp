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
    int i, j , n ,m , frm, to;
    
    scanf("%d", &n);
    
    int ans[n][n];
    
    memset(ans, 0x00, sizeof(ans));
    
    for(i = 0; i < n; i++){
        
        scanf("%d", &frm);
        scanf("%d", &m);
        
        for (j=0; j<m; j++) {
            scanf("%d", &to);
            ans[frm - 1][to - 1] = 1;
        }
        
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d", ans[i][j]);
            if(j != n-1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}