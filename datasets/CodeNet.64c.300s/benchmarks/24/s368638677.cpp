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
    if(n == 0) break;
    int score[2] = {0};
    for(i=0;i<n;i++) {
      int num[2];
      cin >> num[0] >> num[1];
      auto sum = num[0]+num[1];
      if(num[0] > num[1]) score[0] += sum;
      else if(num[0] < num[1]) score[1] += sum;
      else {
        for(j=0;j<2;j++) score[j] += num[j];
      }
    }
    printf("%d %d\n",score[0],score[1]);
  }
  return 0;
}