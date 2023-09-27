#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define repr(i, a, b) for (ll i = a; i < b; i++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define mod 1000000007

ll gcd(ll x,ll y) {return y ? gcd(y,x%y) : x;} 
ll lcm(ll x,ll y) {return x/gcd(x,y)*y;}

ll d;
ll dp[365][26];
vector<ll> ans(365);
vector<ll> c(26);

ll keisan(vector<ll> vec){
    ll total=0;
    vector<ll> a(26,0);
    rep(i,d){
        total+=dp[i][vec[i]];
        a[vec[i]]=i;
        rep(j,26){
            total-=c[j]*(i-a[j]);
        }
    }
    return total;
}

int main(){
    cin >> d;
    rep(i,26) cin >> c[i];
    rep(i,d)rep(j,26) cin >> dp[i][j];
    vector<ll> t(d);
    rep(i,d) cin >> t[i];

    rep(i,d){
        ll now=-1,kazu=0;
        rep(j,26){
            if(now<dp[i][j]){
                now=dp[i][j];
                kazu=j;
            }
        }
        ans[i]=kazu;
    }
    
    //ll total=keisan(ans);
    //cout << total << endl;
    
    //rep(i,d) cout << ans[i]+1 << endl;
    
    ll total=0;
    vector<ll> a(26,-1);
    rep(i,d){
        total+=dp[i][t[i]-1];
        a[t[i]-1]=i;
        rep(j,26){
            total-=c[j]*(i-a[j]);
        }
        cout << total << endl;
    }

    return 0;
}










