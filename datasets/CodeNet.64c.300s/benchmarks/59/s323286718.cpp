#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
 * If true, return not 0. If false, return 0.
 */
int isPrime(int num){
    if(num == 2) return 1;
    if(num == 3) return 1;
    if(num == 4) return 0;
    if(num == 5) return 1;
    
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    //Input
    int n, value, maximum, ans;
    maximum = 0;
    scanf("%d", &n);
    
    int *array = NULL;
    array = (int*)malloc(sizeof(int) * n);
    int * flag = NULL;
    flag = (int*)malloc(sizeof(int) * n);
    memset(flag, 0x00, sizeof(int) * n);
    
    REP(i, n){
        scanf("%d", &value);
        maximum = maximum > value ? maximum : value;
        array[i] = value;
    }
    ans = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(array[i])){
            ans += 1;
        }
    }
    
    printf("%d\n", ans);
    
    
    
    return 0;
}