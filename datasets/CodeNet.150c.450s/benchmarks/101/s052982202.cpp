#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<queue>
#define P pair<int, int>

using namespace std;

int main(){
  int n, m, q, c[100009];
  vector<int> G[100009];
  queue<int> Q;
  memset(c, -1, sizeof(c));
  cin >> n >> m;
  for(int i=0;i<m;i++){
    int s, e;
    cin >> s >> e;
    G[s].push_back(e);
    G[e].push_back(s);
  }
  for(int i=0;i<n;i++){
    if(c[i]!=-1)continue;
    c[i] = i;
    Q.push(i);
    while(!Q.empty()){
      int node = Q.front();Q.pop();
      for(int j=0;j<G[node].size();j++){
        if(c[G[node][j]]==-1){
          c[G[node][j]] = i;
          Q.push(G[node][j]);
        }
      }
    }
  }
  cin >> q;
  for(int i=0;i<q;i++){
    int s, e;cin >> s >> e;
    cout << (c[s] == c[e]? "yes": "no") << endl;
  }
}
