#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> ans;

    cout << n << ":";

    for(ll i = 2; i*i <= n; i++){
        while(n % i == 0){
            ans.emplace_back(i);
            n /= i;
        }
    }
    if(n != 1) ans.emplace_back(n);
    
    sort(ans.begin(), ans.end());
    
    for(auto a : ans){
        cout << ' ' << a ;
    }
    cout << endl;
}
