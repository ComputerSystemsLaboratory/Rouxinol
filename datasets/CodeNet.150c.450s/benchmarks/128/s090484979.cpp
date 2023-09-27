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
   int i,j,k,l;
   int n;
   char s[25];
   cin >> s;
   for(i=strlen(s)-1;i>-1;i--) {
      cout << s[i];
   }
   cout << endl;

   return 0;
}