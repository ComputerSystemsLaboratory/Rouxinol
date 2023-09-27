#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
#define fore(i,a,b) for(ll i=(ll)(a);i<=(ll)(b);++i)
#define rep(i,n) fore(i,0,(n)-1)
#define rfore(i,a,b) for(ll i=(ll)(b);i>=(ll)(a);--i)
#define rrep(i,n) rfore(i,0,(n)-1)
#define all(x) (x).begin(),(x).end()
const ll INF=1001001001;
const ll LINF=1001001001001001001;
const ll D4[]={0,1,0,-1,0};
const ll D8[]={0,1,1,0,-1,-1,1,-1,0};
template<class T>
bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>
bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}

void solve(){
    while(1){
        ll h;cin>>h;
        if(h==0)return;

        vvl a(h,vl(5));
        rep(i,h)rep(j,5)cin>>a[i][j];
        ll ans=0;
        while(1){
            ll tmp=0;
            rep(i,h)rep(j,5){
                if(a[i][j]==0)continue;
                ll k=j;
                while(k<4&&a[i][k+1]==a[i][j])k++;
                if(k-j>=2){
                    tmp+=a[i][j]*(k-j+1);
                    fore(l,j,k)a[i][l]=0;
                }
                j=k;
            }
            if(tmp==0)break;
            ans+=tmp;
            rep(i,5){
                ll idx=h-1;
                rrep(j,h){
                    if(a[j][i]){
                        if(j!=idx){
                            a[idx][i]=a[j][i];
                            a[j][i]=0;
                        }
                        idx--;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
}

