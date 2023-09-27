// AtCoder template
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < n; ++i)

/*
* グラフ構造体
*/
template<typename U>
struct edge{
    int to;
    int from;
    U cost; // 変更
    edge(int to, int from, U cost):to(to), from(from), cost(cost){}
    edge(int to, int from):to(to), from(from), cost(1){}
};

template<typename T>
class Graph{
public:
    vector<vector<edge<T>>> graph;
    int v_size;
    
    // 無向グラフならunDirected = true
    Graph(int n, vector<int> from, vector<int> to, vector<T> cost, bool unDirected){
        if(from.size() != to.size() || to.size() != cost.size()) cout << "Graph constructer detected error.\n";
        graph.assign(n, vector<edge<T>>());
        v_size = n;
        for(int i = 0; i < from.size(); ++i){
            edge<T> tmp(to[i], from[i], cost[i]);
            graph[from[i]].push_back(tmp);
            if(unDirected){
                swap(tmp.from, tmp.to);
                graph[to[i]].push_back(tmp);
            }
        }
    }
    Graph(int n, vector<int> from, vector<int> to, bool unDirected){
        if(from.size() != to.size()) cout << "Graph constructer detected error.\n";
        graph.assign(n, vector<edge<T>>());
        for(int i = 0; i < from.size(); ++i){
            edge<T> tmp(to[i], from[i]);
            graph[from[i]].push_back(tmp);
            if(unDirected){
                swap(tmp.from, tmp.to);
                graph[to[i]].push_back(tmp);
            }
        }
    }

    // BFS, DFS
    vector<bool> visited;
    bool BFS(int start, int goal){
        visited.assign(graph.size(), false);
        queue<pair<int, T>> que;
        que.emplace(start, 0);
        while(!que.empty()){
            int now = que.front().first;
            T depth = que.front().second;
            que.pop();
            visited[now] = true;
            
            if(now == goal){ // 処理記述

                return true;
            }
            
            for(int i = 0; i < graph[now].size(); ++i){
                int next = graph[now][i].to;
                int cost = graph[now][i].cost;
                if(visited[next]) continue;
                que.emplace(next, depth+cost);
            }
        }
        return false;
    }

    bool DFS(int start, int goal){
        visited.assign(v_size, false);
        stack<pair<int, T>> sta;
        sta.emplace(start, 0);
        while(!sta.empty()){
            int now = sta.top().first;
            T depth = sta.top().second;
            sta.pop();
            visited[now] = true;
    
            if(now == goal){ // 処理記述
                
                return true;
            }
            for(int i = 0; i < graph[now].size(); ++i){
                int next = graph[now][i].to;
                int cost = graph[now][i].cost;
                if(visited[next]) continue;
                sta.emplace(next, depth+cost);
            }
        }
        return false;
    }
    
    // ダイクストラ法（による最短経路木構築）
    vector<T> d_d;
    void Dijkstra(int start, int goal, T t_max){
        d_d.assign(graph.size(), t_max);
        d_d[start] = 0;
        priority_queue<pair<T,int>, vector<pair<T,int>>, greater<pair<T, int>> > que;
        que.emplace(0, start);
        while(!que.empty()){
            T dist = que.top().first;
            int now = que.top().second;
            que.pop();
            if(d_d[now] < dist) continue;
            //if(now == goal) return ; // ここの行を失くせばstart全頂点への距離が求められる
            for(int i = 0; i < graph[now].size(); ++i){
                int next = graph[now][i].to;
                int next_cost = graph[now][i].cost;
                if(d_d[next] > d_d[now] + next_cost){
                    d_d[next] = d_d[now] + next_cost;
                    que.emplace(d_d[next], next);
                }
            }
        }
    }

    // ワーシャルフロイド法
    vector<vector<T>> w_d;
    void Warshal_Floyd(T u_max){
        int n = graph.size();
        w_d.assign(n, vector<T>(n, u_max));
        for(int i = 0; i < n; ++i){
            w_d[i][i] = 0;
            for(int j = 0; j < graph[i].size(); ++j){
                int next = graph[i][j].to, dist = graph[i][j].cost;
                w_d[i][next] = dist;
            }
        }
        for(int i = 0; i < n ; ++i){
            for(int j = 0; j < n; ++j){
                for(int k = 0; k < n; ++k){
                    w_d[j][k] = min(w_d[j][k], w_d[j][i] + w_d[i][k]);
                }
            }
        }
    }
};




int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> from,to;
    vector<ll> cost;
    rep(i,n){
        int u,k; cin >> u >> k;
        rep(j,k){
            int v,c; cin >> v >> c;
            from.push_back(u);
            to.push_back(v);
            cost.push_back(c);
        }
    }
    Graph<ll> graph(n, from, to, cost, false);
    graph.Dijkstra(0, 0, INT_MAX);
    rep(i,n) cout << i << " " << graph.d_d[i] << "\n";
}
