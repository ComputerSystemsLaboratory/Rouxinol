#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9;
const ll INF=4e18;
const ll dy[4]={1,0,-1,0};
const ll dx[4]={0,-1,0,1};
int main(){
    while(true){
        int N;cin>>N;if(!N)break;
        vl a(100000);
        rep(i,N){
            string S;cin>>S;
            int h=(S[0]-'0')*10+(S[1]-'0'),m=(S[3]-'0')*10+(S[4]-'0'),s=(S[6]-'0')*10+(S[7]-'0');
            a[(h*60+m)*60+s]++;
            cin>>S;
            h=(S[0]-'0')*10+(S[1]-'0'),m=(S[3]-'0')*10+(S[4]-'0'),s=(S[6]-'0')*10+(S[7]-'0');
            a[(h*60+m)*60+s]--;
        }
        rep(i,90000){
            a[i+1]+=a[i];
        }
        ll ans=0;
        rep(i,100000)ans=max(ans,a[i]);
        cout<<ans<<endl;
    }
    return 0;
}
