#include <iostream>

using namespace std;

int main() {
  int out[10005] = {};
  for (int x=1; x < 100; x++) {
    for (int y=1; y < 100; y++) {
      for (int z=1; z < 100; z++) {
        int idx = (x*x) + (y*y) + (z*z) + (x*y) + (y*z) + (z*x);
        if (10004 >= idx) {
          out[idx]++;
          /*
          if (out[idx]!=0) continue;
          if (x==y && y==z) out[idx] = 1;
          else if(x==y || y==z || z==x) out[idx] = 3;
          else out[idx] = 6;
          */
        }
      }
    }
  }
  int N; cin >> N;
  for (int i=1; i <= N; i++) cout << out[i] << endl;

  return 0;
}
