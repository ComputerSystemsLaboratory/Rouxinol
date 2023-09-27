#include <iostream>
#include <queue>

using namespace std;

const int N = 100;
int n;
int M[N][N], color[N], d[N];

int main(){
  queue<int> q;
  cin >> n;
  int u, k, v;
  for(int i=0;i<n;i++){
    cin >> u >> k;
    for(int j=0;j<k;j++){
      cin >> v;
      M[u-1][v-1] = 1;
    }
  }
  for(int i=0;i<n;i++) d[i] = -1;
  d[0] = 0;
  color[0] = 1;
  q.push(0);
  int x;
  while(q.empty() == false){
    x = q.front();
    q.pop();
    for(int i=0;i<n;i++){
      if(M[x][i] == 0) continue;
      if(color[i] == 0){
        color[i] = 1;
        d[i] = d[x] + 1;
        q.push(i);
      }
    }
  }
  for(int i=0;i<n;i++){
    cout << i+1 << " " << d[i] << endl;
  }
  return 0;
}

