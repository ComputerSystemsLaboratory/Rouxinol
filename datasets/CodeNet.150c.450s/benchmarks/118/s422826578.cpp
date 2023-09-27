#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <climits>
#include <queue>
#include <set>
#include <map>
#include <valarray>
#include <bitset>
#include <stack>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
typedef long long ll;
typedef pair<int,int> pii;
const int INF = 1<<29;
const double PI = acos(-1);
const double EPS = 1e-8;

int func(int y,int m, int d) {
  int yy = 1;
  int mm = 1;
  int dd = 1;
  REP(i,INF) {
    //cout << yy << " " << mm << " " << dd << endl;
    if (yy==y&&mm==m&&dd==d) return i+1;
    dd++;
    if (yy%3!=0 && mm%2==0) {
      if (dd == 20) {
        mm++;
        dd = 1;
      }
    } else {
      if (dd == 21) {
        mm++;
        dd = 1;
      }
    }
    if (mm == 11) {
      mm = 1;
      yy++;
    }
  }
}
int main() {
  int n;
  cin >> n;
  int a = func(1000,1,1);
  while(n--) {
    int y,m,d;
    cin>>y>>m>>d;
    cout << a-func(y,m,d) << endl;
  }
}