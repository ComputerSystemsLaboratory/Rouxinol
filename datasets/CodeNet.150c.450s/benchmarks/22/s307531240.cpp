#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;
typedef long long ll;

int INF=1e9;
struct edge { int from, to, cost; };

edge es[2005];
int d[1005];
int v, e;
bool neg = false;

void shortest_path(int s) {
    for (int i = 0; i < v; i++) d[i] = INF;
    d[s] = 0;
    for (int i = 0; i < v; i++) {
        bool update = false;
        for (int j = 0; j < e; j++) {
            edge e = es[j];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
                if (i == v - 1) {
                    neg = true;
                }
            }
        }
        if (!update) break;
    }
}

bool find_negative_loop() {
    memset(d, 0, sizeof(d));
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < e; j++) {
            edge e = es[j];
            if (d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if (i == v - 1) return true;
            }
        }
    }
    return false;
}


int main(void){
    int r;
    cin >> v >> e >> r;
    for (int i = 0; i < e; i++) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    
    shortest_path(r);
    if (neg) cout << "NEGATIVE CYCLE" << endl;
    else {
        for (int i = 0; i < v; i++) {
            //shortest_path(r);
            if (d[i] != INF) cout << d[i] << endl;
            else cout << "INF" << endl;
        }
    }
    
}

