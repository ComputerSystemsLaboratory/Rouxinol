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

int main() {


    int n;scanf("%d",&n);
    int u;
    int k;
    vector<vector<int> > graph;
    graph.resize(n);
    for(int i=0;i<n;i++){
        graph[i].resize(n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            graph[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        scanf("%d",&u);
        scanf("%d",&k);
        int value;
        for(int j=0;j<k;j++){
            scanf("%d",&value);
            graph[u-1][value-1]=1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j){
                printf(" ");
            }
            printf("%d",graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
