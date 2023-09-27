#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

#define MAX_V 100001
#define INF (1e9 + 1)



int V,E,r,a,b,c;
vector<int> Gto[MAX_V];
vector<int> Gcost[MAX_V];

int d[MAX_V];
void dijkstra(){
  int i;
  for(i=0;i<MAX_V;i++)d[i]=INF;
  d[r]=0;
  priority_queue< pair<int,int> > Q;
  Q.push( make_pair(0,r) );
  while(!Q.empty()){
    pair<int,int> p=Q.top();
    Q.pop();
    int pos=p.second,cost=-p.first;
    if( cost > d[pos] )continue;
    for(i=0;i<Gto[pos].size();i++){
      int to=Gto[pos][i];
      int newcost=cost+Gcost[pos][i];
      if( newcost < d[to]){
        d[to]=newcost;
        Q.push( make_pair(-d[to],to) );
      }
    }
  }

  for(i=0;i<V;i++){
    if(d[i]==INF)printf("INF\n");
    else printf("%d\n",d[i]);
  }
}

int main(){
  int i;
  scanf("%d %d %d",&V,&E,&r);
  for(i=0;i<E;i++){
    scanf("%d %d %d",&a,&b,&c);
    Gto[a].push_back(b);
    Gcost[a].push_back(c);
  }
  dijkstra();
  return 0;
}