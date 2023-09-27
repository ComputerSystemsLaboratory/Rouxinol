#include <iostream>
#include <algorithm>
using namespace std;
struct edge{int from,to,cost;};
edge es[2002];
int d[1002];
int V,E;
const int INF = (1 << 30);

void shortest_path(int s){
    for (int i=0;i < V;i++) d[i]=INF;
    d[s] = 0;
    while(true){
        bool update = false;
        for (int i = 0;i < E;i++){
            edge e = es[i];
            if ( d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) break;
    }
}

bool find_negative_loop(int s){
    for (int i=0;i < V;i++) d[i] = 0;
    for (int i=0;i < V;i++){
        for (int j = 0;j < E;j++){
            edge e =es[j];
            if ( d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                if (i == V-1 ) return true;
            }
        }
    }
    return false;
}

bool f(int s){
    for (int i=0;i < V;i++) d[i]=INF;
    d[s] = 0;
    int cnt=0;
    while(true){
        bool update = false;
        for (int i = 0;i < E;i++){
            edge e = es[i];
            if ( d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
                if (cnt == V-1) return true; 
            }
        }
        cnt++;
        if (!update) break;
    }
    return false;
}

int main(){
    int s;
    cin >> V >> E >> s;
    for (int i=0;i < E;i++){
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    if (f(s)) {
        cout << "NEGATIVE CYCLE" << endl;
        //for (int i=0;i < V;i++){
        //    cout << d[i] << endl;
        //}
    }
    else{
        //shortest_path(s);
        for (int i=0;i < V;i++){
            if (d[i] == INF) cout << "INF" << endl;
            else cout << d[i] << endl;
        }
    }

    return 0;
}
