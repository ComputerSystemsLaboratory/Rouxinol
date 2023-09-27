//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
using in = int64_t;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
const double PI=3.14159265358979323846;
const in MOD = 1000000007;
const in INF=1e18+7;
const int inf=1e9+7;
using P=pair<int,int>;
vector<int> dx={0,1,-1,0};
vector<int> dy={1,0,0,-1};

struct union_find{
    vector<int> par;
    vector<int> depth;
    vector<int> siz;

    union_find(int n) : par(n) , depth(n,0) , siz(n,1){
        rep(i,n) par[i]=i;
    }

    int find(int x){
        if(par[x]==x) return x;
        return par[x]=find(par[x]);
    }

    void unite(int x,int y){
        x=find(x);
        y=find(y);
        if(x==y) return;
        siz[x] +=siz[y];
        siz[y] =siz[x];
        if(depth[x]<depth[y]) par[x]=par[y];
        else{
            par[y]=par[x];
            if(depth[x]==depth[y]) depth[x] ++;
        }
    }

    bool same(int x,int y){
        return find(x)==find(y);
    }
    int size(int x){
        return siz[find(x)];
    }
};
//union findが必要
//無向グラフ
using T=tuple<int,int,int>;
vector<T> graph(0);//{cost,辺1,辺2}
int kruskal(int n){//頂点数
    union_find uf(n);
    sort(all(graph));
    int ret=0;
    for(auto x:graph){
        int s,t,cost;
        tie(cost,s,t)=x;
        if(!uf.same(s,t)){
            uf.unite(s,t);
            ret +=cost;
        }
    }
    return ret;
}

int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
cout << fixed << setprecision(10);
    int v,e;
    cin>>v>>e;
    int s,t,w;
    rep(i,e){
        cin>>s>>t>>w;
        graph.emplace_back(w,s,t);
    }
    int ans=kruskal(v);
    cout<<ans<<endl;
}
