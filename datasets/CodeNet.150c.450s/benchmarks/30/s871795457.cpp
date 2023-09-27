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

int main(){
  int N;
  scanf("%d%*c", &N);

  VI seq(N);
  REP(i, 0, N){
    scanf("%d ", &seq[i]);
  }

  int s = 0;

  REP(i, 0, N){
    int mi = INF;
    int index;
    REP(j, i, N){
      if(mi > seq[j]){
        mi = seq[j];
        index = j;
      }
    }
    if(mi != INF){
      if(seq[i] != seq[index]){
        int tmp = seq[i];
        seq[i] = mi;
        seq[index] = tmp;
        s++;
      }
    }
  }
  REP(i, 0, N){
    if(i > 0){
      printf(" ");
    }
    printf("%d", seq[i]);
  }
  printf("\n");
  printf("%d\n", s);

  return 0;
}