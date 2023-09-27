#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,t;
int d[100],f[100];
bool graph[100][100], visited[100];

void dfs(int v){
    visited[v]=true;
    t++;
    d[v]=t;

    for(int v2=0; v2<n; v2++){
        if(graph[v][v2] && visited[v2]==false) dfs(v2);
    }

    t++;
    f[v]=t;
}

int main(void){
    cin >> n;
    t=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            graph[i][j]=false;
        }
    }
    for(int i=0; i<n; i++){
        int v,k; cin >> v >> k;
        for(int j=0; j<k; j++){
            int w; cin >> w;
            graph[v-1][w-1]=true;
        }
    }

    for(int i=0; i<n; i++) visited[i]=false;
    for(int i=0; i<n; i++){
        if(visited[i]==false) dfs(i);
    }
    for(int i=0; i<n; i++){
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
}
