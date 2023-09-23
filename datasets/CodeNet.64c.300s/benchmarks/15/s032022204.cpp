#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    
    //Input
    int N, value, maximum, ans, tmp, minj;
    maximum = 0;
    scanf("%d", &N);
    
    int *array = NULL;
    array = (int*)malloc(sizeof(int) * N);
    
    REP(i, N){
        scanf("%d", &value);
        array[i] = value;
    }
    
    ans = 0;
    for(int i = 0; i < N; i++){
        minj = i;
        for(int j = i; j < N; j++){
            minj = array[j] < array[minj] ? j : minj;
        }
        if(i != minj){
            tmp = array[minj];
            array[minj] = array[i];
            array[i] = tmp;
            ans += 1;
        }
    }
    
    REP(i, N){
        printf("%d", array[i]);
        if(i != N-1){
            printf(" ");
        }
    }
    printf("\n");
    printf("%d\n", ans);
    
    
    
    return 0;
}