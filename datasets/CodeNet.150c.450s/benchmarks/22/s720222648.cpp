#include <iostream>
#include <queue>
#include <map>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;
#define INF 2e9 + 9
#define ALL(v) v.begin() , v.end()
#define Int int_fast64_t
#define pll pair<Int,Int>
template<class T> using pql = priority_queue<T,vector<T>>;
template<class T> using pq = priority_queue<T,vector<T>,greater<T>>;
#define ll(n) Int n; cin >> n;
#define LL(...) Int __VA_ARGS___; cin >> __VA_ARGS___;
#define OUT(...) cout << __VA_ARGS___;
#define RP(n) for (Int i = 0; i < n; i++)
#define REP(n,i) for (Int i = 0; i < n; i++)

struct node{
    Int to;
    Int length;
};

vector<vector<node>> to;
vector<int> flag;
vector<int> c;


void dfs(int from) {
    for (auto z : to.at(from)) {
        int next = z.to;
        int length = z.length;
        if (flag.at(next) == 0) {
            flag.at(next) = 1;
            if (length % 2 == 0) {
                c.at(next) = c.at(from);
            } else {
                c.at(next) = 1 - c.at(from);
            }
            dfs(next);
        }
    }
}
class Graph {
protected:
    int n;
    vector<Int> prev;
    vector<Int> minD;
    vector<vector<node>> ker;
public:
    Graph(Int N) : n(N) , prev(N) , minD(N) , ker(N) {}
    void addEdge(Int from, Int next, Int cost) {
        ker.at(from).push_back({next, cost});
        ker.at(next).push_back({from, cost});
    }
    void addDirectedEdge(Int from, Int next, Int cost){
        ker.at(from).push_back({next,cost});
    }
    void dijkstra(Int s) {
        REP(n,i) {
            minD.at(i) = INF;
        }
        minD.at(s) = 0;
        priority_queue<pll,vector<pll>,greater<>> que;
        que.push({0,s});
        while(!que.empty()){
            auto z = que.top();
            que.pop();
            int v = z.second;
            if (minD[v] < z.first) continue;
            REP(ker.at(v).size(),i){
                node n = ker.at(v).at(i);
                if (minD[n.to] > minD[v] + n.length) {
                    minD[n.to] = minD[v] + n.length;
                    que.push({minD[n.to],n.to});
                }
            }
        }
    }

    bool bellmanford(Int s){
        bool flag = false;
        REP(n,i) {
            minD.at(i) = INF;
        }
        minD.at(s) = 0;
        REP(n-1,i) {
            REP(n, k) {
                for (auto z: ker.at(k)) {
                    if (minD[k] != INF && minD[z.to] > minD[k] + z.length) {
                        minD[z.to] = minD[k] + z.length;
                    }
                }
            }
        }

        REP(n, k) {
            for (auto z: ker.at(k)) {
                if (minD[k] != INF && minD[z.to] > minD[k] + z.length) {
                    minD[z.to] = minD[k] + z.length;
                    flag = true;
                }
            }
        }
        return flag;
    }

    Int getD(Int x){
        return minD[x];
    }

    Int putD(Int x, string sep = "\n"){
        if (minD[x] == INF) {
            cout << "INF" << sep;
        }else{
            cout << minD[x] << sep;
        }
        return minD[x];
    }
};

int main(void){
    Int v,e,r;
    cin >> v >> e >> r;
    Graph g = Graph(v);
    for (int i = 0; i < e; i++){
        Int s, t, d;
        cin >> s >> t >> d;
        g.addDirectedEdge(s,t,d);
    }
    if (g.bellmanford(r)) {
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        REP(v, i) {
            g.putD(i);
        }
    }

}
