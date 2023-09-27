#include<cstdio>
#include<vector>
using namespace std;

struct edge{int from,to,cost;};
const int INF = 1000000000;
int v,e,r;
vector<edge> E;
int d[1000];

int main(){
  scanf("%d %d %d",&v,&e,&r);
  for(int i=0;i<e;i++){
    edge tmp;
    scanf("%d %d %d",&tmp.from,&tmp.to,&tmp.cost);
    E.push_back(tmp);
  }
  fill(d,d+v,INF);
  d[r] = 0;
  int t = 0;
  while(true){
    bool flag = true;
    for(int i=0;i<E.size();i++){
      if(d[E[i].from]!=INF&&d[E[i].from]+E[i].cost<d[E[i].to]){
        d[E[i].to] = d[E[i].from]+E[i].cost;
        flag = false;
      }
    }
    if(flag) break;
    if(t>v+5){
      printf("NEGATIVE CYCLE\n");
      return 0;
    }
    t++;
  }
  for(int i=0;i<v;i++){
    if(d[i]==INF) printf("INF\n");
    else printf("%d\n",d[i]);
  }
  return 0;
}