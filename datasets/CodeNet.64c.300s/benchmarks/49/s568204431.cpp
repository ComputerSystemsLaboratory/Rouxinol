#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <bitset>
#include <set>
#include <queue>

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,b,n) for(int i=b;i<n;i++)

const float PI = 3.1415926;
static const int INFTY = (1<<30);

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, a, b, res;

int main() {
  while(cin >> a) {
    cin >> b;
    n = a+b;
    if(n %10 == 0) n++;
    res = 0;
    
    while(n>0) {
      n /= 10;
      res++;
    }
    cout << res << endl;
  }

  return 0;
}