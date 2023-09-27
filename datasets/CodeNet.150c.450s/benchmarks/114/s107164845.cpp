#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long
// 0-indexedに注意
template<typename T>
struct Edge {
    int to;
    T cost;
    Edge(int to, T cost) : to(to), cost(cost) {}
};

template<typename T>
class Prim{
    private:
        vector<vector<Edge<T>>> graph;
        vector<bool> used;
    public:
        Prim(int n);
        void AddEdge(int from, int to, T cost);
        T Run();
};

template<typename T>
Prim<T>::Prim(int n): graph(n), used(n, false) {}

template<typename T>
void Prim<T>::AddEdge(int from, int to, T cost){
    graph[from].push_back(Edge<T>(to, cost));
}

template<typename T>
T Prim<T>::Run(){
    using Pi = pair<T, int>;
    T total = 0;
    priority_queue<Pi, vector<Pi>, greater<Pi>> que;
    que.emplace(0, 0);
    while(!que.empty()){
        Pi p = que.top();
        que.pop();
        if(used[p.second]) continue;
        used[p.second] = true;
        total += p.first;
        for(auto &e : graph[p.second]){
            que.emplace(e.cost, e.to);
        }
    }
    return total;
}
/*************** using variables ***************/

/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    Prim<int> prim(n);
    REP(i, n){
        REP(j, n){
            int x;
            cin >> x;
            if(x != -1) prim.AddEdge(i, j, x);
        }
    }

    cout << prim.Run() << endl;
}

