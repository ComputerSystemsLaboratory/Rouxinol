#include <bits/stdc++.h>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> P;
typedef tuple<int,int,int> tpl;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SORT(c) sort((c).begin(),(c).end())
#define REVERSE(c) reverse((c).begin(),(c).end())
#define LB(a,x) lower_bound((a).begin(), (a).end(), x) - (a).begin()
#define UB(a,x) upper_bound((a).begin(), (a).end(), x) - (a).begin()

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RFOR(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define RREP(i,n) RFOR(i,n,0)

#define en "\n"

const double EPS = 1e-9;
const double PI  = acos(-1.0);
const int INT_INF = 2147483647;
const long long LL_INF = 1LL<<60;
const long long MOD = 1000000007;

#define CLR(a) memset((a), 0, sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

struct Node{
    int id, v;
    bool done = false;
    Node(int id, int v=INT_INF): id(id), v(v) {}
    Node(): id(0), v(INT_INF) {}
};

bool operator>(Node a, Node  b){
    return a.v > b.v;
}

struct Edge{
    int from, to, cost, id;
    Edge(int from, int to, int cost=1, int id=-1): from(from), to(to), cost(cost), id(id) {}
};

bool operator>(Edge a, Edge  b){
    return a.cost > b.cost;
}

struct Graph{
    int N;
    vector<vector<Edge>> adj;
    vector<Node> node;

    Graph(int N): N(N) {
        adj.assign(N, vector<Edge>());
        node.assign(N, Node());
        for(int i=0; i<N; ++i) node[i].id = i;
    }

    Graph() {}

    void add_edge(int i, int j, int cost=1, int id=-1){
        Edge e(i, j, cost, id);
        adj[i].emplace_back(e);
    }

    vector<Edge> get_adj(Node node){
        return adj[node.id];
    }

    void assign(int n){
        N = n;
        adj.assign(N, vector<Edge>());
        node.assign(N, Node());
        for(int i=0; i<N; ++i) node[i].id = i;
    }
};

struct UnionFind{
    vector<int> par; // par[i]:iの親の番号
    vector<int> s; // s[i]:iの属する木のノード数
    int n_group; // 木の数
    
    UnionFind(int N) : par(N) {
        for(int i=0; i<N; i++) par[i] = i;
        s.assign(N, 1);
        n_group = N;
    }
    
    int root(int x){ // xが属する木の根
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    
    void unite(int x, int y){ // xとyの木を併合
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        par[rx] = ry;
        s[ry] += s[rx];
        s[rx] = 0;
        n_group--;
    }
    
    bool same(int x, int y){ // xとyが同じ木に属するかどうか
        return root(x) == root(y);
    }

    int size(int x){ // xが属する木のノード数
        return s[root(x)];
    }
};

int main(void){
    int N,M; cin >> N >> M;
    Graph G(N);
    REP(i,M){
        int s,t,w; cin >> s >> t >> w;
        G.add_edge(s,t,w);
        G.add_edge(t,s,w);
    }

    UnionFind uf(N);
    int ans = 0;
    priority_queue<Edge,vector<Edge>,greater<Edge>> q;
    q.push(Edge(0,0,0));
    while(q.size()){
        Edge n = q.top(); q.pop();
        if(G.node[n.to].done) continue;
        G.node[n.to].done = true;
        if(!uf.same(n.from,n.to)){
            uf.unite(n.from, n.to);
            ans += n.cost;
        }
        for(Edge e : G.adj[n.to]){
            q.push(e);
        }
    }
    cout << ans << en;
    return 0;
}
