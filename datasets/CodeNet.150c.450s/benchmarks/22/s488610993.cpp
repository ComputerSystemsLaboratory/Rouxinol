#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
typedef pair<ll,ll> P;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define all(v) v.begin() , v.end()
#define inputv(v,n) rep(i,n){\
    ll x;\
    cin>>x;\
    v.push_back(x);\
    }
const ll INF=99999999999999;
const ll MOD=1000000007;
ll c,d,e,f,p,t,ans=0;
 
 
ll n,m,r;
vector<P> gragh[3000];
vl A,B,C;
vl cost(3000,INF);
 
void input(void){
    cin>>n>>m>>r;
    rep(i,m){
        cin>>c>>d>>e;
        gragh[c].push_back(make_pair(d,e));
    }
}
 
ll solve(void){
    cost[r]=0;
    vl renewed(3000,0);
    rep(k,n){
    rep(i,n){
        rep(j,gragh[i].size()){
            cost[gragh[i][j].first]=min(cost[i]+gragh[i][j].second,cost[gragh[i][j].first]);
        }
    }
    }
 
    rep(i,n){
        rep(j,gragh[i].size()){
            if(cost[i]+gragh[i][j].second<cost[gragh[i][j].first]&&cost[i]+gragh[i][j].second<INF/2){
                cout<<"NEGATIVE CYCLE"<<endl;
                return 0;
            }
        }
    }
 
    rep(i,n){
    	if(cost[i]>INF/2)cout<<"INF"<<endl;
        else cout<<cost[i]<<endl;
    }
    return 0;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    input();
    solve();
}
