#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define lper(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define at(x,i) get<i>(x);
#define rev(x) reverse(x);
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
using vvpl=vector<vpl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
int main(){
    while(true){
    ll h;cin >> h;
    if(h==0)break;
    vvl f(h,vl(5,0));
    per(i,h){
        rep(j,5)cin >> f[i][j];
    }
    ll ans=0;
    bool check=true;
    while(check){
        ll tmp=ans;
        vvl d(h,vl(5,0));
        rep(i,h){
            ll a=f[i][0];
            ll cnt=0;
            rep(j,5){
                if(a==f[i][j])cnt++;
                else{
                    if(cnt>=3){
                        rep(l,cnt){
                            f[i][j-l-1]=0;
                        }  
                        repl(k,i+1,h){
                            rep(l,cnt){
                                d[k][j-l-1]++;
                            }    
                        }
                        ans+=a*cnt;
                    }
                    a=f[i][j];
                    cnt=1;
                }
            }
            if(cnt>=3){
                rep(l,cnt){
                    f[i][4-l]=0;
                } 
                repl(k,i+1,h){
                    rep(l,cnt){
                        d[k][4-l]++;
                    }  
                }
                ans+=a*cnt;
            }
        }
        rep(i,h){
            rep(j,5){
                if(d[i][j]){
                    f[i-d[i][j]][j]=f[i][j];
                    f[i][j]=0;
                }
            }
        }
        /*rep(i,h){
            rep(j,5)cout << d[i][j] <<" ";
            cout <<endl;
        }*/
        if(tmp==ans)break;
    }
    /*rep(i,h){
        rep(j,5)cout << f[i][j] <<" ";
        cout <<endl;
    }*/
    cout <<ans <<endl;
    }
}

