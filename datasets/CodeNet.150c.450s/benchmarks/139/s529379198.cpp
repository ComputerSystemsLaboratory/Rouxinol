#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<bitset>
#include<deque>
#include<functional>
#include<iterator>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define a first
#define b second
#define sz(x) (ll)((x).size())
#define pb push_back
#define mp make_pair
#define bg begin()
#define ed end()
#define all(x) (x).bg,(x).ed
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rep1(i,n) for(ll i=1;i<=(n);i++)
#define rrep(i,n) for(ll i=(n)-1;i>=0;i--)
#define rrep1(i,n) for(ll i=(n);i>=1;i--)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
const ll MOD=1000000007;
const ll INF=1000000000000000;
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b;return true;}return false;}
ll maxx(ll x,ll y,ll z){return max(max(x,y),z);}
ll minn(ll x,ll y,ll z){return min(min(x,y),z);}
ll gcd(ll x,ll y){if(x%y==0) return y;else return gcd(y,x%y);}
ll lcm(ll x,ll y){return x*(y/gcd(x,y));}
ll digsz(ll x){if(x==0) return 1;else{ll ans=0;while(x){x/=10;ans++;}return ans;}}
ll digsum(ll x){ll sum=0;while(x){sum+=x%10;x/=10;}return sum;}
vector<ll> pw2(62,1);vector<ll> pw10(19,1);
vector<ll> G[100005];//隣接リスト
vector<bool> visited(100005);
vector<ll> ans(100005,INF);
void bfs(){
    queue<ll> que;
    
    que.push(1);
    visited[1]=true;
    while(que.size()){
        ll tmp=que.front(); que.pop();
        rep(i,sz(G[tmp])){
            if(!visited[G[tmp][i]]){
                ans[G[tmp][i]]=tmp;
                visited[G[tmp][i]]=true;
                que.push(G[tmp][i]);
            }
        }
    }
}
int main(){
    {rep1(i,61) pw2[i]=2*pw2[i-1];}
    {rep1(i,18) pw10[i]=10*pw10[i-1];}
    
    ll N,M; cin>>N>>M;
    rep(i,M){
        ll A,B; cin>>A>>B;
        G[A].pb(B);
        G[B].pb(A);
    }
    bfs();
    
    bool c=true;
    rep1(i,N){
        if(!visited[i]) c=false;
    }
    if(c){
        cout<<"Yes"<<endl;
        FOR(i,2,N+1){
            cout<<ans[i]<<endl;
        }
    }
    else cout<<"No"<<endl;
}

