#include<iostream>
using namespace std;
const int MOD=1000000007;
typedef long long ll;
ll pow(ll m,ll n){
    ll res=1;
    while(n>0){
        if(n&1) res=res*m%MOD;
        m=m*m%MOD;
        n>>=1;
    }
    return res;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<pow(m,n)<<endl;
    return 0;
}