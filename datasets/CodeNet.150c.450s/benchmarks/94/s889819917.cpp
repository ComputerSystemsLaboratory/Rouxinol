#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <bitset>
#include <set>
#include <queue>

#define rep(i,n) for(int i=0;i<n;i++)
#define drep(i,n) for(int i=n;i>0;i--)
#define REP(i,b,n) for(int i=b;i<n;i++)
#define DREP(i,b,n) for(int i=n;i>b;i--)

const float PI = 3.1415926;
static const int INFTY = (1<<30);

using namespace std;

typedef long long ll;
typedef long double ld;

int n, a[100],res;

int main() {
  res = 0;
  cin >> n;
  rep(i,n) cin >> a[i];
  rep(i,n) DREP(j,i,n-1) {
    if(a[j]<a[j-1]) {
      int tmp = a[j];
      a[j] = a[j-1];
      a[j-1] = tmp;
      res++;
    }
  }
  rep(i,n){
    if(i == n-1)
      cout << a[i];
    else
    cout << a[i] << " ";
  }
  cout << endl;
  cout << res << endl;
    
  return 0;
}