#include <iostream>

using namespace std;

static int cnt = 0;
int main() {
  int x, y, s;
  while(cin >> x >> y >> s, x || y || s) {
    int res = 0;
    for(int a = 1; a < s; a++) {
      for(int b = 1; b < s; b++) {
        if(((int)(a*(100.0+x)/100.0) + (int)(b*(100.0+x)/100.0)) == s) {
          res = max(((int)(a*(100.0+y)/100.0)+(int)(b*(100.0+y)/100.0)), res);
        }
      }
    }
    cout << res << endl;
  }

  return 0;
}