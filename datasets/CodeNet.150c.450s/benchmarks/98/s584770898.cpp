#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int n, m;
    cin >> n >> m;
    if(n == 0) break;
    vector<int> ss, ts;
    int sss = 0;
    for(int i = 0; i < n; i++) {
      int c;
      cin >> c;
      ss.push_back(c);
      sss += c;
    }
    int ttt = 0;
    for(int i = 0; i < m; i++) {
      int c;
      cin >> c;
      ts.push_back(c);
      ttt += c;
    }
    int xs = -1;
    int xt = -1;
    for(int s : ss) {
      for(int t : ts) {
        if (sss - ttt == 2 * (s - t)) {
          if(xs < 0 || xs + xt > s + t) {
            xs = s;
            xt = t;
          }
        }
      }
    }
    if(xs < 0) {
      cout << "-1" << endl;
    } else {
      cout << xs << " " << xt << endl;
    }
  }
  return 0;
}