#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <cstdio>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map> //pair is also included in this library
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

#define REP(i, s, n) for(int i = (int)(s); i < (int)(n); i++)
#define fst first
#define snd second
#define MP make_pair //incase c++11 or later is not available

using namespace std;

typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;

//prefer define statement
//for reason that const int ver. of INF will raise a silly warning (unused variable)
#define INF (INT_MAX/3)
#define LIM_INF (INT_MAX)
//const int INF = INT_MAX/3;

/*------------------------------------------------------------------------------*/

int turn(const vector<VI>& o, int t, int r, int c){
  int res = 0;
  VI ov(r, 0);
  for(int i = t, cnt = 0; i != 0 && cnt < r; i = i >> 1, cnt++){
    if(i & 0b1){
      ov[cnt] = 1;
    }
  }
  REP(i, 0, c){
    int z = 0;
    REP(j, 0, r){
      if((o[i][j] + ov[j]) % 2 == 0){
        z++;
      }
    }
    res += (z > (r / 2) ? z : r - z);
  }
  return res;
}

int main(){
  while(1){
    int r, c;
    scanf("%d %d%*c", &r, &c);
    if(r == 0 && c == 0){
      break;
    }

    vector<VI> osb(c, VI(r));
    REP(i, 0, r){
      REP(j, 0, c){
        scanf("%d ", &osb[j][i]);
      }
    }

    int ma = -1;
    REP(i, 0, pow(2,r)){
      ma = max(ma, turn(osb, i, r, c));
    }
    printf("%d\n", ma);
  }
  return 0;
}