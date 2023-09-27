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

bool solve(const VI v){
  int head = v[0];
  int right_head = -1;
  REP(i, 1, 10){
    if(head >= v[i]){
      if(right_head < v[i]){
        right_head = v[i];
      } else {
        return false;
      }
    } else {
      head = v[i];
    }
  }

  return true;
}

int main(){
  int num;

  scanf("%d\n", &num);

  REP(i, 0, num){
    VI v;
    REP(j, 0, 10){
      int tmp;
      scanf("%d ", &tmp);
      v.push_back(tmp);
    }
    if(solve(v)){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }  

  return 0;
}