#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int w[1000001];
int n,k;

bool check(ll p){
    ll cost=0;
    ll cou=0;
    for(int i=0;i<k;i++){
        cost=w[cou];
        while(p-cost>=0){
            cou++;
            if(cou==n){
                return true;
            }
            cost+=w[cou];
        }
    }
    return false;
}

ll solve(){
    ll l=0,r=1000000000LL;
    while(r-l>1){
        ll mid=(r+l)/2;
        if(check(mid)){
            r=mid;
        }else{
            l=mid;
        }
//        cout << r << endl;
    }

    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
//    for(int i=0;i<n;i++)cout << w[i] << (i!=n-1?" ":"\n");
    ll ans = solve();
    cout << ans << endl;
}

