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

using Graph = vector<vector<int>>;

int g[101][101];
int seen[101];
int stamp[2][101];
int n;
int t;

void dfs(int v){
  seen[v] = 1;
  int ii;

  //cout << v << endl;
  
  stamp[0][v] = t;
  t++;

  //for(ii=1;ii<=n;ii++){
  //  cout << seen[ii] << endl;
  //}
  
  for(ii=1;ii<=n;ii++){
    //cout << "v:"<< v << "ii:" << ii << " " << g[v][ii] << endl;

    if(seen[ii] == 1){continue;}
    //cout << "v:"<< v << "ii:" << ii << " " << g[v][ii] << endl;

    if(g[v][ii] == 1){
      dfs(ii);
    }
  }
  
  stamp[1][v] = t;
  t++;
}

int main(){
  long ii,jj,kk;
  vector<int> a;


  memset(g,0,sizeof(g));

  memset(stamp,0,sizeof(stamp));
  
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

  //for(ii=1;ii<=n;ii++){
  //  for(jj=1;jj<=n;jj++){
  //    cout << g[ii][jj] ;
  //    if(jj!=n){
  //      cout << " ";
  //    }
  //  }
  //  cout << endl;
  //}  
  
  t = 1;
  memset(seen,0,sizeof(seen));

  for(ii=1;ii<=n;ii++){
    if(seen[ii] == 0){
      dfs(ii);
    }

  }


  for(ii=1;ii<=n;ii++){
    cout << ii << " " << stamp[0][ii] << " " << stamp[1][ii] << endl;
  }
  return 0;
}

