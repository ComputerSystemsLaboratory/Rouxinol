#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;


int main()
{
  int N,A,B,C,X;
  while(cin>>N>>A>>B>>C>>X){
    if(N == 0) return 0;
    int Y[N];
    FOR(i,0,N) cin >> Y[i];
    if(N == 1 && X == Y[0]) {
      cout << 0 << endl;
      continue;
    }
    int fr = 0;
    int now = X == Y[0];
    int rnd = X;
    bool ok = false;
    while(fr < 10000) {
      rnd = (A * rnd + B) % C;
      fr++;
      if(Y[now] == rnd) now++;
      if(now == N) {
        cout << fr << endl;
        ok = true;
        break;
      }
    }
    if(!ok) cout << -1 << endl;
  }
  return 0;
}