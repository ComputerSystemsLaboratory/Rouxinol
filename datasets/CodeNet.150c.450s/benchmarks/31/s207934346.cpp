#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <time.h>
#include <cstdio>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
/* ここからが本編 */
/*  */
int main(void)
{
  int test = 1;
  int i,j,k,l;
  int n;
  int min = INT_MAX;
  int rep = INT_MIN;
  int a;
  scanf("%d",&n);
  rep(i,n) {
    scanf("%d",&a);
    if(a - min > rep) rep = a - min;
    if(min > a) min = a;
  }
  printf("%d\n",rep);
  return 0;
}