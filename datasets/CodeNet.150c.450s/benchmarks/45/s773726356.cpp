#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod=1e9+7;
int main(){
    ll m,n;
    cin>>m>>n;

    ll ans=1;

    for(int i=0;i<40;i++){
        if((n>>i)&1)ans=ans*m%mod;
        m=m*m%mod;
    }
    cout<<ans<<endl;
    return 0;
}