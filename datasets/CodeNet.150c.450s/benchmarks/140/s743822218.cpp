#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,n,m) for(int i=(int)(n); i<=(int)(m); i++)
#define RFOR(i,n,m) for(int i=(int)(n); i>=(int)(m); i--)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define RITR(x,c) for(__typeof(c.rbegin()) x=c.rbegin();x!=c.rend();x++)
#define setp(n) fixed << setprecision(n)

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>

#define all(a) (a.begin()),(a.end())
#define rall(a) (a.rbegin()),(a.rend())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ins insert

using namespace std;

//-------------------------------------------------
//--Graph Template
//-------------------------------------------------
template<class E>
struct Graph
{
    vector<vector<E> > adj;
    Graph(int N):adj(N){}
    virtual void add_edge(int v, E e){adj[v].push_back(e);}
    vector<E>& operator[](int v){return adj[v];}
    inline int size(){return adj.size();}
};

struct NormalEdge {
    int to;
    NormalEdge(int to):to(to){}
};

struct UWGraph : public Graph<NormalEdge>
{
    UWGraph(int N):Graph(N){}
    void add_edge(int v, int e){adj[v].push_back({e});}
};

//-------------------------------------------------
//--Prim
//-------------------------------------------------
template<class T=int, class E>
T prim(Graph<E> &G, int s=0)
{
    T ret=0;
    using P=pair<T,int>;
    int V = G.size();
    vector<bool> use(V);
    priority_queue<P,vector<P>,greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
        T cost; int v;
        tie(cost,v) = que.top(); que.pop();
        if (use[v]) continue;
        ret+=cost; use[v]=true;
        for(auto e:G[v])if(!use[e.to]){
            que.push(P(e.cost,e.to));
        }
    }
    return ret;
}

struct Edge{int to; ll cost;};

const ll INF=1e15;

//-------------------------------------------------

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,M; cin>>N>>M;
    Graph<Edge> G(N);
    rep(i,M){
        int a,b; ll c; cin>>a>>b>>c;
        G.add_edge(a,{b,c});
        G.add_edge(b,{a,c});
    }
    cout<<prim<ll>(G)<<"\n";
    return 0;
}

