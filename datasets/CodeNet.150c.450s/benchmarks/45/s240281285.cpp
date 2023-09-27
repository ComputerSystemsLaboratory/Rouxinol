#include<iostream>
using namespace std;
#define ll long long
ll pow_ans (ll x,ll n){
    ll res =1;
    while(n>0){
        if(n&1){
            res *=x;
            res = res % 1000000007;
        }
        x *= (x%1000000007);
        x %= 1000000007;
        n >>=1;
    }
    return res;
}
int main(){
    ll x,n;
    cin >> x >> n;
    cout << pow_ans(x,n) << endl;
}
