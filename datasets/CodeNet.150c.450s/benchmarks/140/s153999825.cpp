#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<climits>
using namespace std;
typedef vector<string>vs;
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<double>vd;
typedef pair<int,int>pii;
typedef long long ll;
typedef pair<ll,ll>pll;
typedef vector<ll>vl;
#define rrep(i,x,n) for(int i=(x);i<(n);++i)
#define rep(i,x) rrep(i,0,(x))
#define fi first
#define se second
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define pb push_back
#define maxs(a,b) (a)=max(a,b)
#define mins(a,b) (a)=min(a,b)

struct UF{
    int N;
    vi par,sz;
    void init(int _N){
        N=_N;
        par=vi(N);
        sz=vi(N,1);
        rep(i,N)par[i]=i;
    }
    int find(int x){
        return x==par[x]?x:par[x]=find(par[x]);
    }
    void unite(int x,int y){
        x=find(x);
        y=find(y);
        if(x==y)return;
        if(sz[x]<sz[y])swap(x,y);
        par[y]=x;
        sz[x]+=sz[y];
    }
    bool same(int x,int y){
        return find(x)==find(y);
    }
};

typedef pair<int,pii>piii;
int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    UF uf;
    uf.init(N);
    vector<piii>V;
    rep(i,M){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        V.pb(piii(c,pii(a,b)));
    }
    sort(all(V));
    int cost=0;
    rep(i,M){
        piii p=V[i];
        if(uf.same(p.se.fi,p.se.se))continue;
        uf.unite(p.se.fi,p.se.se);
        cost+=p.fi;
    }

    printf("%d\n",cost);

    return 0;
}