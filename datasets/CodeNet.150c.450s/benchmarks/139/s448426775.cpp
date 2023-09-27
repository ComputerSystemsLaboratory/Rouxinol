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
#define vs vector<string>
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
// const int mod=998244353;
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
    int n,m;
    cin>>n>>m;
    vvi g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g[a].eb(b);
        g[b].eb(a);
    }
    vi ans(n);
    queue<pi> q;
    q.push({0,-1});
    while(!q.empty()){
        pi p=q.front();
        q.pop();
        int v=p.fi;
        for(int u:g[v]){
            if(!u||ans[u])continue;
            ans[u]=v+1;
            q.push({u,v});
        }
    }
    cout<<"Yes"<<endl;
    Rep(i,1,n)cout<<ans[i]<<endl;
}