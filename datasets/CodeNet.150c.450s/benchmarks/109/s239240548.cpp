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
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
const int MAX = 24 * 60 * 60 + 100;
int f(int h, int m, int s) {
  return h * 3600 + m * 60 + s;
}
int main()
{
  int n;
  int imos[MAX];
  while(cin>>n,n) {
    int ans = 0;
    CLR(imos);
    FOR(i,0,n) {
      int h1, m1, s1;
      int h2, m2, s2;
      scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
      imos[f(h1,m1,s1)]++;
      imos[f(h2,m2,s2)]--;
    }
    FOR(i,0,MAX-1) {
      imos[i+1] += imos[i];
      ans = max(ans, imos[i+1]);
    }
    cout << ans << endl;
  }
  return 0;
}