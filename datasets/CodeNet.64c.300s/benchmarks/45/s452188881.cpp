#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M, P;
  while(cin >> N >> M >> P, N || M || P){
    int x = 0, y;
    for(int i = 0; i < N; i++){
      int X;
      cin >> X;
      x += X;
      if(i+1 == M) y = X;
    }
    if(y == 0) cout << 0 << endl;
    else cout << x  * (100 - P) / y << endl;
  }
  return 0;
}