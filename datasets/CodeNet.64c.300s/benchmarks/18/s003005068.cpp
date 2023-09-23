#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define REPS(i, a, n) for (int i = (a); i < (int)(n); ++i)
#define RREP(i, n) for (int i = 1; i <= (int)(n); ++i)
#define pb emplace_back
#define mp make_pair
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()

typedef pair<int, int> P;

inline bool inside(int y,int x,int H,int W){return(y>=0&&x>=0&&y<H&&x<W);}
inline int in() {int x; std::cin >> x; return x;}

const int MOD = 1e9 + 7;
const int INF = 1e9 + 9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int d[50];

signed main()
{
  int n;
  while (cin >> n, n){
    memset(d, 0, sizeof(d));
    d[0] = 1;
    for (int i = 0; i < n; i++){
      for (int j = 1; j <= 3; j++){
        d[i + j] += d[i];
      }
    }

    cout << ((d[n] - 1) / 10 + 1) / 365 + 1 << endl;
  }
}