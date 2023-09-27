#include <bits/stdc++.h>

using namespace std;

#define loop(n) for(int lp=0; lp<(n); lp++)
#define ascent(i, a, b)  for(int (i)=(a); (i)<(b); (i)++)
#define descent(i, a, b) for(int (i)=(a); (i)<(b); (i)--)

pair<int, int> sq[210];

int main() {
  int N;
  while(cin >> N, N) {
    ascent(i, 0, 210) {
      sq[i] = make_pair(0, 0);
    }
    
    ascent(i, 1, N) {
      int n, d;
      cin >> n >> d;

      if(d == 0) {
	sq[i] = make_pair(sq[n].first - 1, sq[n].second);
      }
      else if(d == 1) {
	sq[i] = make_pair(sq[n].first, sq[n].second + 1);
      }
      else if(d == 2) {
	sq[i] = make_pair(sq[n].first + 1, sq[n].second);
      }
      else if(d == 3) {
	sq[i] = make_pair(sq[n].first, sq[n].second - 1);
      }
    }

    int x[2] = {0, 0};
    int y[2] = {0, 0};
    ascent(i, 0, N) {
      //      cout << " " << sq[i].first << "," << sq[i].second << endl;
      x[0] = min(x[0], sq[i].first);
      x[1] = max(x[1], sq[i].first);
      y[0] = min(y[0], sq[i].second);
      y[1] = max(y[1], sq[i].second);
    }

    cout << x[1]-x[0]+1 << " " << y[1]-y[0]+1 << endl;
  }

  return 0;
}