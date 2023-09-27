#include <cstdio>
#include <cmath>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int isPrime(int m){
    if(m == 2) return true;
    if(m <= 1) return false;
    if(m % 2 == 0) return false;

    int i = 3;
    while(i <= sqrt(m)){
        if(m % i == 0) return false;
        i++;
    }
    return true;
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    rep(i,n){
        int m;
        scanf("%d",&m);
        if(isPrime(m)) ans++;
    }

    printf("%d\n",ans);

}
