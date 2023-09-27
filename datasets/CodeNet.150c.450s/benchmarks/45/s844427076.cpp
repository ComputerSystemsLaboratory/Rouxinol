#include <stdio.h>
long long expo(long long M, long long m, long long n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return m;
    }
    long long aHalf = expo(M, m, n / 2) % M;
    if(n % 2 == 1){
        return (((aHalf * aHalf) % M) * m) % M;
    }else{
        return (aHalf * aHalf) % M;
    }
}
int main(){
int m,n,i;
long long ans = 0, M = 1000000007;
scanf("%d%d", &m, &n);
int result = (int) expo(M, m * 1LL, n * 1LL);
printf("%d\n", result);
return 0;
}