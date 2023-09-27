#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<time.h>
#include<set>
#include<map>
#include<utility>
#include<queue>
#include<limits>

using namespace std;


class Edge{
public:
  int from;
  int to;
  int flow;
  Edge(int f,int t,int d){
    from = f;
    to   = t;
    flow = d;
  }
};

class Shortest_path_result{
public:
  int sum_of_cost;
  vector<int> path;
  vector<int> distance;
  vector<int> predecessor;
  Shortest_path_result(){
  }
};


class Graph{
public:
  int INF; 
  int n;
  vector<set<int> > vertices_list;
  vector<map<int,int > > cost_list;
  vector<map<int,int > > capacity_list;
  vector<int> potential_list;

  Graph(){
  }
  Graph(int n){//nは頂点数
    INF = 1e9; 
    this->n=n;
    //各種リストを集合
    //n個の空集合を挿入
    vertices_list.insert(vertices_list.begin(),n,set<int>());
    cost_list.insert(cost_list.begin(),n,map<int,int>());
    capacity_list.insert(capacity_list.begin(),n,map<int,int>());
    potential_list = vector<int>(n,0);
  }
  
  //b->eの辺を挿入 頂点番号は0オリジン
  void insert_edge(int b,int e,int cost,int capacity){
    vertices_list[b].insert(e);
    cost_list[b][e] = cost;
    capacity_list[b][e] = capacity;
  }
  void delete_edge(int b,int e){
    //b-eな辺を削除
    vertices_list[b].erase(e);
    cost_list[b].erase(e);
    capacity_list[b].erase(e);
  }

  //頂点番号aの次数を返す
  int degree_of_vertex(int a){
    return vertices_list[a].size();
  }

  //a-bな辺があるか調査
  bool edge_search(int a,int b){
    return vertices_list[a].find(b)!=vertices_list[a].end();
  }

  //頂点aとbに対してa-bとなる道が存在するかどうか調査
  bool path_search(int a,int b,set<int> visited=set<int>()){
    visited.insert(a);
    set<int>::iterator itr;
    for(itr=vertices_list[a].begin();itr!=vertices_list[a].end();itr++){
      if((*itr)==b){
        return true;
      }
      if(visited.find(*itr)==visited.end()){ //行ったこと無いなら
        if(path_search(*itr,b,visited)){//再帰 
          return true;
        }
      }
    }
    return false;
  }
  //start から goalまでの最短経路を探索:
  Shortest_path_result solve_dijkstra(int start,int goal){
    set<int> visited = set<int>();
    vector<int> distance = vector<int>(n,INF);
    vector<int> predecessor = vector<int>(n);
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
    pq.push(pair<int,int>(0,start)); //<始点からの距離,頂点>
    while(!pq.empty()){
      pair<int,int> p = pq.top();
      pq.pop();
      int nv = p.second;//今の場所
      // いい道じゃなかったら
      if(distance[nv] < p.first){
        continue;
      }
      distance[nv] = p.first;
      // いい道が見つかったら
      for(set<int>::iterator itr = vertices_list[nv].begin();itr!=vertices_list[nv].end();itr++){
        int next = (*itr); 
        if(distance[next] > distance[nv] + cost_list[nv][next]){
          distance[next] = distance[nv] + cost_list[nv][next];
          predecessor[next] = nv;
          pq.push(pair<int,int>(distance[next],next));
        }
      }
    }
    //答えを整形
    Shortest_path_result result;
    if(distance[goal]==INF){
    }else{
      result.path = vector<int>();
      result.path.push_back(goal);
      //到達不可能だったら
      //if(distance[goal] == INF){
      //  return pair<int,vector<int> >(INF,vector<int>(1,start));
      //}
      //start == goalの場合
      if(start != goal){
        while(true){
          int now = result.path.back();
          int pre = predecessor[now];
          result.path.push_back(pre);
          if(pre == start){
            reverse(result.path.begin(),result.path.end());
            break;
          }
        }
      }
    }
    result.path = vector<int>();
    result.sum_of_cost = distance[goal];
    result.distance = distance;
    result.predecessor = predecessor;
    return result;
  }
  //mincostflow
  //sからtへflow_size流すときの最小費用流を出す
  pair<int,vector<Edge> > solve_mincostflow(int s,int t, int flow_size){
    vector<map<int,int> > flow_list = vector<map<int,int> >(n);
    vector<map<int,int> > origin_cost = cost_list;  
    bool feasible_flag  = true; 
    int sum_flow_cost=0;
    while(flow_size>0){
      Shortest_path_result res;
      vector<int> path;
      int min_capa = INF;
      res = solve_dijkstra(s,t); 
      cout << res.sum_of_cost << endl;
      if(res.sum_of_cost == INF){
        feasible_flag = false;
        break;
      }
      path = res.path;
      //ポテンシャルの更新
      for(int i = 0;i<n;i++){
        potential_list[i] = potential_list[i] - res.distance[i];
      }
      //流せる流量とコストを計算
      vector<int>::iterator itr=path.begin(); itr++;
      for(;itr!=path.end();itr++){
        if( min_capa > capacity_list[*(itr-1)][*itr] ){
          min_capa = capacity_list[*(itr-1)][*itr];
        }
      }
      if(min_capa>flow_size){
        min_capa = flow_size;
      }
      itr=path.begin(); itr++;
      for(;itr!=path.end();itr++){
        if(flow_list[*(itr-1)].find(*itr) == flow_list[*(itr-1)].end()){//keyがないとき　
          flow_list[*(itr-1)][*itr] = min_capa;
        }
        else{
          flow_list[*(itr-1)][*itr] += min_capa;
        }
      }
      //flow_sizeを減少
      flow_size = flow_size -min_capa;
      //辺の張替え
      itr=path.begin();
      for(itr++;itr!=path.end();itr++){
        int capa,cost;
        int from,to;
        from = *(itr-1);to = *itr;
        capa = capacity_list[from][to];
        cost = cost_list[from][to];
        delete_edge(from,to);
        if(capa-min_capa > 0){
          insert_edge(from,to,cost,capa-min_capa); //capaを減らした辺を追加　
        }
        insert_edge(to,from,-1*cost,min_capa);//反対向きに移動した容量分の辺を追加
      }

      //辺のコストを更新
      for(int b=0;b>n;b++){
        map<int,int>::iterator itr;
        for(itr = cost_list[b].begin();itr!=cost_list[b].end();itr++){
          (*itr).second = (*itr).second - potential_list[itr->first] + potential_list[b];
        }
      }
    }

    //最終的なコストの計算
    for(int i=0;i<n;i++){
      map<int,int>::iterator itr;
      for(itr=flow_list[i].begin();itr!=flow_list[i].end();itr++){
        sum_flow_cost += origin_cost[i][itr->first] * itr->second;
        //cout << i << ","<< itr->first << "(" << itr->second << ")" << endl; 
      }
    }
    if(!feasible_flag){
      cout << "-1" << endl;
    }else{
      cout << sum_flow_cost << endl;
    }

    return pair<int,vector<Edge> >();
  }




  //出力
  void print(void){
    int i=0;
    vector<set<int> >::iterator itr; 
    set<int>::iterator itr_c;
    for(itr=vertices_list.begin();itr!=vertices_list.end();itr++){
      cout << i << ":";
      for(itr_c=(*itr).begin();itr_c!=(*itr).end();itr_c++){
        cout << *itr_c << "(" <<capacity_list[i][*itr_c] <<")" << ",";
      }
      i++;
      cout << endl;
    }
  }
};

int main(){
  const int inf = 1e9;
  int v,e,flow; // m 財の数,  n 買い手の数
  Graph g;
  Shortest_path_result res;

  int r;
// 入力
  cin >> v >> e >> r;
  g = Graph(v); 
  
  int from,to,cost,cap;
  for(int i=0;i<e;i++){
    cin >> from >> to >>cost ;
    g.insert_edge(from,to,cost,0);
  }
  res = g.solve_dijkstra(r,v-1);

  for(int i=0;i<v;i++){
    if(res.distance[i] == inf){
      cout << "INF" << endl;
    }else{
      cout << res.distance[i] << endl;
    }
  }



  return 0;
}


