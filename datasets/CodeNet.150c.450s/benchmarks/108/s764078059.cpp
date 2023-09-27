#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<bool> > a(n+1, vector<bool>(n+1, false));
  for(int i = 1; i <= n; i++){
    int u;
    cin >> u;
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int v;
      cin >> v;
      a[i][v] = true;
    }
  }
  // ??????1??????????????¢???????????????
  // ?????????????????¨??????0??\???, ???????????????????????°-1
  vector<int> d(n+1, -1);
  d[1] = 0;

  queue<int> q;
  q.push(1);

  while(!q.empty()){
    int current = q.front();
    q.pop();
    for(int dst = 1; dst <= n; dst++){
      if(d[dst] < 0 && a[current][dst]){
        d[dst] = d[current] + 1;
        q.push(dst);
      }
    }
  }

  for(int i = 1; i <= n; i++){
    cout << i << " " << d[i] << endl;
  }
  return 0;
}