#include <iostream>
using namespace std;
typedef long long ll;
ll n,m,MOD=1e9+7;
ll f(ll x,ll y){
    if(y==1)return x;
    if(y%2==0)return f(x,y/2)*f(x,y/2)%MOD;
    return x*f(x,y-1)%MOD;
}
int main(void){
    cin>>n>>m;
    cout<<f(n,m)<<endl;
}

