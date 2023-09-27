#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 30;
int dx[] = {
  1, 0, -1, 0
};
int dy[] = {
  0, 1, 0, -1
};
   
int x[300];
int y[300];

int main(){
  int n;
  while(cin >> n  && n){
    x[0] = y[0] = 0;
    int id, d;
    for(int i = 1; i < n;i++){
      cin >> id >> d;
      x[i] = x[id] + dx[d];
      y[i] = y[id] + dy[d];
    }
    int hx = -INF, lx = INF, hy = -INF, ly = INF;
    for(int i = 0; i < n; i++){
      hx = max(hx, x[i]);
      hy = max(hy, y[i]);
      lx = min(lx, x[i]);
      ly = min(ly, y[i]);
    }
    cout << hx - lx + 1 << " " << hy - ly + 1 << endl;
  }
  return 0;
}