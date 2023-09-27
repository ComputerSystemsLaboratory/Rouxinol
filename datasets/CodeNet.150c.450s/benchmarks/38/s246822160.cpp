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

int n, a, b, c;

int main() {
  cin >> n;
  rep(i,n){
    cin >> a >> b >> c;
    int tmp = max(max(a,b),c);
    if(a == tmp) a=c;
    if(b == tmp) b=c;
    if(a*a + b*b == tmp*tmp)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}