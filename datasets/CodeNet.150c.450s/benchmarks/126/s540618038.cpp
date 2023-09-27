#include<iostream>
using namespace std;

bool road[16][16];
int memo[16][16], h, w;

int solve(int x, int y) {
  if( y < 0 || y >= h || x < 0 || x >= w || road[y][x] ) return 0;
  if( memo[y][x] ) return memo[y][x];
  if( x == w-1 && y == h-1 ) return 1;
  return memo[y][x] = solve(x+1, y) + solve(x, y+1);
}

int main() {
  int a, b, c;
  while( cin >> w >> h, w ) {
    fill_n(road[0], 16*16, 0);
    fill_n(memo[0], 16*16, 0);
    cin >> c;
    while( c-- ) {
      cin >> a >> b;
      a--; b--;
      road[b][a] = true;
    }

    cout << solve(0, 0) << endl;
  }
}