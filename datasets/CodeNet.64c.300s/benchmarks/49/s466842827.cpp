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
   int a,b;
   while(cin >> a >> b) {
      int cnt = 0;
      a += b;
      while(1) {
         if(a == 0) break;
         a /= 10;
         cnt++;
      }
      cout << cnt << endl;
   }

   return 0;
}