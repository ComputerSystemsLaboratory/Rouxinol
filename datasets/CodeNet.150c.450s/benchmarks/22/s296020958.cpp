#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int INF = 1000000000;
struct edge{int from,to,cost;};

int v,e,r;
vector<edge> E;

int main(){
  scanf("%d %d %d",&v,&e,&r);
  for(int i=0;i<e;i++){
    int s,t,d;
    scanf("%d %d %d",&s,&t,&d);
    edge tmp;
    tmp.from = s;
    tmp.to = t;
    tmp.cost = d;
    E.push_back(tmp);
  }
  int d[v];
  fill(d,d+v,INF);
  d[r] = 0;
  int times;
  for(times=0;times<=v;times++){
    bool flag = false;
    for(int i=0;i<E.size();i++){
      if(d[E[i].from]!=INF&&d[E[i].from]+E[i].cost<d[E[i].to]){
        flag = true;
        d[E[i].to] = d[E[i].from]+E[i].cost;
      }
    }
    if(flag==false) break;
  }
  if(times==v+1) printf("NEGATIVE CYCLE\n");
  else{
    for(int i=0;i<v;i++){
      if(d[i]==INF) printf("INF\n");
      else printf("%d\n",d[i]);
    }
  }
  return 0;
}