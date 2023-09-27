#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define rep(i,n) for(int i=0;i<(int)n;i++)

const int INF=(1LL<<31)-1;
int V,E,r;

struct Edge{
    int from;
    int to;
    int d;
};
vector<Edge> G;
vector<int> D(1919);

bool shortestPath(int s){
    rep(i,V) D[i] = INF;
    D[s] = 0;
    int cnt = 0;
    while(true){
        bool update = false;
        rep(i,E){
            Edge e = G[i];
            if(D[e.from]!=INF && D[e.to]>D[e.from]+e.d){
                update = true;
                D[e.to] = D[e.from] + e.d; 
            }
        }
        if(!update) break;
        cnt++;
        if(cnt>=V) return false;
    }
    return true;
}


int main(){
    cin >> V >> E >> r;
    G.resize(E);
    rep(i,E){
        int s,t,d; cin >> s >> t >> d;
        Edge e = {s,t,d};
        G[i] = e;
    }
    bool neg = shortestPath(r);

    if(!neg){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    ll res = 0;
    rep(i,V){
        if(D[i] == INF) {
            cout<<"INF" << endl;
            continue;
        }
        cout << D[i] << endl;
    }
}
