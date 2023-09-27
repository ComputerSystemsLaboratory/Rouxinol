#include <algorithm>
#include <climits>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map> //pair is also included in this library
#include <queue>
#include <stack>
#include <string>
#include <vector>

#define REP(i, s, n) for(int i = (int)(s); i < (int)(n); i++)

using namespace std;

typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PII;

//prefer define statement
//for reason that const int ver. of INF will raise a silly warning (unused variable)
#define INF (INT_MAX/3)
#define LIM_INF (INT_MAX)
//const int INF = INT_MAX/3;

/*------------------------------------------------------------------------------*/

typedef struct {
  int u, v, cost;
} Edge;

void solve(vector<Edge> es){
  VI d(10, INF);
  bool update = true;
  VI ans(10, 0);
  int lim = 10;

  REP(i, 0, lim){

    bool reach[10] = {false};
    REP(j, 0, 10){
      d[j] = INF;
    }
    d[i] = 0;
    reach[i] = true;
    update = true;

    while(update){
      update = false;
      REP(j, 0, es.size()){
        Edge e = es[j];
        if(d[e.u] != INF && d[e.v] > d[e.u] + e.cost){
          d[e.v] = d[e.u] + e.cost;
          update = true;
          reach[e.v] = true;
        }
      }
    }
    REP(j, 0, lim){
      if(reach[j]){
        ans[i] += d[j];
      } else {
        lim = j;
      }
    }
  }

  int f = INF;
  int v = -1;
  REP(i, 0, lim){
    if(f > ans[i]){
      f = ans[i];
      v = i;
    }
  }
  cout << v << " " << f << endl;

  return;
}

int main(){
  int N;

  while(1){
    cin >> N;
    if(N == 0){
      break;
    }
    vector<Edge> es(2*N);
    REP(i, 0, N){
      int a, b, c;
      cin >> a >> b >> c;
      es[i].u = a; es[i].v = b; es[i].cost = c;
      es[i+N].v = a; es[i+N].u = b; es[i+N].cost = c;
    }
    solve(es);
  }

  return 0;
}