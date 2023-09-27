#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

using namespace std;
const int INF = 0x7fffffff;

int gcd(int x,int y){
  int mi,ma;
  ma = max(x,y);
  mi = min(x,y);
  if(ma % mi == 0){
    return mi;
  }
  else{
    return gcd(mi,ma % mi);
  }
}


struct Edge{
  int to;
  int weight;

  Edge(int t,int w){
    to = t;
    weight = w;
  }
};

using Graph = vector<vector<Edge>>;

int main(){
  long ii,jj,kk;
  vector<int> a;
  int v,e;
  cin >> v >> e ;

  //cout << v << " "  << e << endl;
  
  Graph g;
  g.resize(v);
  int s,t,d;

  for(ii=0;ii<e;ii++){
    cin >> s >> t >> d;
    g[s].push_back(Edge(t,d));
  }

  // s位置を0〜vにして、aと同じ処理
  vector<bool> seen;
  vector<int> todo;
  int dists[100][100];
  int negcnt[100][100];
  for(ii=0;ii<100;ii++){
    for(jj=0;jj<100;jj++){
      dists[ii][jj] = INF;
    }
  }

  int dist;
  int todo_pos;

  //printf("%d\n",g[0][0].weight);
  bool neg = false;
  memset(negcnt,0,sizeof(negcnt));
  for(ii=0;ii<v;ii++){
    //各頂点毎に各頂点までの最短距離を取得

    //iiがスタート
    seen.assign(v,false);
    seen[ii] = true;
    todo.push_back(ii);
    dists[ii][ii] = 0;

    while(todo.empty() != true){

      
      todo_pos = todo[0];
      dist = dists[ii][todo_pos];
      
      todo.erase(todo.begin());

      for(Edge edge : g[todo_pos]){

        if(dist + edge.weight < dists[ii][edge.to]){
          dists[ii][edge.to] = dist + edge.weight;

          negcnt[ii][edge.to]++;
          if(negcnt[ii][edge.to] > e+2){
            neg = true;
            goto negbreak;
          }
          seen[edge.to] = false;
        }

        if(seen[edge.to] == false){
          todo.push_back(edge.to);
        }

        seen[edge.to] =true;
        
      }      
    }

  }

 negbreak:
  //for(ii=0;ii<v;ii++){
  //  if(dists[ii][ii] < 0){
  //    neg = true;
  //  }
  //}
  if(neg){
    cout << "NEGATIVE CYCLE" << endl;
  }
  
  else{
    for(ii=0;ii<v;ii++){
      for(jj=0;jj<v;jj++){
        //cout << jj << " ";
        if(dists[ii][jj] != INF){
          cout << dists[ii][jj];
        }
        else{
          cout << "INF";
        }
      
        if(jj != v-1){
          cout << " ";
        }
        else{
          cout << endl;
        }
      
      }
    }
  }
  return 0;
}

