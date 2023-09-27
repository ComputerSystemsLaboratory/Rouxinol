#include<bits/stdc++.h>
#define int long long
#define loop(i, a, b) for(int i = a; i < b; i++)
#define rep(i, a) loop(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int MOD = 1e9 + 7, INF = 1e9;
using vi = vector <int>;
using vvi = vector <vi>;
//g++ -std==c++14
const int MAX_E = 2020;
const int MAX_V = 1010;

struct edge{int from, to, cost;};
edge es[MAX_E];
int d[MAX_V];
int V, E;

int bellman_ford(int s){
    for(int i = 0; i < V; i++)
        d[i] = INF;
    d[s] = 0;
    int cnt = 0;
    while(true){
        bool update = false;
        cnt++;
        for(int i = 0; i < E; i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                if(cnt == V)
                    return true;
                update = true;
            }
        }
        if(!update)break;
    }
    return false;
}

signed main(){
    cin >> V >> E;
    int r;
    cin >> r;
    int s, t, c;
    rep(i, E){
        cin >> s >> t >> c;
        es[i].from = s;
        es[i].to = t;
        es[i].cost = c;
    }
    if(bellman_ford(r))
        cout << "NEGATIVE CYCLE" << endl;
    else{
        rep(i, V){
            if(d[i] == INF)cout << "INF" << endl;
            else
                cout << d[i] << endl;
        }
    }
}