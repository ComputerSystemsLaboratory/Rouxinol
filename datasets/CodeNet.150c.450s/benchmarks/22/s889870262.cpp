#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <random>
#include <chrono>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
#define INF 1000000000
#define MOD 1000000007
#define EPS 0.00000001


int main(){
    int V, E, S; cin >> V >> E >> S;
    struct edge {
        int from, to, cost;
    };

    vector<edge> es(E);
    vector<int> d(V, INF);
    
    for(edge &e:es){
        int f, t, c; cin >> f >> t >> c;
        e.from = f;
        e.to = t;
        e.cost = c;
    }
    
    d[S] = 0;
    bool negativ_cycle = false;
    for(int i=0; i<V; i++){
        bool updated = false;
        for(int i=0; i<E; i++){
            edge e = es[i];
            if(d[e.from]!=INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                updated = true;
            }
        }
        if(!updated) break;
        if(i==V-1) negativ_cycle = true;
    }
    
    if(negativ_cycle){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for(int i=0; i<V; i++){
        if(d[i]==INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
    return 0;
}

