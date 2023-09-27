#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define USE_LLONG_AS_INT
#ifdef USE_LLONG_AS_INT
#define int long long
#define inf (1ll<<60)
#else
#define inf (1<<30)
#endif
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,n) for(int i=(n)-1;i>=0;i--)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a,0,sizeof(a))
#define Yes(f) cout<<(f?"Yes":"No")<<endl
#define yes(f) cout<<(f?"yes":"no")<<endl
#define YES(f) cout<<(f?"YES":"NO")<<endl
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())

using namespace std;

const int mod=1e9+7;
const string sp=" ";

void run();

void init() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(12);
}

signed main(){
    init();
    run();
    return 0;
}

void run(){
    vector<pair<pi,int>> r;
    REP(i,1,150){
        REP(j,i+1,150){
            r.pb({{i,j},i*i+j*j});
        }
    }
    sort(all(r),[](pair<pi,int> &x,pair<pi,int> &y){if(x.se==y.se)return x.fi.fi<y.fi.fi;return x.se<y.se;});
    while(true){
    int h,w;
    cin>>h>>w;
    if(!h)break;
    rep(i,r.size()){
        if(r[i].fi==mp(h,w)){
            cout<<r[i+1].fi.fi<<sp<<r[i+1].fi.se<<endl;
            break;
        }
    }
    }
}
