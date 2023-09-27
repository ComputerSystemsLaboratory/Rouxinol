#include <iostream>
using namespace std;

const int Max = 100;
const int Infty = (1 << 21);
const int white = 0;
const int gray = 1;
const int black = 2;

int n, M[Max][Max];
int d[Max], p[Max], color[Max];


void dijkstra(int s){
    for(int i=0; i<n; i++){
        d[i] = Infty;
        p[i] = -1;
        color[i] = white;
    }
    d[s] = 0;
    int minv, u;
    while(1){
        minv = Infty;
        u = -1;
        for(int i=0; i<n; i++){
            if(color[i] != black && d[i] < minv){
                u = i;
                minv = d[i];
            }
        }
        if(u == -1) break;
        color[u] = black;
        for(int v=0; v<n; v++){
            if(color[v] != black && M[u][v] != Infty){
                if(d[v] > d[u] + M[u][v]){
                    d[v] = d[u] + M[u][v];
                    p[v] = u;
                    color[v] = gray;
                }
            }
        }
    }
    return;
}


int main(){
    cin >> n;
    int u, k, v, c;
    for(int i=0; i<n; i++){
        for(int l=0; l<n; l++){
            M[i][l] = Infty;
        }
        cin >> u >> k;
        for(int j=0; j<k; j++){
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra(0);
    for(int i=0; i<n; i++){
        cout << i << " " << d[i] << endl;
    }

    return 0;
}
