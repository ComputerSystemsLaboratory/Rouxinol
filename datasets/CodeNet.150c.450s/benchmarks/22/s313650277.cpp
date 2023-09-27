#include<iostream>
using namespace std;
#define INF 1000000007
struct edge{
  int from,to,cost;
};
edge es[2020];
int d[1010];
int V,E,r;
bool find_negative_loop(){
  for(int i=0;i<V;i++){
    d[i]=INF;
  }
  d[r]=0;
  for(int i=0;i<V;i++){
    for(int j=0;j<E;j++){
      edge e=es[j];
      if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
        d[e.to]=d[e.from]+e.cost;
        if(i==V-1) return true;
      }
    }
  }
  return false;
}
int main(){
  cin>>V>>E>>r;
  for(int i=0;i<E;i++){
    cin>>es[i].from>>es[i].to>>es[i].cost;
  }
  if(find_negative_loop()){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }
  for(int i=0;i<V;i++){
    if(d[i]==INF) cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
}
