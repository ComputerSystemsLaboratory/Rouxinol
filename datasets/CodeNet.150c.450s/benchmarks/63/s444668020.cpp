#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define P pair<ll,ll>

const ll INF = 10000000000;
struct edge{ll to,cost;};

int v;
vector<edge> g[100000];
ll d[100000];

void dijkstra(int s){
    priority_queue<P,vector<P>,greater<P> > que;
    fill(d,d+v,INF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p = que.top(); que.pop();
        ll k = p.second;
        if(d[k] < p.first){
            continue;
        }
        for(int i=0; i < g[k].size(); i++){
            edge e = g[k][i];
            if(d[e.to] > d[k] + e.cost){
                d[e.to] = d[k] + e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}

int main() {

    int e,r,s,t,l;

    cin >> v >> e >> r;

    for(int i=0; i<e; i++){
        cin >> s >> t >> l;
        edge ed;
        ed.to = t;
        ed.cost = l;
        g[s].push_back(ed);
    }

    dijkstra(r);

    for(int i=0; i<v; i++){
        if(d[i] != INF) {
            cout << d[i] << endl;
        }
        else{
            cout << "INF" << endl;
        }
    }



    return 0;
}