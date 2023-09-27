#include<iostream>

int main(){
    /*long long int a,b,c;
    std::cin>>a>>b;
    c=1;  */  
    long long m, n, ans = 1ll;
    const long long mod = 1000000007ll;
    std::cin >> m >> n;
    for (long long i = 0ll; (i + 9) < n; i += 10) {
        ans *= ((((m*m*m)%mod)*((m*m*m)%mod)%mod)*(m*m*m)%mod*m)%mod;
        ans %= mod;
    }
    
   /* for(long long int i=0;i<b/10*10;i+=10){
        c=c*a*a*a*a;
        c=c%1000000007;
        c=c*a*a*a*a;
        c=c%1000000007;
        c=c*a;
        c=c%1000000007;
        c=c*a;
        c=c%1000000007;
    }*/
    for(long long int i=0;i<n%10;i++){
        ans=ans*m;
        ans=ans%1000000007;
    }
    std::cout<<ans<<std::endl;
}

