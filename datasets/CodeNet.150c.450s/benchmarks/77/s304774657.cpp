#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M;
  while(cin >> N, N){
    int plane[21][21] = {{0}};
    int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
    int X = 10, Y = 10, get = 0;
    for(int i = 0; i < N; i++){
      int x, y;
      cin >> x >> y;
      plane[x][y] = 1;
    }
    cin >> M;
    while(M--){
      char d; int l, D;
      cin >> d >> l;
      switch(d){
      case 'N': D = 0; break;
      case 'E': D = 1; break;
      case 'S': D = 2; break;
      case 'W': D = 3; break;
      }
      for(int i = 0; i < l; i++){
	X += dx[D], Y += dy[D];
	get += plane[X][Y]; 
	plane[X][Y] = 0;
      }
    }
    cout << (get == N ? "Yes":"No") << endl;
  }
  return 0;
}