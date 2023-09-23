#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <cstdio>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
/* ここからが本編 */
/* */
/* 入力開始！ */
/* 入力終了！ */
int main(void)
{
   int n;
   double a,b,c,d,e,f;
   double x,y;
   while(cin >> a) {
      cin >> b >> c >> d >> e >> f;
      y = (a*f-d*c)/(a*e-b*d);
      x = (c - b*y)/a;
      printf("%.3f %.3f\n",x,y);
   }

   return 0;
}