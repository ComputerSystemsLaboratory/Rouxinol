#include <bits/stdc++.h>
using namespace std;

struct edge{
    int to,cost;
    edge(){
        to = 0; cost = 0;
    }
    edge(int t,int c){
        to = t;
        cost = c;
    }
};

int n;
vector<edge> G[100001];
long long int d[100001];

const long long int INF = 1000000000000;

void Dijkstra(int s){

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > que;

    fill(d,d+n,INF);

    d[s] = 0;

    que.push(make_pair(0,s));

    while(!que.empty()){
        pair<int,int> p = que.top(); que.pop();

        int v = p.second;
        if(d[v] < p.first){
            continue;
        }
        for(int i=0; i<G[v].size(); i++){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(make_pair(d[e.to],e.to));
            }
        }

    }

}

int main() {

    cin >> n;

    int ed,r;

    cin >> ed >> r;

    int a, b, c;

    for (int i = 0; i < ed; i++) {
        scanf(" %d %d %d", &a, &b, &c);
        G[a].push_back(edge(b, c));
    }

    Dijkstra(r);

    for (int i = 0; i < n; i++) {

        if(d[i]!=INF){
            cout << d[i] << endl;
        }
        else{
            cout << "INF" << endl;
        }
    }

    return 0;
}