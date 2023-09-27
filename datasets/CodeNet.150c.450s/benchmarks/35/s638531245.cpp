#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin >> n;
    while(n!=0){
        vector<ll> vec(n);
        for(ll i=0;i<n;i++){
            cin >> vec.at(i);
        }
        vector<ll> rsw(n+1);
        rsw.at(0) = 0;
        for(int i=1;i<n+1;i++){
            rsw.at(i) = rsw.at(i-1) + vec.at(i-1);
        }
        ll ans = vec.at(0);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ans < rsw.at(j+1)-rsw.at(i)){
                    ans = rsw.at(j+1) - rsw.at(i);
                }
            }
        }
        cout << ans << endl;
        cin >> n;

    }
}
