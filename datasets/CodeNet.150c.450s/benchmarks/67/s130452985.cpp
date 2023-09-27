#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <set>
#include <sstream>
#include <numeric>
#include <bitset>
#include <complex>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cctype>
#include <cassert>
using namespace std;
 
typedef long long ll;
static const double EPS = 1e-8;
static const double PI = 4.0 * atan(1.0);
bool ISINT(double x){return fabs(x-(int)round(x))<EPS;}
bool ISEQ(double x,double y){return fabs(x-y)<EPS;}
string itos(ll x){stringstream ss;ss<<x;return ss.str();}
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin();itr!=c.end();itr++)

int main(void){
  int n;

  while(cin >> n){
    if(n == 0){
      break;
    }
    if(n == 1){
      cout << 0 << endl;
      continue;
    }

    int sum = 0;
    int lo = 1;
    int hi = 1;
    int ans = 0;

    while(lo < n){
      while(sum < n){
        sum += hi; hi++;
      }

      if(sum == n){
        ans++;
        sum -= lo; lo++;
      }

      while(sum > n){
        sum -= lo; lo++;
      }

      if(sum == n){
        ans++;
        sum += hi; hi++;
      }
    }

    cout << ans - 1 << endl;
  }
}