#include <iostream>
#include <algorithm>

using namespace std;
int dp[17][17];
bool stop[17][17];

int solve(int y, int x){

  if (dp[y][x] != 0)
    return dp[y][x];
  if (y == 0 || x == 0)
    return 0;
  if (x == 1 && y == 1)
    return 1;
  if (stop[y][x]){
    return 0;
  }

  dp[y][x] = (solve(y - 1, x) + solve(y, x - 1));
  return dp[y][x];
}

int main() {
  while (true) {
    int x,y,n;
    cin >> x >> y;
    if(x == 0 && y == 0)
      return 0;

    cin >> n;

    fill( dp[0], dp[17], 0);
    fill( stop[0], stop[17], false );

    for (int i = 0; i < n; i++){
      int sx,sy;
      cin >> sx >> sy;
      stop[sy][sx] = true;
    }

   cout << solve(y,x) << endl;
 }
 return 0;
}