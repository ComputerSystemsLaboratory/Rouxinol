#include <iostream>
using namespace std;

int main() {
  int a, b;
  int route[20][20];
  while(cin >> a >> b, a+b) {
    for(int i = 0; i < 20; i++) {
      for(int j = 0; j < 20; j++) {
        route[i][j] = 0;
      }
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      route[y-1][x-1] = -1;
    }

    route[0][0] = 1;
    for(int i = 0; i < b; i++) {
      for(int j = 0; j < a; j++) {
        if(route[i][j] == -1) continue;
        if(i > 0 && route[i-1][j] != -1) route[i][j] += route[i-1][j];
        if(j > 0 && route[i][j-1] != -1) route[i][j] += route[i][j-1];
      }
    }
    cout << route[b-1][a-1] << endl;
 }
}