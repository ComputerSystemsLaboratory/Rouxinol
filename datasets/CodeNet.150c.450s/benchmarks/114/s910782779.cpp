#include<cstdio>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
typedef pair< int, int > Pi;
const int INF = 1 << 30;
int info[100][100];
bool used[100];

int prim(const int& V){
  fill_n( used, V, false);
  priority_queue< Pi, vector< Pi >, greater< Pi > > que;
  que.push(Pi( 0, 0));
  int ret = 0;
  while(!que.empty()){
    Pi p = que.top();
    que.pop();
    if(used[p.second]++) continue;
    ret += p.first;
    for(int i = 0 ; i < V ; i++){
      if(~info[p.second][i]) que.push( Pi( info[p.second][i], i));
    }
  }
  return ret;
}

int main(){
  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    for(int j = 0 ; j < N ; j++){
      scanf("%d", &info[i][j]);
    }
  }
  printf("%d\n", prim(N));
}