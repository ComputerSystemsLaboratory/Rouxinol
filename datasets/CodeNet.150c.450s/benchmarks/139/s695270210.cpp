#include <bits/stdc++.h>
using namespace std;
//NOT TO SUBMIT IN WRONG PLACE OR BY WRONG COMPILER
//ABC 177, task a, 2020/08/30
//ms,
/*
*/

int main(void){
  int N, M;
  vector<vector<int>> hole(100000);
  vector<int> ans(100000, 0);
  vector<int> depth(100000, -1);
  queue<int> found;

  cin >>N >>M;
  for(int i=0;i<M;i++){
    int a, b;
    cin >>a >>b;
    a--; b--;
    hole[a].push_back(b);
    hole[b].push_back(a);
  }

  //BFS
  depth[0]=0;
  found.push(0);
  while(found.size() != 0){
    int v = found.front();
    found.pop();
    for(size_t i=0;i<hole[v].size();i++){
      int u = hole[v][i];
      if(depth[u] != -1) continue;
      depth[u] = depth[v] + 1;
      ans[u] = v;
      found.push(u);
    }
  }

  cout <<"Yes"<<endl;
  for(int i=1;i<N;i++){
    int output = ans[i]+1;
    cout <<output <<endl;
  }
  return 0;
}
/*
重みなしの連結無効グラフを考える。最短炉木を見つければよい。
BFSで行けると思う。→正解！
始点は1の点。0-indexでコードするので0の点だな。
*/
