#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

const int Max = 100;
const int white = 0;
const int black = 1;
int M[Max][Max];
int d[Max], nt[Max], color[Max];
int n;
queue<int> Q;

int next(int u){
    for(int v=nt[u]; v<n; v++){
        nt[u] = v + 1;
        if(M[u][v]) return v;
    }
    return -1;
}

void bfs_visit(int u){
    for(int i=0; i<n; i++){
        nt[i] = 0;
        d[i] = -1;
    }

    color[u] = black;
    d[u] = 0;
    Q.push(u);
    while(!Q.empty()){
        int u = Q.front();
        int v = next(u);
        if(v != -1){
            if(color[v] == white){
                color[v] = black;
                d[v] = d[u] + 1;
                Q.push(v);
            }
        } else {
            Q.pop();
        }
    }
}

int main(){
    int u, k, v;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        color[i] = white;
    }
    for(int i=0; i<n; i++){
        cin >> u >> k;
        u--;
        for(int i=0; i<k; i++){
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    bfs_visit(0);

    for(int i=0; i<n; i++){
        cout << i+1 << " " << d[i] << endl;
    }
    
    return 0;
}
