#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)

typedef pair<int, int> Pi;
#define fi first
#define se second

int mx[] = {1, 0, -1, 0};
int my[] = {0, 1, 0, -1};

signed main()
{
  int N;
  int X[205], Y[205];
  int n, d;
  int miny, maxy, minx, maxx;
  while(cin >> N, N) {
    miny = maxy = minx = maxx = X[0] = Y[0] = 0;
    for(int i = 1; i < N; i++) {
      cin >> n >> d;
      X[i] = X[n] + mx[d], Y[i] = Y[n] + my[d];
      miny = min(miny, Y[i]); minx = min(minx, X[i]);
      maxy = max(maxy, Y[i]); maxx = max(maxx, X[i]);
    }

    cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
  }
  return 0;
}