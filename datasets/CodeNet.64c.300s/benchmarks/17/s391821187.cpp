#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int x, y, s;

  while(cin >> x >> y >> s, x+y+s) {
    int maxt = -1;
    for(int i = 1; i < s-1; i++) {
      for(int j = 1; j < s-1; j++) {
        int xt = i*(x+100) / 100;
        xt += j*(x+100) / 100;
        if(xt > s) break;
        else if(xt == s) {
          int yt = i*(y+100) / 100;
          yt += j*(y+100) / 100;
          maxt = max(yt, maxt);
        }
      }
    }
    cout << maxt << endl;
  }
}