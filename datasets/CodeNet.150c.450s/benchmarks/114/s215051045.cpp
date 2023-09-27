#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

#define INF 2001
#define MAX 101

using namespace std;

int MAT[MAX][MAX];
int N;

int prim(){
    int sum;
    bool complete[MAX];
    int dist[MAX];
    int parent[MAX];
    
    for (int i = 0; i < N; i++) {
        complete[i] = false;
        dist[i] = INF;
        parent[i] = -1;
    }
    
    dist[0] = 0;
    
    while (1) {
        int u = -1;
        int min = INF;
        
        for (int i = 0; i < N; i++) {
            if (min > dist[i] && !complete[i]) {
                u = i;
                min = dist[i];
            }
        }
        
        if (u == -1) break;
        
        complete[u] = true;
        
        for (int v = 0; v < N; v++) {
            if (!complete[v] && MAT[u][v] != INF) {
                if (dist[v] > MAT[u][v]) {
                    dist[v] = MAT[u][v];
                    parent[v] = u;
                }
            }
        }
    }
    
    sum = 0;
    
    for (int i = 1; i < N; i++) {
        sum += MAT[parent[i]][i];
    }
    
    return sum;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d",&MAT[i][j]);
            if (MAT[i][j] == -1) MAT[i][j] = INF;
        }
    }
    
    cout << prim() << endl;
    
    return 0;
}