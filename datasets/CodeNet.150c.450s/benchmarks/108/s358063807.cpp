#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <functional>
#include <map>
#include <cmath>
#include <queue>

using namespace std;

static const int N = 100;

int main() {

    int graph[N][N] = {0};
    int distance[N] = {-200000};
    bool alreadySearched[N] = {false};

    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        int u;scanf("%d",&u);
        u--;
        int k;scanf("%d",&k);
        for(int j=0;j<k;j++){
            int v;scanf("%d",&v);
            v--;
            graph[u][v] = 1;
        }
    }


    queue<int> Q;
    Q.push(0);
    distance[0] = 0;
    alreadySearched[0] = true;

    while(!Q.empty()){
        int u = Q.front();
        for(int i=0;i<n;i++){
            if(!alreadySearched[i] && graph[u][i] == 1){
                Q.push(i);
                alreadySearched[i] = true;
                distance[i] = distance[u] + 1;
            }
        }
        Q.pop();
    }

    for(int i=0;i<n;i++){
        if(!alreadySearched[i]){
            distance[i] = -1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n", i+1, distance[i]);
    }

    return 0;
}
