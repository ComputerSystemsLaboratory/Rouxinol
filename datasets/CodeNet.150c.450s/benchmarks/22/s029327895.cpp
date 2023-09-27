#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long ll;
typedef pair<int,int> pii;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

// graph //
struct Edge {
    int from,to,cost;
    Edge(int f,int t, int c) : from(f), to(t), cost(c) {}
    bool operator<(const Edge &e){return cost < e.cost;}
};

using Graph = vector<Edge>;

template<class T>
class ShortestPath {
    public:
        ShortestPath(int size){
            mDst.assign(size,INF);
        }

        bool bellman_ford(int s, int V,  Graph &g){
            mDst[s] = 0;
            for(int i = 0; i < V;++i){
                for(auto e : g){
                    if(mDst[e.from]!=INF && mDst[e.to] > mDst[e.from] + e.cost){
                        mDst[e.to] = mDst[e.from] + e.cost;
                        if(i == V-1) return true;
                    }
                }
            }
            return false;
        }

        vector<T> getDst(){return mDst;}
    private:
        vector<T> mDst;
};


int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    int V,E,r,s,t,d;
    cin >> V >> E >> r;

    Graph g;
    ShortestPath<ll> sp(V);
    REP(i,E){
        cin >> s >> t >> d;
        g.emplace_back(s,t,d);
    }
    if(sp.bellman_ford(r,V,g)){
        cout << "NEGATIVE CYCLE" << '\n';
        return 0;
    }
    auto dst = sp.getDst();
    REP(i,V){
        if(dst[i]==INF) cout << "INF" << '\n';
        else cout << dst[i] << endl;
    }
    return 0;
}
