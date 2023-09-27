#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
  int dx[] = {-1, 0, 1, 0};
  int dy[] = {0, 1, 0, -1};
  while(cin >> N, N){
    int x[200], y[200];
    int minX, minY, maxX, maxY;
    x[0] = 0, y[0] = 0;
    minX = minY = maxX = maxY = 0;
    for(int i = 1; i < N; i++){
      int n, d;
      cin >> n >> d;
      x[i] = x[n] + dx[d], y[i] = y[n] + dy[d];
      minX = min(minX, x[i]);
      minY = min(minY, y[i]);
      maxX = max(maxX, x[i]);
      maxY = max(maxY, y[i]);
    }
    cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
  }
  return 0;
}