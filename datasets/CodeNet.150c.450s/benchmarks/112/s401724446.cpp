#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
 
#include "bits/stdc++.h"
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <list>
#define REP(i,a,b) for(i=a;i<b;++i)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ull unsigned ll
typedef long double ld;
#define SQR(X)  ( (X)*(X) )
#define CUBE(X) ( (X)*(X)*(X) )
 
// #define int ll
 
using namespace std;
 
bool test = 0;
 
/* ?????????????????¬??¨ */
 
int main(){
  int i,j,k,l;
  int n;
  while(scanf("%d",&n) != EOF) {
    map<char,char> m;
    if(n == 0) break;
    rep(i,n) {
      char a,b;
      cin >> a >> b;
      m[a] = b;
    }
    cin >> n;
    rep(i,n) {
      char c; cin >> c;
       if (m.find(c) == m.end()) {
         putchar(c);
       }
       else putchar(m[c]);
    }
    putchar('\n');
  }
  return 0;
}