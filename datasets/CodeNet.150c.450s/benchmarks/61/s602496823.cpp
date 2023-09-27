#include <iostream>
using namespace std;

int main(){
  int N, A, B, C, X, y, ans;
  bool f, g;
  while (cin >> N >> A >> B >> C >> X, N) {
    ans = -1;
    int Y[N];
    g = true;
    for (int i = 0; i < N; ++i) cin >> Y[i];
    for (int i = 0; i < N; ++i) {
      y = Y[i];
      f = true;
      for (int j = ans+1; j < 10001; ++j) {
	if (X == y) {
	  f = false;
	  ans = j;
	  X = (A*X + B)%C;
	  break;
	} else {
	  X = (A*X + B)%C;
	}
      }
      if (f) {
	cout << -1 << endl;
	g = false;
	break;
      }
    }
    if (g) cout << ans << endl;
  }
  return 0;
}