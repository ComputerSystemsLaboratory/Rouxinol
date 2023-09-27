#include <bits/stdc++.h>
using namespace std;

constexpr long long inf = numeric_limits<long long>::max()/10;
struct edge{
    long long to,cost;
    edge(){}
    edge(long long to_,long long cost_) : to(to_),cost(cost_){}
};

vector<long long> dijkstra(int s,const vector<vector<edge>>& g){
    using P = pair<long long,long long>;
    long long V = g.size();
    vector<long long> d(V,inf);
    priority_queue<P,vector<P>,greater<P>> que;
    d[s] = 0;
    que.push(P(0,s));
    while(!que.empty()){
        P p=que.top();que.pop();
        long long v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<g[v].size();i++){
            edge e=g[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
    return d;
}

int main(){
    int n;
    cin>>n;
    vector<vector<edge>> g(n);
    for(int i=0;i<n;i++){
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;j++){
            long long v,c;
            cin>>v>>c;
            g[u].push_back(edge(v,c));
        }
    }
    auto dist = dijkstra(0,g);
    for(int i=0;i<n;i++){
        cout << i << " " << dist[i] << endl;
    }
}