#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
static const long long INF = 100000000000000;
bool warshall_floyd(vector<vector<long long> > &graph);


int main() {
    int v,e;
    scanf ("%d %d",&v,&e);
    vector<vector<long long> > g (v, vector<long long>(v,INF));
    int s,t,d;
    for(int i=0;i<e;i++){
      scanf ("%d %d %d",&s,&t,&d);
      g[s][t]=d;
    }
    bool x;
    x=warshall_floyd(g);
    if(x==true){
      for(int i=0;i<v;i++){
        if(g[i][0]>=INF){
          printf("INF");
        }
        else{
          printf("%lld",g[i][0]);
        }
        for(int j=1;j<v;j++){
          if(g[i][j]>=INF){
            printf(" INF");
          }
          else{
            printf(" %lld",g[i][j]);
          }
        }
        printf("\n");
      }
    }
    else{
      printf("NEGATIVE CYCLE\n");
    }
}

// graph は隣接行列形式！
// 戻り値は負閉路検出結果で、負閉路があれば false 、なければ true
bool warshall_floyd(vector<vector<long long> > &graph) {
    int V = graph.size();
    // 自分までの距離は 0 としておく。後で使う。
    for (int i = 0; i < V; i++) { graph[i][i] = 0; }
    // 本体
    for (int k = 0; k < V; k++) {
      for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
          // 右辺に INF を含むときは計算しないようにする。
          // 重みが負になる辺があると INF - 1 とかになってしまい、
          // INF と区別がつかなくなる。
          if (graph[i][k] < INF && graph[k][j] < INF){
            graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
          }
        }
      }
    }
    // 負閉路検出をやる
    for (int i = 0; i < V; i++) {
      if (graph[i][i] < 0) {
        // これ、もし負閉路がなければ最初に入れた 0 が残っているはず。
        // そうでないということは、負閉路があって、そこを経由して自分自身に戻ってきたということ。
        return false;
      }
    }
    return true;
}




