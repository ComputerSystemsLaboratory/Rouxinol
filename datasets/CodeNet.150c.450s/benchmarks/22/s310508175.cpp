#include <algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<string>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

#define INF 10000*1000*10
#define INF2 10000*1000
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;

struct Edge{
  long from;
  long to;
  long cost;
};

void dfs(const Graph &g,int v){
  seen[v]= true;
  //cout << v << endl;
  for(auto next_v : g[v]){
    if(seen[next_v]) continue;
    dfs(g,next_v);
  }
}

int main(){
  long ii,jj,kk;
  vector<int> ret;
  long v,e,s;


  cin >> v >> e >> s;
  Graph g(v);
  vector<Edge> edges;
  //edges.resize(e);

  for(ii=0;ii<e;ii++){

    Edge edg ;
    cin >> edg.from >> edg.to >> edg.cost;
    g[edg.from].push_back(edg.to);
    edges.push_back(edg);
  }

  seen.assign(v,false);
  dfs(g,s);
  for(ii=0;ii<v;ii++){
    //cout << seen[ii] << endl;
  }
  vector<long> costs;
  costs.resize(v);
  for(ii=0;ii<v;ii++){
    costs[ii] = INF;
  }

  costs[s] = 0;
  //fill(costs,costs+v,INF);
  //for(ii=0;ii<edges.size();ii++){
  //  Edge edg = edges[ii];
  //  //cout << "from:"  << edg.from << "to:" << edg.to << "cost:" << edg.cost << endl;
  //}

  bool loopFlg = false;
  for(ii=0;ii<v;ii++){
    for(jj=0;jj<e;jj++){
      Edge edg = edges[jj];

      if(costs[edg.to] > costs[edg.from] + edg.cost){
        costs[edg.to] = costs[edg.from] + edg.cost;
        //cout << "ii" << ii << "jj" << jj << endl;
        if(ii == v-1 && seen[edg.to] == true){
          //cout << "negative loop" << endl;
          loopFlg = true;
        }
      }
    }
  }
  bool notReachFlg = false;
  long notCnt = 0;

  for(ii=0;ii<v;ii++){
    if(costs[ii] > INF2){
      notCnt++;
    }
  }
  

  if(notCnt != (v-1) && loopFlg){
    cout << "NEGATIVE CYCLE" << endl;
  }
  else{
    
    for(ii=0;ii<v;ii++){
      if(costs[ii] > INF2){
        cout << "INF" << endl;
      }
      else{
        cout << costs[ii] << endl;
      }
    }
    
  }
}

