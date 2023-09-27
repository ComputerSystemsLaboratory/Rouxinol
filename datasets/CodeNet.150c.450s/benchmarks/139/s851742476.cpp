#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
const int INF = 0x7fffffff;
using lll = long long;
using ull = unsigned long long;
using namespace std;

using Graph = vector<vector<int>>;
int main(){
  lll ii,jj,kk;
  vector<int> ret;

  int n,m;
  cin >> n >> m;

  Graph g(n);

  int a,b;

  for(ii=0;ii<m;ii++){
    cin >> a >> b;
    g[a-1].push_back(b-1);
    g[b-1].push_back(a-1);
  }

  //cout << "regist!" << endl;
  vector<int> todo;
  vector<bool> seen(n);

  seen.assign(n,false);

  seen[0] = true;
  todo.push_back(0);
  int v;
  //cout << "todo:" << todo[0] << endl;
  vector<int> prev(n);
  while(!todo.empty()){

    v = todo[0];
    todo.erase(todo.begin());
    //cout << "todo:" << v << endl;
    
    for(int w : g[v]){
      if(seen[w] == true){continue;}
      seen[w] = true;
      todo.push_back(w);
      prev[w] = v;
    }
  }
  bool okflg = true;

  for(ii=0;ii<n;ii++){
    if(seen[ii] == false){
      okflg = false;
      break;
    }
  }
  if(okflg){
    cout << "Yes" << endl;
    for(ii=1;ii<n;ii++){
      cout << prev[ii] + 1 << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
  //cout << "n:" << n << endl;

  return 0;
}
