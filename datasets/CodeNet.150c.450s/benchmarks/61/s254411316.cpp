#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;
    if(n == 0) break;
    int fl = 0;
    for(int i = 0; i < n; i++) {
      int y;
      cin >> y;
      if(fl > 10000) continue;
      if(i > 0) {
        fl++;
        x = (a * x + b) % c;
      }
      while(y != x) {
        fl++;
        x = (a * x + b) % c;
        if(fl > 10000) {
          y = x;
        }
      }
      // can't use the same one
    }
    cout << (fl > 10000 ? -1 : fl) << endl;
  }
  return 0;
}

