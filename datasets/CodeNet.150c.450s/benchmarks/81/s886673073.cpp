#include <iostream>
#include <cstdio>
using namespace std;

const int INF = 1<<20;
const int MAX_V = 10;
const int MAX_E = 45;

int d[MAX_V][MAX_V];
int n;
int V;

void show_d() {
    cout << "===" << endl;
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            printf("%3d ", d[i][j]);
        }
        cout << endl;
    }
}

void warshall_floyd() {
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
        // show_d(); // debug
    }
}

int main() {
    while(true) {
        cin >> n;
        if(!n) break;
        int f, t, c;
        V = 0;
        for(int i = 0; i < MAX_V; i++) {
            for(int j = 0; j < MAX_V; j++) {
                d[i][j] = INF;
                if(i == j) d[i][j] = 0;
            }
        }
        for(int i = 0; i < n; i++) {
            cin >> f >> t >> c;
            d[f][t] = c;
            d[t][f] = c;
            V = max(V, f+1);
            V = max(V, t+1);
        }

        warshall_floyd();

        int ix = 0, s = INF;
        for(int i = 0; i < V; i++) {
            int tmp = 0;
            for(int j = 0; j < V; j++) {
                tmp += d[i][j];
            }
            if(tmp < s) {
                ix = i;
                s = tmp;
            }
        }

        cout << ix << " " << s << endl;

    }
    return 0;
}