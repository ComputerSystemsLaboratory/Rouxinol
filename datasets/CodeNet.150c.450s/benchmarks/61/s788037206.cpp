#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, A, B, C, X;

  while(1) {
    cin >> N >> A >> B >> C >> X;
    if(N == 0) break;

    vector<int> Y;
    for(int i = 0; i < N; i++) {
      int y;
      cin >> y;
      Y.push_back(y);
    }

    int x = X;
    int cnt = 0;

    for(int i = 0; i < N; i++) {
      for(; cnt <= 10000; cnt++) {
        if(x == Y[i]) {
          if(i < (N-1) && Y[i] == Y[i+1]) {
            cnt++;
            x = ((A * x + B) % C);
          }
          break;
        }
        x = (A * x + B) % C;
      }   
    }
    if(cnt <= 10000)
      cout << cnt << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}

