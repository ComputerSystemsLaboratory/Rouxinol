#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl;
#define INF 1000000000
#define mod 1000000007
using ll=long long;
const ll LINF=1001002003004005006ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
// ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<class T>bool chmax(T &a,const T &b){if(a<b){a=b;return true;}return false;}
template<class T>bool chmin(T &a,const T &b){if(b<a){a=b;return true;}return false;}

void solve(){
    /*
    s[i]=='1'の部分のa[i]をそれ以降のs[i]=='0'のa[i]の組み合わせで表現できるか
    a[i]とa[j]を組み合わせたところで，結局a[i]を後ろので表現でき，a[j]を後ろので表現できれば
    a[i]^a[j]も表現できる
    mat ei ^ mat ej = a[i]^a[j]
    mat (ei^ej) = a[i]^a[j]
    */

    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    string s;cin>>s;
    reverse(ALL(a));reverse(ALL(s));
    vector<ll> b;// 基底の集合，iに対し1しか増えない
    rep(i,n){
        ll v=a[i];
        for(auto x:b) chmin(v,v^x);
        if(s[i]=='1'){
            // 今後s[i]='0'のa[i]を使っても0化できない
            // (基底ベクトルたちを使って0化できない)
            if(v){
                cout<<1<<endl;
                return ;
            }
        }else{
            b.push_back(v);
        }

    }
    cout<<0<<endl;
    return ;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int q;cin>>q;while(q--) solve();
    return 0;    
}
