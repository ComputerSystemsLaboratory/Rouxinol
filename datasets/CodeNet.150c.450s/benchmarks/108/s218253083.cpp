#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <complex>
#include <stack>
#include <queue>
#include <list>
#include <utility>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    int g[110][110];
    int i, j;
    int u, k, v;
    int p;
    int dist[110];
    bool visited[110];
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            g[i][j] = 0;
        }
    }
    
    for(i = 0; i < n; i++){
        dist[i] = -1;
        visited[i] = false;
    }
    
    for(i = 0; i < n; i++){
        cin >> u >> k;
        u--;
        for(j = 0; j < k; j++){
            cin >> v;
            v--;
            g[u][v] = 1;
        }
    }
    
    queue<int> q1, q2;
    q1.push(0);
    
    for(i = 0; q1.size(); i++){
        while(!q1.empty()){
            p = q1.front();
            q1.pop();
            
            if(visited[p]) continue;
            visited[p] = true;
            
            dist[p] = i;
            
            for(j = 0; j < n; j++){
                if(g[p][j]){
                    q2.push(j);
                }
            }
        }
        q1 = q2;
        while(!q2.empty()){
            q2.pop();
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%d %d\n", i+1, dist[i]);
    }
}

