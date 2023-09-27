#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int hint[n];
  vector<int> arc[n];

  for(int i=0;i<n;i++)hint[i]=-1;

  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    arc[a].push_back(b);
    arc[b].push_back(a);
  }

  queue<int> room;
  room.push(0);
  while(!room.empty()){
    int r = room.front();room.pop();
    for(int i=0;i<arc[r].size();i++){
      int to = arc[r][i];
      if(hint[to]==-1){
        hint[to]=r;
        room.push(to);
      }
    }
  }

  cout << "Yes" << endl;
  for(int i=1;i<n;i++){
    cout << hint[i]+1 << endl;
  }
}
