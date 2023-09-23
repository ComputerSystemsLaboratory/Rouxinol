#define _LIBCPP_DEBUG 0
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll MOD = 1e9 + 7;

ll rep_power(ll m, ll n){
    if(n==1) return m % MOD;
    if(n%2==1) return m * rep_power(m,n-1) % MOD;
    return rep_power(m,n/2)*rep_power(m,n/2) % MOD;
}


int main(void) {

    ll m,n;cin>>m>>n;
    cout<< rep_power(m,n)<<endl;


}
