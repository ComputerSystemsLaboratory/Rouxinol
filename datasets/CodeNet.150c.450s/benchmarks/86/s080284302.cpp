#include <iostream>
using namespace std;

int main(){
  int N, M, P, t, s, x;
  while (cin >> N >> M >> P, N||M||P){
    t = 0;
    s = 0;
    for (int i = 0; i < N; ++i){
      cin >> t;
      s += t;
      if (i == M-1) x = t;
    }
    if (x) cout << s*(100-P)/x << endl;
    else cout << 0 << endl;
  }
  return 0;
}