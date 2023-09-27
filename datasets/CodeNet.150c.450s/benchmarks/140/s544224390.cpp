#include <bits/stdc++.h>
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define PRINT(V) cout << V << "\n"
#define SORT(V) sort((V).begin(),(V).end())
#define RSORT(V) sort((V).rbegin(), (V).rend())
using namespace std;
using ll = long long;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF = 1e15;
const ll MOD = 1000000007;
typedef pair<ll,ll> P;
class Prim{
    public:
    struct Node{
        vector<P> edges; // cost node
        bool done;
        ll cost;
    };
    ll V;
    vector<Node> nodes;
    Prim(ll v){
        V = v;
        nodes.resize(v);
    }
    void add_edge(ll v,ll node,ll cost){
        nodes[v].edges.push_back(P(cost,node));
    }
    ll prim(){
        priority_queue<P,vector<P>,greater<P>> mincost;
        rep(i,V){
            nodes[i].cost = INF;
            nodes[i].done = false;
        }
        ll res = 0;
        mincost.push(P(0,0));
        while(!mincost.empty()){
            P p = mincost.top();mincost.pop();
            ll v = p.second;
            if (nodes[v].done) continue;
            nodes[v].done = true;
            res += p.first;
            for(P u:nodes[v].edges){
                if (!nodes[u.second].done) mincost.push(P(u.first,u.second));
            }
        }
        return res;
    }
};
int main(){
    ll v,e;
    cin >> v >> e;
    Prim g(v);
    ll s,t,w;
    rep(i,e){
        cin >> s >> t >> w;
        g.add_edge(s,t,w);
        g.add_edge(t,s,w);
    }
    PRINT(g.prim());
}

