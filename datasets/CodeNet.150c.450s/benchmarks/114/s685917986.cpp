#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define USE_LLONG_AS_INT
#ifdef USE_LLONG_AS_INT
#define int long long
#define inf (1ll<<60)
#else
#define inf (1<<30)
#endif
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a,b) for(int i=(a);i<=(b);i++)
#define rev(i,n) for(int i=(n)-1;i>=0;i--)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define eb emplace_back
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

int n;
vvi g;

int prim(){
    vi d(n,inf),p(n,-1);
    d[0]=0;
    vector<bool> b(n);
    while(true){
        int u;
        int m=inf;
        rep(i,n){
            if(m>d[i]&&!b[i]){
                u=i;
                m=d[i];
            }
        }
        if(m==inf)break;
        b[u]=true;
        rep(v,n){
            if(!b[v]&&g[u][v]!=inf){
                if(d[v]>g[u][v]){
                    d[v]=g[u][v];
                    p[v]=u;
                }
            }
        }
    }
    int s=0;
    rep(i,n){
        if(p[i]!=-1)s+=g[i][p[i]];
    }
    return s;
}

void run(){
    cin>>n;
    g=vvi(n,vi(n));
    rep(i,n){
        rep(j,n){
            int c;
            cin>>c;
            g[i][j]=c==-1?inf:c;
        }
    }
    cout<<prim()<<endl;
}
