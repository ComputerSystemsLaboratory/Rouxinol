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
  int a[3];
  int n;
  cin >> n;
  while(cin >> a[0] >> a[1] >> a[2]) {
    sort(a,a+3);
    if(SQR(a[0]) + SQR(a[1]) == SQR(a[2])) {
      puts("YES");
    }
    else puts("NO");
  }

  return 0;
}