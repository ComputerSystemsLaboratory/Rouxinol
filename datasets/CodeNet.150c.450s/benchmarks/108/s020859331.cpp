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
int seen[101];

int main(){

  long ii,jj,kk;
  vector<int> a;

  memset(g,0,sizeof(g));
  int n;
  cin >> n;
  int v,vn,r;
  for(ii=0;ii<n;ii++){
    cin >> v;
    cin >> vn;
    for(jj=0;jj<vn;jj++){
      cin >> r;
      g[v][r] = 1;
    }
  }
  vector<int> todo;
  memset(seen,0,sizeof(seen));
  for(ii=0;ii<101;ii++){
    dist[ii] = -1;
  }

  dist[1] = 0;
  seen[1] = 1;
  todo.push_back(1);
  //int v;
  while(!todo.empty()){

    v = todo[0];
    todo.erase(todo.begin());
    
    //cout << "v:" << v <<endl;
    for(ii=1;ii<=n;ii++){
      if(g[v][ii] == 1 && seen[ii] == 0){
        dist[ii] = dist[v] + 1;
        seen[ii] = 1;
        todo.push_back(ii);
      }
    }
    
  }

  for(ii=1;ii<=n;ii++){
    cout << ii << " " << dist[ii] << endl;
  }
  
//  for(ii=1;ii<=n;ii++){
//    for(jj=1;jj<=n;jj++){
//      cout << g[ii][jj] ;
//      if(jj!=n){
//        cout << " ";
//      }
//    }
//    cout << endl;
//  }
  
  return 0;
}

