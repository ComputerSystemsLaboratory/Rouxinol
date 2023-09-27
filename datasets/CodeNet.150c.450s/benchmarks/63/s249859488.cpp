#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1000000000
using namespace std;


struct edge{int to, cost;};
vector<edge> A[100000];
int d[100000];
typedef pair<int,int> P;

int main(){
  int V,E,R;
  cin >> V >> E >> R;
  for(int i=0;i<E;i++){
    int s,t,d;
    cin >> s >> t >> d;
    edge a;
    a.to=t;
    a.cost=d;
    A[s].push_back(a);
  }
  priority_queue<P, vector<P>, greater<P>> que;
  fill(d,d+V,INF);
  d[R]=0;
  que.push(P(0,R));
  while(!que.empty()){
    P p=que.top();que.pop();
    int v=p.second;
    if(d[v] < p.first)continue;
    for(int i=0;i < A[v].size();i++){
      edge e = A[v][i];
      if(d[e.to] > d[v]+e.cost){
        d[e.to]=d[v]+e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
  for(int i=0;i<V;i++){
    if(d[i]==INF){
      cout << "INF" << endl;
    }else{
      cout << d[i] << endl;
    }
  }
}