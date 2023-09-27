#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
#define REP(i,a,n) for(int i=a;i<n;i++)
#define rep(i,n) REP(i,0,n)
void solve(){
}

int day[] = {0, 20, 19, 20, 19, 20, 19, 20, 19, 20, 19};

int main(){
  int T;
  cin >> T;

  while(T--){
    int cnt = 1;
    int y, m, d;
    cin >> y >> m >> d;

    while(true){
      if(y == 1000 && m == 1 && d == 1){
        break;
      }

      d++;

      int lim = (y % 3 == 0 ? 20 : day[m]);

      if(lim < d){
        d = 1;
        m++;
      }

      if(10 < m){
        m = 1;
        d = 1;
        y++;
      }

      cnt++;
    }

    cout << cnt - 1 << endl;
  }

  return 0;
}