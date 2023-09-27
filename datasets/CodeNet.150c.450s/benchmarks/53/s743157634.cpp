#include<bits/stdc++.h>
using ll = int_fast64_t;

std::map<ll, ll> prime_factor(ll n){
        std::map<ll, ll> ret;
        for(ll i=2; i*i<=n; i++){
                while(n%i==0){
                        ret[i]++;
                        n /= i;
                }
        }
        if(n!=1) ret[n]++;
        return ret;
}

int main(){
        ll x;
        scanf("%lld", &x);
        printf("%lld:", x);
        for(auto p: prime_factor(x)){
                ll v = p.first, c = p.second;
                for(ll i=0; i<c; i++){
                        printf(" %lld", v);
                }
        }
        puts("");
        return 0;
}

