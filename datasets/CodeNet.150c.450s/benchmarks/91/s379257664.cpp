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



int main(){
  int n = 1000000;
  vector<bool> p(n, true);
  p[0] = false;
  p[1] = false;

  REP(i, 2, n){
    if(p[i]){
      for(int j = i * 2; j < n; j += i){
        p[j] = false;
      }
    }
  }
  
  int N;

  VI v(n, 0);
  REP(i, 1, n){
    if(p[i]){
      v[i] = v[i-1] + 1;
    } else {
      v[i] = v[i-1];
    }
  }
  while(cin >> N){
    cout << v[N] << endl;
  }

  return 0;
}