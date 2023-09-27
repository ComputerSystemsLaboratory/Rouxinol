#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<map>
using namespace std;
typedef pair< int, int > Pi;
const int INF = 1 << 30;
struct edge: vector< Pi > {
  void add_edge(int to, int cost){
    push_back(Pi(to,cost));
  }
} info[100000];
int hoge[100000];

void bfs(const int& st, const int& V){
  fill_n( hoge, V, INF);
  queue< int > que;
  que.push(st);
  hoge[st] = 0;
  while(!que.empty()){
    int p = que.front();
    que.pop();
    for(int i = 0 ; i < info[p].size() ; i++){
      int cost = info[p][i].second;
      int to = info[p][i].first;
      if( cost + hoge[p] < hoge[to]){
        que.push(to);
        hoge[to] = cost + hoge[p];
      }
    }
  }
}

int main(){
  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    int u, k;
    scanf("%d %d", &u, &k);
    while(k--){
      int v, c;
      scanf("%d %d", &v, &c);
      info[u].add_edge( v, c);
    }
  }
  bfs(0, N);
  for(int i = 0 ; i < N ; i++ ){
    printf("%d %d\n", i, hoge[i]);
  }
}