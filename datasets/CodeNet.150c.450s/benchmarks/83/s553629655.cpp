#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <string>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define W_MAX 10000

int main(void)
{
  int i,j,k,l;
  int N,W;
  int valid[50005] = {1,0,};
  int value[W_MAX+5] = {0};
  cin >> N >> W;
  rep(i,N) {
    int v,w;
    cin >> v >> w;
    for(j=W-w;j>-1;j--) {
      if(value[j+w] < value[j] + v) {
        value[j+w] = value[j] + v;
      }
    }
  }
  cout << value[W] << endl;
  return 0;
}