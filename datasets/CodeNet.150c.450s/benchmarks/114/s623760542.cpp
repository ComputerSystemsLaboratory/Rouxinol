#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#define N 110
#define INF 0x3f3f3f3f
using namespace std;
typedef struct {
    int w;
    int s;
    int e;
}Edge;
Edge edge[N*N];
int m[N][N];
int father[N];
int n;
int k = 0;  //edge的下标
int result = 0;
int findfather(int x){
    return x == father[x] ? x : findfather(father[x]);
}
int cmp(Edge a, Edge b){
    return a.w < b.w;
}
void Kruscal(){
    for(int u = 0; u < k; u++){
        int s = edge[u].s;
        int e = edge[u].e;
        if(findfather(s) != findfather(e)){
            father[findfather(e)] = s;
            result += edge[u].w;
        }
    }
    printf("%d\n", result);
}
int main(){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) father[i] = i;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int b;
            scanf("%d", &b);
            m[i][j] = b;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n ;j++){
            if(m[i][j] != -1) {
                edge[k].w = m[i][j];
                edge[k].s = i;
                edge[k].e = j;
                k++;
            }
        }
    }
    sort(edge, edge+k, cmp);
    Kruscal();
    return 0;
}

