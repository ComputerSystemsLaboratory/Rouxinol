#include <bits/stdc++.h>


int main(){
    long long m,n;
    long long mod = 1;
    scanf("%lld %lld",&m,&n);
    
    while(n>0){
        if(n%2){
            mod = mod * m % 1000000007;
            n--;
        }else{
        m = m * m % 1000000007;
        n /= 2 ;
        }
    }
    // mod = mod * m %1000000007;
    printf("%lld\n",mod);
    
    return 0;
}
