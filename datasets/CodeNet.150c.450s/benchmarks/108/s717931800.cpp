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
//--Dist BFS
//-------------------------------------------------
template<class E>
vector<int> distBFS(Graph<E> &G, int s)
{
    vector<int> dist(G.size(),-1); dist[s]=0;
    queue<int> que; que.push(s);
    while(!que.empty()){
        int v = que.front(); que.pop();
        for(auto e:G[v]){
            if (dist[e.to]!=-1) continue;
            dist[e.to]=dist[v]+1;
            que.push(e.to);
        }
    }
    return dist;
}

//-------------------------------------------------

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin>>N;
    UWGraph G(N);
    rep(i,N){
        int u,k; cin>>u>>k; u--;
        rep(i,k){
            int v; cin>>v; v--;
            G.add_edge(u,v);
        }
    }
    auto dist = distBFS(G,0);
    rep(i,N){
        cout<<i+1<<" "<<dist[i]<<"\n";
    }
    return 0;
}

