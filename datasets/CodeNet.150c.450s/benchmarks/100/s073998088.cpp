#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll temp(ll);

ll temp(ll i){
    if(i<=1)return 1;
    return i*temp(i-1);
}

int main(){
    ll x;
    cin>>x;
    cout<<temp(x)<<endl;
}