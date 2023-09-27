#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <time.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define SQR(X) ((X)*(X))
int test = 0;
/* ここからが本編 */
int main(void)
{
  int i,j,k,l;
  int rep = 100000;
  int n;
  cin >> n;
  rep(i,n) {
    ull a = rep;
    rep += rep*5/100/1000*1000;
    if( (a*5) % (1000*100)) {
      rep += 1000;
    }
  }
  cout << rep << endl;
  return 0;
}