#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int x, y, s;
    cin >> x >> y >> s;
    if(x == 0 && y == 0 && s == 0) break;
    int mx = 0;
    for(int t = 1; t < s; t++) {
      for(int u = 1; u < s; u++) {
        int uu = u * (100+x) / 100;
        int tt = t * (100+x) / 100;
        if(uu + tt == s) {
          int uuu = u * (100+y) / 100;
          int ttt = t * (100+y) / 100;
          if(mx < uuu+ttt) mx = uuu + ttt;
        }
      }
    }
    cout << mx << endl;
  }
  return 0;
}