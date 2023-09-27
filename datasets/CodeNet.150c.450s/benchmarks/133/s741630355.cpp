#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#include <boost/multiprecision/cpp_ll.hpp>
//typedef boost::multiprecision::cpp_ll ll;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
ll inf=(ll)1E18;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
#define endl "\n"
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll D;
ll c[27];
ll s[366][27];
ll ans[366];

void solve(){
    rep(i,1,D){
        cin>>ans[i];
    }
}

void score(){
    ll last[366][27];
    rep(i,1,26)last[0][i]=0;
    ll now_score=0;
    rep(i,1,D){
        now_score+=s[i][ans[i]];
        rep(j,1,26){
            if(j!=ans[i]){
                last[i][j]=last[i-1][j];
            }else{
                last[i][j]=i;
            }
            now_score-=(c[j]*(i-last[i][j]));
        }
        cout<<now_score<<endl;
    }
}

int main(){fastio
    cin>>D;
    rep(i,1,26)cin>>c[i];
    rep(i,1,D){
        rep(j,1,26){
            cin>>s[i][j];
        }
    }
    solve();
    
    score();
    return 0;
}

