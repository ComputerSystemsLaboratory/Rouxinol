#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,d[100];
bool graph[100][100], visited[100];
queue<int> q;


void bfs(int s){
    q.push(s);
    visited[0]=true;

    while(!q.empty()){
        int v=q.front(); q.pop();
        for(int v2=0; v2<n; v2++){
            if(graph[v][v2] && visited[v2]==false){
                d[v2]=d[v]+1; visited[v2]=true;
                q.push(v2);
            }
        }
    }
}


int main(void){
    cin >> n;

    for(int i=0; i<n; i++){
        visited[i]=false;
        d[i]=-1;
        for(int j=0; j<n; j++) graph[i][j]=false;
    }
    for(int i=0; i<n; i++){
        int v,k; cin >> v >> k;
        for(int j=0; j<k; j++){
            int w; cin >> w;
            graph[v-1][w-1]=true;
        }
    }
    d[0]=0;


    q.push(0);
    bfs(0);

    for(int i=0; i<n; i++){
        printf("%d %d\n",i+1, d[i]);
    }

}
