#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> P;
typedef pair<ll,ll> l_l;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef vector<l_l> vpl;
typedef vector<string> vs;
typedef pair<l_l,ll> lll;
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=1;i<=(n);i++)
const int INF=1001001000;
const int mINF=-1001001000;
const ll LINF=10100100100100100;
const ll dx[4]={1,-1,0,0};
const ll dy[4]={0,0,1,-1};
template<class T> inline bool chmin(T& a,T b){
if(a>b){
a=b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a,T b){
if(a<b){
a=b;
return true;
}
return false;
}
ll d[110][110];
int main(){
    ll v,e;cin>>v>>e;
    rep(i,110){
        rep(j,110){
            d[i][j]=LINF;
        }
        d[i][i]=0;
    }
    rep(i,e){
        ll u,v,x;cin>>u>>v>>x;
        d[u][v]=x;
    }
    rep(k,v){
        rep(j,v){
            rep(i,v){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    rep(i,v){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    rep(i,v){
        rep(j,v){
            if(j!=0)cout<<" ";
            if(d[i][j]>2000000000)cout<<"INF";
            else cout<<d[i][j];
        }
        cout<<endl;
    }
    return 0;
}
