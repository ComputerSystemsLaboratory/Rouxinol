#include<bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define ALL(v) (v).begin(), (v).end()
#define p(s) cout<<(s)<<endl
#define p2(s, t) cout << (s) << " " << (t) << endl
#define br() p("")
#define pn(s) cout << (#s) << " " << (s) << endl
#define p_yes() p("Yes")
#define p_no() p("No")

const ll mod = 1e9 + 7;
const ll inf = 1e18;

template < typename T >
void vprint(T &V){
	for(auto v : V){
    	cout << v << " ";
	}
	cout << endl;
}

struct Edge{
    ll to;
    ll cost;
    Edge(ll to, ll cost): to(to), cost(cost) {}
    Edge(){}
};

struct BellmanFord{
    vector<vector<Edge> > edges;
    vector<ll> dist;
    
    BellmanFord(ll sz){
        edges.resize(sz);
        dist.resize(sz, inf);
    }

    void add_edge(ll a, ll b, ll c){
        edges[a].push_back(Edge(b, c));
    }

    // 計算量 V * E
    vector<ll> calc_shortest_path(ll start){
        dist[start] = 0;
        ll N = dist.size();
        ll loop = N - 1;
        while(loop--){
            FOR(i, 0, N){
                if(dist[i]==inf) continue;
                for(auto edge : edges[i]){
                    chmin(dist[edge.to], dist[i] + edge.cost);
                }
            }
        }

        // negative check
        FOR(i, 0, N){
            if(dist[i]==inf) continue;

            for(auto edge : edges[i]){
                if(dist[i] + edge.cost < dist[edge.to]){
                    // まだ減るなら閉路
                    return vector<ll>();
                }
            }
        }

        return dist;
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    ll V, E, r;
    cin >> V >> E >> r;

    auto bf = BellmanFord(V);

    FOR(i, 0, E){
        ll a, b, c;
        cin >> a >> b >> c;
        bf.add_edge(a, b, c);
    }

    auto lis = bf.calc_shortest_path(r);
    if(lis.size()==0){
        p("NEGATIVE CYCLE");
    }
    else{
        FOR(i, 0, V){
            if(lis[i]==inf){
                p("INF");
            }else{
                p(lis[i]);
            }
        }
    }
    
    return 0;
}
