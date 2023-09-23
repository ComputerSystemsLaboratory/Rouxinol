#include <iostream>
using namespace std;
int main(){
  int N;
  while (cin >> N, N) {
    int X[N], Y[N], x, y, M, l, G[N], D[2], t = N;
    for (int i = 0; i < N; ++i) {
      cin >> x >> y;
      X[i] = x;
      Y[i] = y;
      G[i] = 1;
    }
    cin >> M;
    string d;
    x = 10;
    y = 10;
    for (int i = 0; i < M; ++i) {
      cin >> d >> l;
      if (d == "N") {
	D[0] = 0;
	D[1] = 1;
      } else if (d == "S") {
	D[0] = 0;
	D[1] = -1;
      } else if (d == "E") {
	D[0] = 1;
	D[1] = 0;
      } else {
	D[0] = -1;
	D[1] = 0;
      }
      for (int j = 0; j < N; ++j) {
	if (G[j] && ((x <= X[j] && X[j] <= x + D[0]*l) || (x >= X[j] && X[j] >= x + D[0]*l)) && ((y <= Y[j] && Y[j] <= y + D[1]*l) || (y >= Y[j] && Y[j] >= y + D[1]*l))) {
	  --t;
	  G[j] = 0;
	}
      }
      x += D[0]*l;
      y += D[1]*l;
    }
    if (t) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
}