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

int g[101][101];
int dist[101];
int seen[100001];

using Graph = vector<vector<int>>;

void dfs(const Graph &g,int v,int col){
  seen[v] = col;

  for(auto next_v : g[v]){
    if(seen[next_v]) continue;
    dfs(g,next_v,col);
  }

}



int main(){
  int ii,jj,mm;
  int n,m;
  cin >> n >> m;
  Graph g(n);
  int id,fr;
  memset(seen,0,sizeof(seen));

  for(ii=0;ii<m;ii++){

    cin >> id >> fr;
    g[id].push_back(fr);
    g[fr].push_back(id);
  }
  int col = 0;
  for(ii=0;ii<n;ii++){
    col++;
    if(seen[ii] == 0){
      dfs(g,ii,col);
    }
  }
      
  int q,from,to;

  cin >> q;

  for(ii=0;ii<q;ii++){
    cin >> from >> to;

    if(seen[from] == seen[to]){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }

  
  return 0;
}

