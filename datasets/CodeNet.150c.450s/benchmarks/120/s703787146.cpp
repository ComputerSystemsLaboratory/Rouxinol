//enumerate
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<limits>
#include<utility>

#define c11
#ifdef c11
#include<unordered_set>
#include<unordered_map>
#endif

using namespace std;
typedef long long ll;
#define ull unsigned long long
#define PI acos(-1.0)
#define eps 1e-12
#define initz(x) memset(x,0,sizeof(x))
#define initm(x) memset(x,0x7f,sizeof(x))
#define forn(i, n) for(int i = 0; i < (int) n; ++i)
#define for1(i, n) for(int i = 1; i <= (int) n; ++i)
#define fore(i, l, r) for(int i = (int) l; i <= (int) r; ++i)
#define rforn(i, n) for(int i = (int) n - 1; i>= 0; ++i)
#define first fi
#define second se

int dx[4] = {1, 0 , -1, 0};
int dy[4] = {0, 1 , 0, -1};

const int INF = 0x7f7f7f7f;
const int MAX_N = 100;
const int MAX_M = 50005;

typedef pair<int, int> P;

bitset<10000> cookie[10];
int R = -1, C = -1;

void do_flip(int conf) {
  forn(j, R) {
    if((conf >> j) & 1) {
      cookie[j].flip();
    }
  }
}

int main() {
  while(1) {
    cin >> R >> C;
    if( R == 0 && C == 0) break;
    forn(i, R) {
      forn(j, C) {
        int up;
        cin >> up;
        cookie[i][j] = up;
      }
    }

    int total = 1 << R;
    int ret = 0;
    forn(i, total) {
      do_flip(i);
      int cur = 0;
      forn(j, C) {
        int cnt = 0;
        forn(k, R) {
          if(cookie[k][j]) {
            cnt++;
          }
        }
        cur += max(cnt, R-cnt);
      }
      do_flip(i);
      ret = max(ret, cur);
    }
    cout << ret << endl;
  }
	return 0;
}

