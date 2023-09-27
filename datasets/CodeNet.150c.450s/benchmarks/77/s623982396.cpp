#include <iostream>
#include <algorithm>
using namespace std;

const int MAXR = 22;
int N, M;
int G[MAXR][MAXR];

int main() {
  while(cin >> N && N) {
    fill(G[0], G[MAXR], 0);
    for(int i = 0; i < N; ++i) {
      int x, y;
      cin >> x >> y;
      G[y][x] += 1;
    }
    cin >> M;
    int num = 0;
    int x, y;
    x = y = 10;
    for(int t = 0; t < M; ++t) {
      char d;
      int l;
      cin >> d >> l;
      int vx, vy;
      if(d == 'N') vx =  0, vy =  1;
      if(d == 'E') vx =  1, vy =  0;
      if(d == 'S') vx =  0, vy = -1;
      if(d == 'W') vx = -1, vy =  0;
      num += G[y][x];
      G[y][x] = 0;
      for(int j = 0; j < l; ++j) {
        x += vx;
        y += vy;
        num += G[y][x];
        G[y][x] = 0;
      }
    }
    if(num == N) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}