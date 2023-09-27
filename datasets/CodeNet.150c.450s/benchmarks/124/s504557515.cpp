#include<iostream>
using namespace std;

int main()
{
    int n, m, i, j, a, w;
    int* adj[100];
    int* dist[100];
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> i >> m;
        adj[i] = new int [m + 1];
        dist[i] = new int [m + 1];
        for(j = 0; j < m; j++){
            cin >> a >> w;
            adj[i][j] = a;
            dist[i][j] = w;
        }
        adj[i][m] = -1;
        dist[i][m] = -1;
    }
    int *d, *prev, *Q;
    d = new int [n];
    prev = new int [n];
    Q = new int [n];
    for(i = 0; i < n; i++){ d[i] = 200000; prev[i] = -1; Q[i] = i; }
    int rest = n;
 
    int u, v, min;
    d[0] = 0;
    while(rest > 0){
        min = 200000;
        for(i = 0; i < n; i++){
            if(min > d[i] && Q[i] >= 0){ min = d[i]; u = i; }
        }
        Q[u] = -1;
        rest--;

        for(j = 0; adj[u][j] >= 0; j++){
            v = adj[u][j];
            if(d[v] > d[u] + dist[u][j]){
                d[v] = d[u] + dist[u][j];
                prev[v] = u;
            }
        }
    };
    for(i = 0; i < n; i++){ cout << i << " " << d[i] << endl; }
    for(i = 0; i < n; i++){
        delete adj[i]; delete dist[i]; }
    delete d;
    delete prev;
    delete Q;
    cin >> n;
 
    return 0;
}