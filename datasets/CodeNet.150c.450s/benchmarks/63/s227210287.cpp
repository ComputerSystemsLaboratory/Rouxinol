#include<iostream>
#include<queue>
#include<vector>
#include<climits>

#define MAX 100000
#define INF INT_MAX
#define NO 0
#define WENT 1

using namespace std;

void Dijkstra(void);

int V, E, r;
vector< vector<pair<int,int> > >  v;
vector<int> cost, visited;


int main() {
  int s, t, d;

  cin >> V >> E >> r;
  v.resize(V);

  for(int i=0; i<E; i++) {
    cin >> s >>t >> d;
    v[s].push_back(make_pair(t,d)); //s番目〜t番目のコストはd                                                                                                                                               
  }

  //cout << 'a' << endl;                                                                                                                                                                                    
  Dijkstra();

  //cout << "b" << endl;                                                                                                                                                                                    

  for(int i=0; i<V; i++) {
    if(visited[i] == WENT) cout << cost[i] << endl;
    else cout << "INF" << endl;
  }

  return 0;
}

void Dijkstra(){
  int x, y, z;
  priority_queue< pair<int,int> , vector< pair<int,int> >, greater< pair<int, int> > > p;//greaterで小さい順に取り出せる                                                                                    

  cost.resize(V);
  visited.resize(V);

  for(int i=0;i<V;i++){
    cost[i]=INF;
    visited[i] = NO;
  }
  cost[r] = 0;   //startのコストを０に                                                                                                                                                                      

  p.push(make_pair(0,r));//startのrはコスト０                                                                                                                                                               

  while(!p.empty()) {
    x=p.top().second; //topの二番目の要素(pair<int,int>の後半の要素)                                                                                                                                        
    p.pop();

    visited[x] = WENT;

    for(int i=0; i<v[x].size(); i++) {
      y = v[x][i].first;
      z = v[x][i].second;//y：edge先のノード、z：x~yへのコスト                                                                                                                                              

      if(visited[y] == NO) //まだxがyになったことがなければ                                                                                                                                                 
        if(cost[y] > cost[x] + z) {//元々yに行くためのコストが、今来たコストよりでかければ                                                                                                                  
          cost[y] = cost[x] + z;
          p.push(make_pair(cost[y],y));
        }
    }
  }
}


