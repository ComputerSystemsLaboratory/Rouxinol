#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, A, B, C, X;
  while(cin >> N >> A >> B >> C >> X, N || A || B || C || X){
    int Y[100];
    for(int i = 0; i < N; i++) cin >> Y[i];
    int frame = 0;
    for(int i = 0; i < N; i++){
      while(Y[i] != X){
	frame++;
	if(frame > 10000) break;
	X = (A * X + B) % C;
      };
      frame++;
      X = (A * X + B) % C;
      if(frame > 10001) break;
    }
    if(frame > 10001) cout << -1 << endl;
    else cout << frame-1 << endl;
  }
  return 0;
}