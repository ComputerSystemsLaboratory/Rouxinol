#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
  int n, m;
  while(cin >> n >> m, (n|m)) {
    int t[n];
    int ts = 0;
    int h[m];
    int hs = 0;

    rep(i, n) {
      cin >> t[i];
      ts += t[i];
    }
    rep(i, m) {
      cin >> h[i];
      hs += h[i];
    }

    int min = 1 << 29;
    int ta = 0;
    int ha = 0;
    rep(i, n) {
      rep(j, m) {
        if( ts - t[i] + h[j] == hs - h[j] + t[i] ) {
          if( min > t[i] + h[j] ) {
            min = t[i] + h[j];
            ta = t[i];
            ha = h[j];
          }
        }
      }
    }

    if( min == 1 << 29 ) {
      cout << "-1" << endl;
    } else {
      cout << ta << " " << ha << endl;
    }
  }

  return 0;
}